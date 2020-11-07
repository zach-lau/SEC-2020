#include "Delivalib.h"
#include "Robot.h"
#include "Test.h"

#define DEBUG 1
Robot r;

void setup() {
  // Test code
  Serial.begin(9600);
  #if DEBUG
  test();
  #else
  // Production code
  
  #endif
}

void loop() {
  #if DEBUG
  #else
  #endif
}
