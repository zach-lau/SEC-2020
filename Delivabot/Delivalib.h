#ifndef __delivalib__
#define __delivalib__

// Deliver function takes in four separate functions to execute
int deliver(int pickup_func(), int go_func(int), int drop_off_func(), int return_func(), int room);

// Pickup functions
int pickup();
int test_pickup(){Serial.print("Test picking up");}

// Go functions -- go to the location
int go_to_room(int room_number);
int test_go(int room_number){Serial.print("Test going to room " + String(room_number));}

// Drop off functions -- leave the package at the door
int drop_off(); 
int test_drop(){Serial.print("Test dropping off");}

// Return functions -- return
int return_to_start();
int test_return(){Serial.print("Test returning home");}

#endif
