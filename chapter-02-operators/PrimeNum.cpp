/*
 program that finds all prime numbers between 1 and 100

*/

#include <iostream>
using namespace std;

int main(){
    int i, j;
    bool isprime;

    for(i=1; i < 100; i++){
        isprime = true;

        // see if the number is evenly divisable
        for(j=2; j <= i/2; j++)
            // if it is, then it is not prime
            if((i%j) == 0) isprime = false;
        
        if(isprime)
            cout << i << " is prime.\n";

    }
    return 0;
}