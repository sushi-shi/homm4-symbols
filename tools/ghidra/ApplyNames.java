// Apply build/<target>/names.tsv to the current program: mangled names as primary labels,
// functions created where missing, demangled via DemanglerCmd, tier/chain in a plate comment.
// Usage: ApplyNames.java <names.tsv> [min_tier] [out.gzf]   (min_tier A|B|C, default C)
// With out.gzf (run headless with -readOnly): the named program is saved next to the analysed
// one as "heroes4_named" and packed to out.gzf; the analysed program itself is untouched.
//@category homm4

import java.io.BufferedReader;
import java.io.File;
import java.io.FileReader;

import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.cmd.label.DemanglerCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;
import ghidra.program.model.symbol.*;

public class ApplyNames extends GhidraScript {
	@Override
	protected void run() throws Exception {
		String[] args = getScriptArgs();
		String minTier = args.length > 1 ? args[1] : "C";
		long base = currentProgram.getImageBase().getOffset();
		Listing listing = currentProgram.getListing();
		SymbolTable st = currentProgram.getSymbolTable();
		int n = 0, created = 0, demangled = 0, skipped = 0;
		try (BufferedReader r = new BufferedReader(new FileReader(args[0]))) {
			String line = r.readLine(); // header
			while ((line = r.readLine()) != null) {
				String[] c = line.split("\t", -1);
				String tier = c[3];
				if (tier.compareTo(minTier) > 0) { skipped++; continue; }
				Address a = toAddr(base + Long.parseLong(c[0], 16));
				String kind = c[2], mangled = c[4], chain = c[6];
				if (kind.equals("func") && listing.getFunctionAt(a) == null) {
					if (listing.getInstructionAt(a) == null) disassemble(a);
					if (new CreateFunctionCmd(a).applyTo(currentProgram)) created++;
				}
				Function f = listing.getFunctionAt(a);
				try {
					if (f != null) {
						f.setName(mangled, SourceType.IMPORTED);
					} else {
						st.createLabel(a, mangled, SourceType.IMPORTED).setPrimary();
					}
				} catch (ghidra.util.exception.DuplicateNameException e) {
					// same mangled name already used elsewhere (e.g. folded copies): keep as secondary label
					st.createLabel(a, mangled, SourceType.IMPORTED);
				}
				DemanglerCmd dc = new DemanglerCmd(a, mangled);
				if (mangled.startsWith("?") && dc.applyTo(currentProgram, monitor)) demangled++;
				String note = "homm4 tier " + tier + " | " + chain;
				String old = listing.getComment(CodeUnit.PLATE_COMMENT, a);
				if (old == null || !old.contains("homm4 tier")) {
					listing.setComment(a, CodeUnit.PLATE_COMMENT, old == null ? note : old + "\n" + note);
				}
				n++;
			}
		}
		println("applied " + n + " names (" + created + " functions created, " + demangled + " demangled, "
				+ skipped + " below tier " + minTier + ")");
		if (args.length > 2) {
			File out = new File(args[2]);
			String name = "heroes4_named";
			end(true); // commit the script transaction so the program can be saved
			ghidra.framework.model.DomainFolder root = currentProgram.getDomainFile().getParent();
			ghidra.framework.model.DomainFile old = root.getFile(name);
			if (old != null) old.delete();
			ghidra.framework.model.DomainFile df = root.createFile(name, currentProgram, monitor);
			if (out.exists()) out.delete();
			df.packFile(out, monitor);
			println("saved project file " + name + ", packed " + out + " (" + out.length() + " bytes)");
		}
	}
}
