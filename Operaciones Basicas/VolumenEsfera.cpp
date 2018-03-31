#include <iostream>
#include <cmath>
#define PI 3.1415

using namespace std;

// Find the volume of a sphere V = 4 / 3PI * R ^ 3
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    float radius, volume;

    // Data input
    cout << "Enter the radius: ";
    cin >> radius;

    // Compute
    volume = 4/3*PI*pow(radius,3);

    cout << "The volume is " << volume << endl;

    return 0;
}
