#include <fingerprint/instance.h>

namespace fp = fingerprint;

fp::Instance::Instance() {
  LOGD("instance created");
}

fp::Instance::~Instance() {
  LOGD("instance destroyed");
}

void fp::Instance::HandleMessage(char const* message) {
  LOGD("received message");
  auto response = PrepareMessage(message);
  PostMessage(response.c_str());
}

void fp::Instance::HandleSyncMessage(char const* message) {
  auto response = PrepareMessage(message);
  SendSyncReply(response.c_str());
}

std::string fp::Instance::PrepareMessage(std::string const& message) const {
  return "You said: " + message;
}
