#include <iostream>
#include <cmath>

using namespace std;

// Calculate the mean of three qualifications

int main(){

    // Variable declaration
    float q1, q2, q3;
	float mean;

    // Data input
    cout << "Enter first qualification: ";
    cin >> q1;

    cout << "\nEnter second qualification: ";
    cin >> q2;

    cout << "\nEnter third qualification: ";
    cin >> q3;

    // Compute
    mean = (q1 + q2 + q3)/3;

    cout << "\nThe qualifications mean is " << mean << endl;

    return 0;
}
