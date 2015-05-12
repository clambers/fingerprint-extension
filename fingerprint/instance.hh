#ifndef FP_INSTANCE_HH
#define FP_INSTANCE_HH

#include <string>
#include <fingerprint/spec.hh>

namespace fingerprint {
  class instance : public spec {
  public:
    instance();
    virtual ~instance();

    virtual void error(std::string const& e) override;
    virtual void scan(std::string const& name) override;
    virtual bool verify() override;
    virtual void remove(std::string const& name) override;
  };
}

#endif
