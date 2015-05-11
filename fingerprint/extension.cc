#define LOG_TAG "fingerprint"

#include <fingerprint/extension.h>
#include <fingerprint/instance.h>
#include <fingerprint/api.h>

namespace fp = fingerprint;

common::Extension * CreateExtension() {
  return new fp::Extension();
}

fp::Extension::Extension() {
  SetExtensionName("fingerprint");
  SetJavaScriptAPI(kSource_api);
}

fp::Extension::~Extension() {}

common::Instance * fp::Extension::CreateInstance() {
  return new fp::Instance();
}
