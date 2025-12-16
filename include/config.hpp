#pragma once
#include <cstdint>
#include <Arduino.h>

namespace cfg {

  // Display
  constexpr uint8_t OLED_WIDTH  = 128;
  constexpr uint8_t OLED_HEIGHT = 64;

  // I2C
  constexpr uint8_t PIN_SDA = 4;
  constexpr uint8_t PIN_SCL = 5;

  // Buttons
  constexpr uint8_t BTN_UP     = 6;
  constexpr uint8_t BTN_DOWN   = 7;
  constexpr uint8_t BTN_LEFT   = 8;
  constexpr uint8_t BTN_RIGHT  = 9;
  constexpr uint8_t BTN_ACTION = 10;

  // Timing
  constexpr uint32_t FRAME_TIME_MS = 16; // ~60 FPS

}
