#include "system_input.hpp"

namespace sys_input {

void init() {
    pinMode(cfg::BTN_UP, INPUT_PULLUP);
    pinMode(cfg::BTN_DOWN, INPUT_PULLUP);
    pinMode(cfg::BTN_LEFT, INPUT_PULLUP);
    pinMode(cfg::BTN_RIGHT, INPUT_PULLUP);
    pinMode(cfg::BTN_ACTION, INPUT_PULLUP);
}

bool readButton(uint8_t pin) {
    return digitalRead(pin) == LOW; // buttons active low
}

}
