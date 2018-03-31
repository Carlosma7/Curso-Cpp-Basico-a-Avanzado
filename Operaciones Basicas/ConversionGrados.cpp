#include <iostream>
#include <cmath>

using namespace std;

/*	Build a program that allows you to convert a temperature
	in degrees Celsius to Fahrenheit (C = 5 (F-32) / 9)
	and Kelvin (C = K-273.15)
*/
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    float celsius, fahrenheit, kelvin;

    // Data input
    cout << "Enter temperature in Celsius degrees: ";
    cin >> celsius;

    // Compute
    fahrenheit = (celsius*9/5) + 32;
    kelvin = celsius + 273.15;

    cout << "\nTemperature in Fahrenheit degrees is " << fahrenheit << endl;
    cout << "\nTemperature in Kelvin degrees is " << kelvin << endl;

    return 0;
}
