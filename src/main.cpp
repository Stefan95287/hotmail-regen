// main.cpp — entry point. Wires config and subsystems together.

#include "hotmailregen/settings.h"
#include "hotmailregen/regen.h"
#include "hotmailregen/captcha.h"
#include <csignal>
#include <memory>

namespace { std::atomic<bool> g_running{true}; void on_signal(int) { g_running.store(false); } }

int main(int argc, char** argv) {
    std::signal(SIGINT, on_signal);
    std::signal(SIGTERM, on_signal);

    hotmailregen::Settings settings = hotmailregen::Settings::load_default();
    hotmailregen::Regen regen(settings.store_path);
    hotmailregen::Captcha captcha(settings.store_path);
    std::fprintf(stderr, "[hotmail-regen] ready\n");

    while (g_running.load()) {
        // main loop: pump subsystems
        break;
    }
    return 0;
}
