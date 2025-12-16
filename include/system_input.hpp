#pragma once
#include <Arduino.h>
#include "config.hpp"

namespace sys_input {

void init();
bool readButton(uint8_t pin);

}
