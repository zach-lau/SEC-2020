#include "Delivalib.h"
#include "Robot.h"
#include "Test.h"

#define DEBUG 1
RealRobot r;
TestGripper g;
TestDriveTrain d;
TestObjectLocator o;
TestLineFollower l;

void setup() {
  // Test code
  Serial.begin(9600);
  r.add_object_locator(&o);
  r.add_drivetrain(&d);
  r.add_gripper(&g);
  r.add_line_follower(&l);
  #if DEBUG
  test();
  #else
  // Production code
  
  #endif
}

void loop() {
  #if DEBUG
  r.deliver();
  #else
  #endif
}
