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
  enum State {GOING, TURNING, STOPPING};
  static State s;
  switch(s){
    case GOING:
      int left_speed = this->line_follower->left_motor_command();
      int right_speed = this->line_follower->right_motor_command();
      this->drivetrain->send(left_speed, right_speed);
      if (this->line_follower->rooms_passed() == room/2)
        s = TURNING;
    break;
    case TURNING:
      if(room % 2 == 0)
        this->drivetrain->turn_right();
      else
        this ->drivetrain->turn_left();
      if (this->line_follower->turned())
        s = STOPPING; 
    break;
    case STOPPING:
      this->drivetrain->stop();
      return 0;
    break;
    }
  return 1;
  }

int RealRobot::drop_off_object(){
  return 0;
  }

int RealRobot::return_to_start(){
  return 0;
  }
