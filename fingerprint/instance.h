#ifndef FP_INSTANCE_H
#define FP_INSTANCE_H

#include <string>
#include <common/extension.h>

namespace fingerprint {
  class Instance : public common::Instance {
  public:
    Instance();
    virtual ~Instance();
    void HandleMessage(char const* message);
    void HandleSyncMessage(char const* message);

  private:
    std::string PrepareMessage(std::string const& message) const;
  };
}

#endif
