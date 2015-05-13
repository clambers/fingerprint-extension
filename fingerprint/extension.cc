#include <config.h>

#define LOG_TAG PACKAGE

#include <fingerprint/extension.hh>
#include <fingerprint/instance.hh>
#include <fingerprint/spec.hh>

namespace fp = fingerprint;

common::Extension * CreateExtension() {
  return new fp::extension;
}

fp::extension::extension() {
  LOGD("extension created");
  SetExtensionName("fingerprint");
  SetJavaScriptAPI(kSource_api);
}

fp::extension::~extension() {
  LOGD("extension destroyed");
}

common::Instance * fp::extension::CreateInstance() {
  return new fp::instance;
}
