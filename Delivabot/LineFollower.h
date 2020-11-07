#ifndef __line_follow__
#define __line_follow__

class LineFollower{
  private:
  
  public:
    int left_motor_command();
    void right_motor_command();
  };


class TestLineFollower : public LineFollower {
  private:

  public:
  };

class RealLineFollower : public LineFollower{
  private:
  public:
  };

#endif
