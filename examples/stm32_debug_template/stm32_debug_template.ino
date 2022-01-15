#define DEBUG
#include <debug.h>


void setup() {
  #ifdef DEBUG
    Serial.begin(115200);
  #endif
}

void loop() {
  debug("hi");
  debugln();
}
