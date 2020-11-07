#ifndef __test_utils__
#define __test_utils__

template<class T>
int assert(T a, T b){
  if (a == b) return 0;
  else return 1;
  }

class Tester{
  private:
    int successes, tests;
  public:
    Tester(){ successes = 0, tests = 0; }
  // tc should return 0 on success, 1 on failure
    void test(String name, int func()){
      Serial.println("Testing " + name);
      if(func() == 0){
        successes++;
        Serial.println("Pass");
        }
      else {
        Serial.println("Fail");
        }
      tests++;
      Serial.println("Total success: " + String(successes) + " Total runs: " + String(tests));
      }
  };
  
#endif
