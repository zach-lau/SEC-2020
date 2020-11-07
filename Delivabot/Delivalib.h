#ifndef __delivalib__
#define __delivalib__

// Deliver function takes in four separate functions to execute
int deliver(int pickup_func(), int go_func(int), int drop_off_func(), int return_func());

// Pickup functions
int pickup();
int test_pickup();

// Go functions -- go to the location
int go_to_room(int room_number);
int test_go(int room_number);

// Drop off functions -- leave the package at the door
int drop_off(); 
int test_drop();

// Return functions -- return
int return_to_start();
int test_return();

#endif
