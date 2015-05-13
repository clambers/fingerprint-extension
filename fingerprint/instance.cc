#include <config.h>

#define LOG_TAG PACKAGE

#include <fingerprint/instance.hh>
#include <dlog.h>
#include <exception>

namespace fp = fingerprint;

fp::instance::instance() {
  LOGD("instance created");
}

fp::instance::~instance() {
  LOGD("instance destroyed");
}

void fp::instance::scan(std::string const& name) {
  LOGD("scanning %s", name.c_str());
}

bool fp::instance::verify() {
  LOGD("verifying");
  return true;
}

void fp::instance::remove(std::string const& name) {
  LOGD("removing %s", name.c_str());
}
