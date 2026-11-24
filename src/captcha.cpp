// captcha.cpp — part of hotmail-regen.

#include "hotmailregen/captcha.h"

#include <cstdio>

namespace hotmailregen {

Captcha::Captcha(const std::string& config_path)
    : config_path_(config_path) {}

void Captcha::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Captcha::run() {
    if (verbose_) std::fprintf(stderr, "[hotmail-regen] captcha: run\n");
    // core logic lives here
    return true;
}

}  // namespace hotmailregen
