// Create functions at the rvas listed in a file (one hex rva per line) where Ghidra has none.
// Used for static-init routines that only .CRT$XCU / atexit reach, which analysis misses.
// Usage: CreateFunctionsAt.java <rvas.txt>
//@category homm4

import java.nio.file.*;

import ghidra.app.cmd.disassemble.DisassembleCommand;
import ghidra.app.cmd.function.CreateFunctionCmd;
import ghidra.app.script.GhidraScript;
import ghidra.program.model.address.Address;
import ghidra.program.model.listing.*;

public class CreateFunctionsAt extends GhidraScript {
	@Override
	protected void run() throws Exception {
		long base = currentProgram.getImageBase().getOffset();
		Listing listing = currentProgram.getListing();
		int created = 0, existing = 0, inside = 0;
		for (String line : Files.readAllLines(Paths.get(getScriptArgs()[0]))) {
			line = line.trim();
			if (line.isEmpty()) continue;
			Address a = toAddr(base + Long.parseLong(line, 16));
			if (listing.getFunctionAt(a) != null) { existing++; continue; }
			if (listing.getFunctionContaining(a) != null) { inside++; continue; }
			if (listing.getInstructionAt(a) == null) new DisassembleCommand(a, null, true).applyTo(currentProgram, monitor);
			if (new CreateFunctionCmd(a).applyTo(currentProgram, monitor)) created++;
		}
		println("created " + created + ", already functions " + existing + ", inside another function (skipped) " + inside);
	}
}
