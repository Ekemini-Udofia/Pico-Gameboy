#pragma once
#include <Arduino.h>
#include <Adafruit_SSD1306.h>
#include "config.hpp"

namespace sys_display {

void init();
void clear();
void drawTest();
void update();

}
