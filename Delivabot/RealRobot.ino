#include "Robot.h"

// Return 0 when done
int RealRobot::pick_up_object(){
  enum State {APPROACHING, CLOSING, CLOSED};
  static State s = APPROACHING;
  switch(s){
    case APPROACHING:
      this->drivetrain->slow_forward();
      if(this->object_locator->located()) s = CLOSING;
    break;
    case CLOSING:
      this->drivetrain->stop();
      if(this-> gripper->close() == 0) s = CLOSED;
    break;
    case CLOSED:
      this -> gripper->hold();
      return 0;
    break;
    }
   return 1;
  }

int RealRobot::go_to_room(int room){
  Serial.println("Going to room " + String(room));
  return 0;
  }

int RealRobot::drop_off_object(){
  return 0;
  }

int RealRobot::return_to_start(){
  return 0;
  }
