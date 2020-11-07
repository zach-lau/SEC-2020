#ifndef __drive_train__
#define __drive_train__

class DriveTrain{
  private:
  public:
    virtual void slow_forward() = 0;
    virtual void stop() = 0;
  };

class TestDriveTrain : public DriveTrain{
  private:
  public:
    void slow_forward(){Serial.print("Slow forward");}
    void stop(){Serial.print("Stop");}
  };

class RealDriveTrain : public DriveTrain{
  private:
  public:
    void slow_forward();
    void stop();
  };

#endif
