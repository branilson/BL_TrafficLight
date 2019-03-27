#ifndef MAIN_HPP
#define MAIN_HPP

#include "mbed.h"

enum states{RED, GREEN, YELLOW}; //States enumeration
int state = RED; // Defining first state as green
DigitalOut lights[]={(PD_14), (PD_12), (PD_13)}; //LED ports definition, associated with the enum
float times[] = {10.0, 20.0, 4.0}; // States timing definition, associated with the enum
InterruptIn bt_pedestrian (PA_0); // Buttom interrupt object
Timeout timeout; // State timer object

//***Function prototypes***
void BtCall();
void clear_all ();
void transition();

#endif
