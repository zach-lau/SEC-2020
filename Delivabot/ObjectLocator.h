#ifndef __object__
#define __object__

class ObjectLocator{
  private:

  public:
    virtual bool located() = 0;
  };

class TestObjectLocator : public ObjectLocator{
  private:

  public:
    bool located(){return true;}
  };

class RealObjectLocator : public ObjectLocator{
  private:
  
  public:
    
  };

#endif
