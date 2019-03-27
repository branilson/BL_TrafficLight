#include "main.hpp"

int main() {
    lights[state] = 1; // Turning on the first state
    bt_pedestrian.rise(&BtCall); // Defining buttom interrupt behavior and function
    timeout.attach (&transition, times[state]); // Defining state timing interruption
}

void BtCall(){
    if (state == GREEN){
        transition();
        timeout.attach (&transition, times[state]);
    }
}

void clear_all (){
    int j;
    for(j=0;j<3;j++){
         lights [j]=0;
        }
 }

void transition(){
       clear_all ();
       if (state != 2){
           state++;
       }
       else {
           state =0;
       }
       lights[state] = 1;
       timeout.attach (&transition, times[state]);
    }