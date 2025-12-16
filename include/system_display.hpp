#pragma once
#include <Arduino.h>
#include "config.hpp"

namespace sys_display {

  void init();
  void clear();
  void drawPixel(uint8_t x, uint8_t y);
  void update();

}
