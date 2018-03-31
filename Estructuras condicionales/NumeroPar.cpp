#include <iostream>
#include <cmath>

using namespace std;

// Check if a number is even or odd
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    int number;

    // Data input
    cout << "Enter the number: ";
    cin >> number;

    // Check
    if(number%2==0)
        cout << "\nThe number " << number << " is even" << endl;
    else
        cout << "\nThe number " << number << " is odd" << endl;

    return 0;
}
