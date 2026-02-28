/*
program computes the volume of a cylinder givne the radius of its base 
and its height 
demonstrates dynamic initialization

*/

#include <iostream>
using namespace std;

int main()
{
    double radius = 4.0, height = 5.0;

    //dynamically initializing volume
    double volume = 3.1416 * radius * radius * height;

    cout << "Volume is " << volume;

    return 0;
}