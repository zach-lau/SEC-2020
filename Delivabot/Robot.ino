#include "Robot.h"

//  // Robot actions
//    int pick_up_object();
//    int go_to_room(int room);
//    int drop_of_object();
//    int return_to_start(); 

// Delivery of the thing
void Robot::deliver(){
  enum State {PICKUP, GO, DELIVER, RETURN, DONE};
  static State s = PICKUP;
  switch(s){
    case PICKUP:
      if (this->pick_up_object() == 0) s = GO;
    break;
    case GO:
      if (this->go_to_room(6) == 0) s = DELIVER; // TODO Don't hard-code this
    break;
    case DELIVER:
      if (this->drop_off_object() == 0) s = RETURN;
    break;
    case RETURN:
      if (this->return_to_start() == 0) s = DONE;
    break;
    case DONE:
      Serial.print("Done\n");
    break;
    }
  }
