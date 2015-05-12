#ifndef FP_EXTENSION_HH
#define FP_EXTENSION_HH

#include <common/extension.h>

namespace fingerprint {
  class extension : public common::Extension {
  public:
    extension();
    virtual ~extension();

  private:
    virtual common::Instance * CreateInstance() override;
  };
}

#endif
