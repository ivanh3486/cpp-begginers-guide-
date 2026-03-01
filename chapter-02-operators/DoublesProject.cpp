/*
mars is approximately 34,000,000 miles away 
radio signals travel at the speed of light 
186,000 miles per second 
to compute delay the distance must be divided by the speed of light 
display the delay in terms of seconds and minutes 

*/

#include <iostream>
using namespace std;
int main(){
    
    double distance;
    double lightspeed;
    double delay;
    double delay_in_min;
    
    distance = 34000000.0; // 34,000,000 miles away 
    lightspeed = 186000.0; // 186,000 per second 

    delay = distance / lightspeed;

    cout << "Time delay when talking to Mars: " <<
        delay << " seconds. \n";
    
    delay_in_min = delay / 60.0;

    cout << "This is " <<delay_in_min << " minutes.";

    return 0;

}