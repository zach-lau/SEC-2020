#ifndef __gripper__
#define __gripper__

class Gripper{
  private:
  
  public:
    virtual int open() = 0;
    virtual int close() = 0;
    virtual int hold() = 0;
  };

class TestGripper : public Gripper{
  private:

  public:
    int open(){Serial.print("Open"); return 0;}
    int close(){Serial.print("Close"); return 0;}
    int hold(){Serial.print("Hold"); return 0;}
  };

class RealGripper : public Gripper{
  private:

  public:
    int open();
    int close();
    int hold();
  };

#endif
