/*
    Prjoect 1-2 
    This program displays a conversion table of feet in meters 

    Call this program FtoMTable.cpp
*/

#include <iostream>
using namespace std;

int main(){
    double f; // holds the lenght in feet 
    double m; // holds the length in meters 
    int counter;

    counter = 0; // The line counte intitalized ot 0
    
    for(f = 1.0; f <= 100.0; f++){
        m = f / 3.28; // convert to meters 
        cout << f << " feet is " << m << " meters. \n";

        counter ++; // increment the line counter with each loop iteration 

        // every 10th line, print a blank line 

        if(counter == 25) {  //if counte4r is 10, output a blank line 
            cout << "\n"; // output a blank line 
            counter = 0; // reset the line counter 
        }
    }
    return 0; 
}