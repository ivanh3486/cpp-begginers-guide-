/* 
    This program displays all printable characters, 
    including the extended character set, if one exists
*/

#include <iostream>
using namespace std;

int main(){

    unsigned char ch;

    ch = 32;
    while(ch){  //uses while loop
        cout << ch;
        ch++;
    }
    return 0;
}