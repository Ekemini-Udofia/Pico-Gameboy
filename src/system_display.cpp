#include "system_display.hpp"

namespace sys_display {

  // Using Adafruit SSD1306 (I2C)
  static Adafruit_SSD1306 display(cfg::OLED_WIDTH, cfg::OLED_HEIGHT, &Wire);

  void init() {
      if(!display.begin(SSD1306_SWITCHCAPVCC, 0x3C)) {
          Serial.println("SSD1306 allocation failed");
          for(;;);
      }
      clear();
      display.display();
  }

  void clear() {
      display.clearDisplay();
  }

  void drawTest() {
      display.setTextSize(1);
      display.setTextColor(SSD1306_WHITE);
      display.setCursor(0,0);
      display.println("Phase 1 OLED Test");
  }

  void update() {
      display.display();
  }
}
