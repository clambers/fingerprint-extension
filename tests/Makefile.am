AM_TESTS_ENVIRONMENT = \
  apipath=$(top_srcdir)/fingerprint/fingerprint.js;
TEST_LOG_DRIVER = env AM_TAP_AWK='$(AWK)' $(SHELL) \
                  $(top_srcdir)/build-aux/tap-driver.sh
TESTS = javascript
MODULES = node_modules
EXTRA_DIST = $(MODULES)

javascript: $(MODULES)

$(MODULES): package.json.in
	$(AM_V_GEN) npm install &> /dev/null
