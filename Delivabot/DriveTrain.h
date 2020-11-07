#ifndef __drive_train__
#define __drive_train__

class DriveTrain{
  private:
  public:
    virtual void slow_forward() = 0;
    virtual void stop() = 0;
    virtual void send(int left, int right) = 0;
    virtual void turn_right() = 0;
    virtual void turn_left() = 0;
  };

class TestDriveTrain : public DriveTrain{
  private:
  public:
    void slow_forward(){Serial.print("Slow forward");}
    void stop(){Serial.print("Stop");}
    void send(int left, int right){Serial.print("Send");}
    void turn_right(){Serial.print("Turn right");}
    void turn_left(){Serial.print("Turn left");}
  };

class RealDriveTrain : public DriveTrain{
  private:
  public:
    void slow_forward();
    void stop();
    void send(int left, int right);
    void turn_right();
    void turn_left();
  };

#endif
