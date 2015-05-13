ACLOCAL_AMFLAGS = -I m4
AM_MAKEFLAGS = --no-print-directory
EXTRA_DIST = \
	$(srcdir)/LICENSE \
	$(srcdir)/README.md \
	$(srcdir)/NEWS.md \
	$(srcdir)/autogen.sh \
  $(srcdir)/build-aux/rpc-wrap.py
SUBDIRS = common fingerprint tests

pcdir = $(datadir)/pkgconfig
pc_DATA = fingerprint.pc
