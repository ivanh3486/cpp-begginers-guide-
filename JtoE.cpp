/*
    write a program that converts jovian years to earth years (jvoian years is 12 earth years)
    allow the user to specify the number of jovain years 
    allow fractional years (doubles)
*/

#include <iostream>
using namespace std;
int main(){

    double j; //holds the amount of years in jupiter 
    double e; // holds the amount of years in earth 

    cout << "Enter the amount of jovian years: ";
    cin >> j; //reads the amount of jovain years 

    e = j*12; //converts jovians into earth years 
    cout << j << " jovian years is " << e << " earth years. ";

    return 0;

}