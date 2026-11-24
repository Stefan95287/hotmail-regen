// regen.cpp — part of hotmail-regen.

#include "hotmailregen/regen.h"

#include <cstdio>

namespace hotmailregen {

Regen::Regen(const std::string& config_path)
    : config_path_(config_path) {}

void Regen::configure(const std::string& key, const std::string& value) {
    if (key == "verbose") verbose_ = (value == "true");
}

bool Regen::run() {
    if (verbose_) std::fprintf(stderr, "[hotmail-regen] regen: run\n");
    // core logic lives here
    return true;
}

}  // namespace hotmailregen
