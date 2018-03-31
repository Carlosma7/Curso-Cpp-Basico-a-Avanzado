#include <iostream>

using namespace std;

// Calculate triangle area
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    float base, height, area;

    // Data input
    cout << "Enter the base: ";
    cin >> base;

    cout << "\nEnter the height: ";
    cin >> height;

    // Area
    area = base * height / 2;

    cout << "\nThe area is " << area << endl;

    return 0;
}
