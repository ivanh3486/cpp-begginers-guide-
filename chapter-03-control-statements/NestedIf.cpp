/* 
    Program demonstrates the IF by playing a guess the number game
    it generates a random number and prompts the user to guess and prints the message right 
    if you guess the magic number 

*/

// Magic Number Program 2nd improvement
// Nested ifs

#include <iostream>
#include <cstdlib>
using namespace std;
    int main(){
        int magic;  //magic number
        int guess;  //user's guess

        magic = rand(); //get a random number

        cout << "Enter your guess: ";
        cin >> guess;

        if(guess == magic) {
            cout << "** RIGHT **\n";
            cout << magic << " is the magic number.\n";
        }
        else {
            cout << "...Sorry, you're wrong.";
            if(guess > magic) cout <<" Your guess is to high.\n";
            else cout << " Your guess is too low.\n";
        }
        return 0;


    }