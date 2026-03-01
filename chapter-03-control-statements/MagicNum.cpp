/* 
    Program demonstrates the IF by playing a guess the number game
    it generates a random number and prompts the user to guess and prints the message right 
    if you guess the magic number 

*/

// Magic Number Program

#include <iostream>
#include <cstdlib>
using namespace std;
    int main(){
        int magic;  //magic number
        int guess;  //user's guess

        magic = rand(); //get a random number

        cout << "Enter your guess: ";
        cin >> guess;

        if(guess == magic) cout << "** RIGHT **";
        else cout << "...Sorry, you're wrong.";

        return 0;


    }