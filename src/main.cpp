#include <Arduino.h>
#include "system_display.hpp"
#include "system_input.hpp"
#include "config.hpp"

using namespace sys_display;
using namespace sys_input;

void setup() {
    Serial.begin(115200);
    sys_input::init();
    sys_display::init();
    clear();
    update();
}

void loop() {
    // Simple test: read buttons and print
    if(readButton(cfg::BTN_UP)) Serial.println("UP pressed");
    if(readButton(cfg::BTN_DOWN)) Serial.println("DOWN pressed");
    if(readButton(cfg::BTN_LEFT)) Serial.println("LEFT pressed");
    if(readButton(cfg::BTN_RIGHT)) Serial.println("RIGHT pressed");
    if(readButton(cfg::BTN_ACTION)) Serial.println("ACTION pressed");

    delay(100); // simple debounce / test delay
}
