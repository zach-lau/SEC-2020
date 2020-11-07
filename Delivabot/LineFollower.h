#ifndef __line_follow__
#define __line_follow__

class LineFollower{
  private:
  
  public:
    virtual int left_motor_command() = 0;
    virtual int right_motor_command() = 0;
    virtual bool turned() = 0;
    virtual int rooms_passed() = 0;
  };


class TestLineFollower : public LineFollower {
  private:

  public:
    int left_motor_command(){return 10;}
    int right_motor_command(){return 10;}
    bool turned(){return true;}
    int rooms_passed(){return 3;}
  };

class RealLineFollower : public LineFollower{
  private:
  public:
    int left_motor_command(){return 10;}
    int right_motor_command(){return 10;}
    bool turned(){return true;}
    int rooms_passed();
  };

#endif
