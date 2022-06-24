#!/usr/bin/env python3

import sys
import re


args = sys.argv
vexfilename = args[1]

vexv  = open(vexfilename, 'r')
lines = vexv.readlines()


# record port info
pnames = list()
pdirs = dict()
ppins = dict()
started = False;
for line in lines:
    if not started:
        if re.match('module VexRiscv', line):
            started = True
    else:
        parts = line.split()
        n = len(parts)
        if n <= 1:
            break

        pdir = parts[0]
        pname = parts[-1]
        pname = pname.rstrip(',')

        if re.match("\);$", pname):
            pname.rstrip(");")
            started = False

        pnames.append(pname)

        assert pdir == "input" or pdir == "output"
        pdirs[pname] = pdir

        ppins[pname] = ""
        if n == 4:
            assert parts[1] == "reg"
            ppins[pname] = parts[2]
        if n == 3:
            if parts[1] != "reg":
                ppins[pname] = parts[1]



#
# Wrapper port declaration
#
print("//")
print("// wrapper auto-generated from {}".format(vexfilename))
print("//")
print("")
print("module VexRiscv (")
for pname in pnames:
    if not re.match("CfuPlugin_bus", pname):
        comma = "," if (pname != pnames[-1]) else ""
        print("    {:10} {:10} {}{}".format(pdirs[pname], ppins[pname], pname, comma))
print(");\n\n")




#
# CFU bus signals
#
for pname in pnames:
    if re.match("CfuPlugin_bus", pname):
        print("    wire {:10} {};".format(ppins[pname], pname))
        last_cfu_port = pname
    if pname == "clk" or pname == "reset":
        last_cfu_port = pname
print("\n\n")



#
# inner VexRiscv instantiation
#
print("VexRiscv_inner VexRiscv_inner(")
for pname in pnames:
    comma = "," if (pname != pnames[-1]) else ""
    print("    .{}({}){}".format(pname, pname, comma))
print(");\n\n")


#
# inner CFU instantiation
#
print("Cfu Cfu(")
for pname in pnames:
    if re.match("CfuPlugin_bus_|^clk$|^reset$", pname):
        parts = pname.split("_");
        if parts[0] == "CfuPlugin":
            parts[0] = "io"
        if parts[0] == "reset":
            parts[0] = "rst"
        cfu_pname = "_".join(parts)
        comma = "," if (pname != last_cfu_port) else ""
        print("    .{}({}){}".format(cfu_pname, pname, comma))
print(");\n\n")


#
# finish wrapper modules
#
print("endmodule")



