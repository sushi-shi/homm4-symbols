// Create functions at 16-byte aligned addresses that follow inter-function padding
// (0x90 / 0xCC run after a RET or JMP), which VC6 /O2 emits between functions.
// Ghidra misses many of these when a function is only reached through pointers.
// Usage: PaddedFunctionStarts.java <end_rva_hex>   (stop before the EH funclet region)
//@category homm4

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.*;
import ghidra.program.model.listing.*;
import ghidra.program.model.mem.*;

public class PaddedFunctionStarts extends GhidraScript {
	@Override
	protected void run() throws Exception {
		long end = Long.parseLong(getScriptArgs()[0], 16);
		Memory mem = currentProgram.getMemory();
		Listing listing = currentProgram.getListing();
		MemoryBlock text = mem.getBlock(".text");
		Address base = currentProgram.getImageBase();
		long lo = text.getStart().getOffset(), hi = Math.min(text.getEnd().getOffset(), base.getOffset() + end);
		int created = 0, split = 0, candidates = 0;
		for (long a = (lo + 16) & ~15L; a < hi; a += 16) {
			Address addr = toAddr(a);
			byte prev = mem.getByte(toAddr(a - 1));
			if (prev != (byte) 0x90 && prev != (byte) 0xcc) continue;
			// walk back over the padding run; it must start right after a RET/JMP
			long p = a - 1;
			while (p > lo && (mem.getByte(toAddr(p)) == prev) && a - p < 16) p--;
			Instruction last = listing.getInstructionContaining(toAddr(p));
			if (last == null) continue;
			String mn = last.getMnemonicString();
			if (!(mn.equals("RET") || mn.equals("JMP"))) continue;
			if (last.getMaxAddress().getOffset() != p) continue;
			byte b0 = mem.getByte(addr);
			if (b0 == (byte) 0x90 || b0 == (byte) 0xcc || b0 == 0) continue;
			candidates++;
			if (listing.getFunctionAt(addr) != null) continue;
			if (listing.getInstructionAt(addr) == null) {
				DisassembleCommand dc = new DisassembleCommand(addr, null, true);
				dc.applyTo(currentProgram, monitor);
			}
			if (listing.getInstructionAt(addr) == null) continue;
			Function containing = listing.getFunctionContaining(addr);
			if (containing != null) split++;
			CreateFunctionCmd cmd = new CreateFunctionCmd(addr);
			if (cmd.applyTo(currentProgram, monitor)) created++;
			if (containing != null) {
				// shrink the old function so it no longer swallows the new one
				CreateFunctionCmd.fixupFunctionBody(currentProgram, containing, monitor);
			}
		}
		println("candidates " + candidates + ", created " + created + " (" + split + " split from existing)");
	}
}
