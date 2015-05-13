BUILT_SOURCES = spec.hh
RPCWRAP = $(top_srcdir)/build-aux/rpc-wrap.py
EXTRA_DIST = 40-libfprint0.rules spec.hh $(MODULES)

extdir = $(libdir)/tizen-extensions-crosswalk
ruledir = $(libdir)/udev/rules.d

rule_DATA = 40-libfprint0.rules
ext_LTLIBRARIES = libfingerprint.la

libfingerprint_la_SOURCES = \
  extension.cc extension.hh \
  instance.cc instance.hh \
  spec.json
libfingerprint_la_CPPFLAGS = -I$(top_srcdir) @dlog_CFLAGS@ @jansson_CFLAGS@ \
  @libfprint_CFLAGS@
libfingerprint_la_CXXFLAGS = -std=c++11
libfingerprint_la_LDFLAGS = -version 0:0:0
libfingerprint_la_LIBADD = $(top_builddir)/common/libcommon.la @dlog_LIBS@ \
  @jansson_LIBS@ @libfprint_LIBS@

%.hh: %.json $(RPCWRAP)
	$(AM_V_GEN) $(RPCWRAP) -n fingerprint -o $@ $<
