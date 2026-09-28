// Dump per-function features and labelled data for the aligner.
// Usage (headless postScript): ExportFeatures.java <out_dir>
// Writes <out_dir>/functions.tsv, <out_dir>/data.tsv
//@category homm4

import java.io.PrintWriter;
import java.util.*;

import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.data.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;
import ghidra.program.model.scalar.Scalar;
import ghidra.program.model.symbol.*;

public class ExportFeatures extends GhidraScript {

	private long base;

	private String rva(Address a) {
		return Long.toHexString(a.getOffset() - base);
	}

	private static String clean(String s) {
		return s.replace("\\", "\\\\").replace("\t", "\\t").replace("\n", "\\n").replace("\r", "\\r");
	}

	@Override
	protected void run() throws Exception {
		String dir = getScriptArgs()[0];
		new java.io.File(dir).mkdirs();
		base = currentProgram.getImageBase().getOffset();
		Listing listing = currentProgram.getListing();
		ReferenceManager refs = currentProgram.getReferenceManager();
		SymbolTable st = currentProgram.getSymbolTable();
		Memory mem = currentProgram.getMemory();

		try (PrintWriter w = new PrintWriter(dir + "/functions.tsv")) {
			w.println("rva\tsize\tbody\tninsn\tnblocks\tretn\tthunk\tcallees\tdatarefs\timports\tscalars\tname");
			for (Function f : listing.getFunctions(true)) {
				if (monitor.isCancelled()) break;
				if (f.isExternal()) continue;
				AddressSetView body = f.getBody();
				long size = body.getMaxAddress().getOffset() - f.getEntryPoint().getOffset() + 1;
				int ninsn = 0;
				int retn = -1;
				TreeSet<String> callees = new TreeSet<>();
				TreeSet<String> datarefs = new TreeSet<>();
				TreeSet<String> imports = new TreeSet<>();
				TreeSet<Long> scalars = new TreeSet<>();
				for (Instruction ins : listing.getInstructions(body, true)) {
					ninsn++;
					String mn = ins.getMnemonicString();
					if (mn.equals("RET")) {
						int n = 0;
						if (ins.getNumOperands() > 0) {
							Scalar s = ins.getScalar(0);
							if (s != null) n = (int) s.getUnsignedValue();
						}
						retn = Math.max(retn, n);
					}
					for (Reference r : ins.getReferencesFrom()) {
						Address to = r.getToAddress();
						if (to.isExternalAddress()) {
							Symbol s = st.getPrimarySymbol(to);
							if (s != null) imports.add(s.getName());
							continue;
						}
						if (!to.isMemoryAddress()) continue;
						if (r.getReferenceType().isCall()) {
							Function cf = listing.getFunctionAt(to);
							if (cf != null && cf.isThunk()) {
								Function tf = cf.getThunkedFunction(true);
								if (tf != null && tf.isExternal()) { imports.add(tf.getName()); continue; }
							}
							callees.add(rva(to));
						} else if (r.getReferenceType().isData() || r.getReferenceType().isRead()
								|| r.getReferenceType().isWrite()) {
							Data d = listing.getDataContaining(to);
							// pointer to IAT slot
							Symbol s = st.getPrimarySymbol(to);
							if (s != null && s.getParentNamespace() != null && s.getSymbolType() == SymbolType.LABEL
									&& s.getName().startsWith("PTR_") == false && s.isExternalEntryPoint() == false
									&& mem.getBlock(to) != null && mem.getBlock(to).getName().equals(".idata")) {
								imports.add(s.getName());
								continue;
							}
							datarefs.add(rva(to));
						}
					}
					for (int i = 0; i < ins.getNumOperands(); i++) {
						for (Object o : ins.getOpObjects(i)) {
							if (o instanceof Scalar) {
								long v = ((Scalar) o).getSignedValue();
								if (Math.abs(v) >= 0x10 && Math.abs(v) < 0x400000) scalars.add(v);
							}
						}
					}
				}
				w.println(rva(f.getEntryPoint()) + "\t" + Long.toHexString(size) + "\t"
						+ Long.toHexString(body.getNumAddresses()) + "\t" + ninsn + "\t"
						+ countBlocks(f) + "\t" + retn + "\t" + (f.isThunk() ? 1 : 0) + "\t"
						+ String.join(",", callees) + "\t" + String.join(",", datarefs) + "\t"
						+ String.join(",", imports) + "\t" + joinLongs(scalars) + "\t" + clean(f.getName()));
			}
		}

		try (PrintWriter w = new PrintWriter(dir + "/data.tsv")) {
			w.println("rva\tkind\tlen\tlabel\tvalue");
			for (Data d : listing.getDefinedData(true)) {
				if (monitor.isCancelled()) break;
				DataType dt = d.getDataType();
				String label = d.getLabel() == null ? "" : d.getLabel();
				Symbol ps = d.getPrimarySymbol();
				String full = ps == null ? "" : ps.getName(true);
				if (d.hasStringValue()) {
					Object v = d.getValue();
					w.println(rva(d.getAddress()) + "\tstring\t" + d.getLength() + "\t" + clean(full) + "\t"
							+ clean(v == null ? "" : v.toString()));
				} else if (full.contains("vftable") || full.contains("RTTI") || dt.getName().contains("RTTI")
						|| dt.getName().contains("TypeDescriptor")) {
					w.println(rva(d.getAddress()) + "\t" + clean(dt.getName()) + "\t" + d.getLength() + "\t"
							+ clean(full) + "\t" + vftableSlots(d, full));
				}
			}
			// vftables are often labelled but typed as undefined pointer arrays; add labels too.
			for (Symbol s : st.getAllSymbols(true)) {
				String n = s.getName(true);
				if (n.endsWith("vftable") && listing.getDefinedDataAt(s.getAddress()) == null) {
					w.println(rva(s.getAddress()) + "\tvftable_label\t0\t" + clean(n) + "\t"
							+ vftableSlotsAt(s.getAddress()));
				}
			}
		}
	}

	private String vftableSlots(Data d, String name) {
		if (!name.endsWith("vftable")) return "";
		return vftableSlotsAt(d.getAddress());
	}

	private String vftableSlotsAt(Address a) {
		Memory mem = currentProgram.getMemory();
		MemoryBlock text = mem.getBlock(".text");
		List<String> slots = new ArrayList<>();
		for (int i = 0; i < 1024; i++) {
			try {
				Address sa = a.add(4L * i);
				if (i > 0 && currentProgram.getSymbolTable().getPrimarySymbol(sa) != null
						&& currentProgram.getSymbolTable().getPrimarySymbol(sa).getSource() != SourceType.DEFAULT) {
					break;
				}
				long v = mem.getInt(sa) & 0xffffffffL;
				Address t = a.getNewAddress(v);
				if (!text.contains(t)) break;
				slots.add(Long.toHexString(v - base));
			} catch (Exception e) {
				break;
			}
		}
		return String.join(",", slots);
	}

	private int countBlocks(Function f) {
		try {
			ghidra.program.model.block.BasicBlockModel m = new ghidra.program.model.block.BasicBlockModel(currentProgram);
			int n = 0;
			ghidra.program.model.block.CodeBlockIterator it = m.getCodeBlocksContaining(f.getBody(), monitor);
			while (it.hasNext()) { it.next(); n++; }
			return n;
		} catch (Exception e) {
			return -1;
		}
	}

	private static String joinLongs(Collection<Long> c) {
		StringBuilder b = new StringBuilder();
		for (Long l : c) {
			if (b.length() > 0) b.append(',');
			b.append(l < 0 ? "-" + Long.toHexString(-l) : Long.toHexString(l));
		}
		return b.toString();
	}
}
