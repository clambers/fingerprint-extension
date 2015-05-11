BUILT_SOURCES = api.h
JSMIN = $(top_srcdir)/build-aux/jsmin
CPPWRAP = $(top_srcdir)/build-aux/cppwrap
EXTRA_DIST = 40-libfprint0.rules
MAINTAINERCLEANFILES = api.h

extdir = $(libdir)/tizen-extensions-crosswalk
ruledir = $(libdir)/udev/rules.d

ext_LTLIBRARIES = libfingerprint.la
libfingerprint_la_SOURCES = \
  extension.cc extension.h \
  instance.cc instance.h \
  api.js
libfingerprint_la_CPPFLAGS = -I$(top_srcdir) @dlog_CFLAGS@ @jansson_CFLAGS@ \
  @libfprint_CFLAGS@
libfingerprint_la_CXXFLAGS = -std=c++11
libfingerprint_la_LDFLAGS = -version 0:0:0
libfingerprint_la_LIBADD = $(top_builddir)/common/libcommon.la @dlog_LIBS@ \
  @jansson_LIBS@ @libfprint_LIBS@

rule_DATA = 40-libfprint0.rules

%.h: %.js
	$(AM_V_GEN) $(JSMIN) -o $*.min.js $< && $(CPPWRAP) -o $@ $*.min.js
