/*
build a simple help system that displays syntax
for c++ control statements. 
The program displays a menu containing the control statements and then
waits for input and proceeds to display the syntax of the statement displayed
*/

#include <iostream>
using namespace std;

int main(){

    char choice;

    cout << "Help on:\n";
    cout << " 1. if\n";
    cout << " 2. switch\n";
    cout << " Choose one: ";
    cin >> choice;

    cout << "\n";

    switch (choice){
        case '1':
            cout << "The if;\n";
            cout << "The if (condition) statement; \n";
            cout << "else statement;\n";
            break;
        case '2':
            cout << "The switch:\n\n";
            cout << "switch(expression) {\n";
            cout << "   case constqant: \n";
            cout << "   statement sequence\n";
            cout << "   break;\n";
            cout << " // ...\n";
            cout << "}\n";
            break;
                default:
                    cout << "Selection not found. \n";
    }

    return 0;

}