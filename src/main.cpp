#include <Arduino.h>

#include "debug.h"

void setup()
{
    DEBUG_INIT(115200, 10000);
    DEBUG_PRINTLN("Start!");
}

void loop()
{
    // nothing for now here!
}