/*
    Project 2-3
    program that commputes tehregular payments on a loan
    given principle, the length of time, number of payments a year, interest rate, the program will compute the payment 

*/
#include<iostream>
#include<cmath> 
using namespace std;

int main(){
    double Principle;          // original principle
    double IntRate;           // interest rate , such as 0.075
    double PayPerYear;       // number of paymenst per year
    double NumYears;        //number of years 
    double Payment;        // the regular payment
    double numer, denom; // temporary work variable 
    double b, e;         // base and exponent for call to pow()

    cout << "Enter Principle: ";
    cin >> Principle;

    cout << "Enter interest rate (i.e., 0.075): ";
    cin >> IntRate;

    cout << "Enter number of payments per year: ";
    cin >> PayPerYear;

    cout <<"Enter number of years: ";
    cin >> NumYears;

    numer = IntRate * Principle / PayPerYear;

    e = -(PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;

    denom = 1 - pow(b, e);

    Payment = numer / denom;

    cout << "Payment is: " << Payment;
    
    return 0;
}