#ifndef __test__
#define __test__

#include "TestUtilities.h"

// Write tests up here
int sanity(){
  return assert<int>(1,1);
  }

// Register them down here

void test(){
  Tester t;
  t.test("Sanity",sanity);
  }

#endif
