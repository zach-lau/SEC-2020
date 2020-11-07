#ifndef __robot__
#define __robot__

#include "ObjectLocator.h"
#include "Gripper.h"
#include "DriveTrain.h"
#include "LineFollower.h"

class Robot {
  private:
    ObjectLocator object_locator; // Module for object location
    Gripper gripper;
    DriveTrain drivetrain;
    LineFollower line_follower; // Line following odule

  public:
  // Robot actions
    virtual int pick_up_object() = 0;
    virtual int go_to_room(int room) = 0;
    virtual int drop_off_object() = 0;
    virtual int return_to_start() = 0; 

  // Register line followers and stuff
    void add_object_locator(ObjectLocator o){object_locator = o;}
    void add_gripper(Gripper g){gripper = g;}
    void add_drivetrain(DriveTrain d){drivetrain = d;}
    void add_line_follower(LineFollower l){line_follower = l;}
    void deliver();
  
  };

class TestRobot : public Robot{
  private:
  public:
    int pick_up_object();
    int go_to_room(int room);
    int drop_off_object();
    int return_to_start();
  };

#endif
