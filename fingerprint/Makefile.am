BUILT_SOURCES = api.hh spec.hh
CPPWRAP = $(top_srcdir)/build-aux/cpp-wrap
RPCWRAP = $(top_srcdir)/build-aux/rpc-wrap
EXTRA_DIST = 40-libfprint0.rules $(MODULES)
CLEANFILES = api.hh spec.hh

extdir = $(libdir)/tizen-extensions-crosswalk
ruledir = $(libdir)/udev/rules.d

ext_LTLIBRARIES = libfingerprint.la
libfingerprint_la_SOURCES = \
  extension.cc extension.hh \
  instance.cc instance.hh \
  api.js \
  spec.json
libfingerprint_la_CPPFLAGS = -I$(top_srcdir) @dlog_CFLAGS@ @jansson_CFLAGS@ \
  @libfprint_CFLAGS@
libfingerprint_la_CXXFLAGS = -std=c++11
libfingerprint_la_LDFLAGS = -version 0:0:0
libfingerprint_la_LIBADD = $(top_builddir)/common/libcommon.la @dlog_LIBS@ \
  @jansson_LIBS@ @libfprint_LIBS@

rule_DATA = 40-libfprint0.rules

%.hh: %.js $(CPPWRAP)
	$(AM_V_GEN) $(CPPWRAP) -o $@ $<

%.hh: %.json $(RPCWRAP)
	$(AM_V_GEN) $(RPCWRAP) -n fingerprint -o $@ $<
