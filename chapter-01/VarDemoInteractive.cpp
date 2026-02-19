/*

An interactive program that computes 
the are of a rectangle 
*/

#include <iostream>
using namespace std;

int main()
{
    int length;  //this declares a variable 
    int width; // thsi declares another variable 
    
    cout << "Enter the  length: ";
    cin >> length; // input the length via keyboard 
  
    cout << "Enter the width: ";
    cin >> width; // input the width via keyboard 

    cout << "The are is ";
    cout << length * width; // display the area 

    return 0;
}