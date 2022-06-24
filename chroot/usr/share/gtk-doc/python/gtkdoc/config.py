version = "1.32"

# tools
dblatex = ''
fop = ''
pkg_config = '/usr/bin/x86_64-pc-linux-gnu-pkg-config'
xsltproc = '/usr/bin/xsltproc'

# configured directories
prefix = '/usr'
datarootdir = "${prefix}/share".replace('${prefix}', prefix)
datadir = "/usr/share".replace('${datarootdir}', datarootdir)

exeext = ''
