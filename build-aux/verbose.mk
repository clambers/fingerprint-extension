AX_V_NPM = $(AX_V_NPM_$(V))
AX_V_NPM_ = $(AX_V_NPM_$(AM_DEFAULT_VERBOSITY))
AX_V_NPM_0 = @echo "  NPM     " `basename $@`;
AX_V_NPM_1 =

AX_V_JSMIN = $(AX_V_JSMIN_$(V))
AX_V_JSMIN_ = $(AX_V_JSMIN_$(AM_DEFAULT_VERBOSITY))
AX_V_JSMIN_0 = @echo "  JSMIN   " `basename $@`;
AX_V_JSMIN_1 =

AX_V_CPPWRAP = $(AX_V_CPPWRAP_$(V))
AX_V_CPPWRAP_ = $(AX_V_CPPWRAP_$(AM_DEFAULT_VERBOSITY))
AX_V_CPPWRAP_0 = @echo "  CPPWRAP " `basename $@`;
AX_V_CPPWRAP_1 =
