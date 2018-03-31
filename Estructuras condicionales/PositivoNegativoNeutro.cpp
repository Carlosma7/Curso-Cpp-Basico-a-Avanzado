#include <iostream>
#include <cmath>

using namespace std;

// Check if number is positive, negative or neutral
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    int number;

    // Data input
    cout << "Enter the number: ";
    cin >> number;

    // Check
    if(number > 0)
        cout << endl << "The number " << number << " is positive" << endl;
    else if(number < 0)
        cout << endl << "The numbero " << number << " is negative" << endl;
    else
        cout << endl << "The number " << number << " is neutral" << endl;

    return 0;
}
