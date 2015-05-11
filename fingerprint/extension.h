#ifndef FP_EXTENSION_H
#define FP_EXTENSION_H

#include <common/extension.h>

namespace fingerprint {
  class Extension : public common::Extension {
  public:
    Extension();
    virtual ~Extension();

  private:
    virtual common::Instance * CreateInstance();
  };
}

#endif
