/*
    Empty switch cases

*/
#include<iostream>
using namespace std;

    int main(){

        int i;
        for(i=0; i<5; i++)

        switch(i){
            case 1:
            case 2:
            case 3:
                cout << "i is less than 4 \n";
                break;
            case 4:
                cout << "i is 4\n";
                break;
        }
        return 0;
    }