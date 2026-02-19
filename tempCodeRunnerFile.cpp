/*
    This program displays a conversion table of feet in meters 
    display a table of earths pounds and their equivalent moon weight

*/ 


#include <iostream>
using namespace std;

int main(){

    double = e; // holds the weight on earth
    double = m; // holds the weight on moon
    int counter;

    counter = 0; // counter intitalized at 0 

    for(e = 1.0; e <= 100.0; e++){
        m = e / 0.17; // convert to meters 
        cout << e << " lbs in earth is " << m << " lbs in mars. \n";

        counter ++; // increment the line counter with each loop iteration 
        
         // every 25th line, print a blank line 

        if(counter == 25) {  //if counter is 10, output a blank line 
            cout << "\n"; // output a blank line 
            counter = 0; // reset the line counter 
        }
    }
    return 0;

}

