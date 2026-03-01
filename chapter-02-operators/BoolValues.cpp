// Demonstrate use of bool values

#include <iostream> 
using namespace std;
int main(){
    bool b;

    b = false;
    cout << "b is " << b << "\n";

    b = true;
    cout << "b is " << b << "\n";

    // a bool value can control the if statement 
    if(b) cout << "This is executed. \n"; // a single bool value can controls the statement 

    b = false;
    if(b) cout << "This is not executed.\n";

    // outcome of a relational operator is a true/false value 
    cout << "10 > 11 is " << (10 > 11) << "\n";

    return 0;


}