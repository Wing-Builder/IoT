#include "engine.h"
#include <HCSR04.h>

HCSR04 hc(A0,A1);//initialisation class HCSR04 (trig pin , echo pin)

engine e(5, 6, 7, 8, 9, 10);

void setup() {
}

void loop() {
  e.speed = 100;
  if (hc.dist() > 10) {
    e.forward();  
  }
  else
  {
    e.left();
  }
}
