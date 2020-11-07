#include "Robot.h"

//    virtual int pick_up_object() = 0;
//    virtual int go_to_room(int room) = 0;
//    virtual int drop_off_object() = 0;
//    virtual int return_to_start() = 0; 

int TestRobot::pick_up_object(){
  return 0;
  }

int TestRobot::go_to_room(int room){
  Serial.println("Going to room " + String(room));
  return 0;
  }

int TestRobot::drop_off_object(){
  return 0;
  }

int TestRobot::return_to_start(){
  return 0;
  }
