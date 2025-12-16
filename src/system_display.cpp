#include "system_display.hpp"
#include <Wire.h> // still using Arduino Wire, since you’re bit-banging I2C manually you can remove this later

namespace sys_display {

  // Minimal screen buffer
  static uint8_t buffer[cfg::OLED_WIDTH * cfg::OLED_HEIGHT / 8];

  void init() {
      // Initialize I2C pins if doing bit-banging
      pinMode(cfg::PIN_SDA, OUTPUT);
      pinMode(cfg::PIN_SCL, OUTPUT);
      
      // Reset buffer
      clear();

      // Send minimal init sequence to SSD1306
      // This is just placeholder — you will replace with your bit-banged commands
  }

  void clear() {
      memset(buffer, 0, sizeof(buffer));
  }

  void drawPixel(uint8_t x, uint8_t y) {
      if(x >= cfg::OLED_WIDTH || y >= cfg::OLED_HEIGHT) return;
      buffer[x + (y/8)*cfg::OLED_WIDTH] |= (1 << (y % 8));
  }

  void update() {
      // Send buffer to OLED using your I2C bit-bang functions
      // For now, just leave empty
  }

}
