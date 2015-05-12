include $(top_srcdir)/build-aux/verbose.mk

AM_TESTS_ENVIRONMENT = \
  apipath=$(top_srcdir)/fingerprint/fingerprint.js;
TESTS = javascript
MODULES = node_modules
EXTRA_DIST = $(MODULES)

javascript: $(MODULES)

$(MODULES): package.json.in
	$(AX_V_NPM) npm install &> /dev/null
