#include <iostream>
#include <cmath>

using namespace std;

/*	In a parking lot they charge $ / .50 per hour or fraction.
	Design a program that determines how much a customer should pay for
	the parking of your vehicle, knowing the time of
	parking in hours and minutes
*/
// (C) CARLOS MORALES AGUILERA	


int main(){

    // Variable declaration
    int hours, minutes;
    float price;

    // Data input
    cout << "Introduzca las hours: ";
    cin >> hours;

    cout << "Introduzca los minutes: ";
    cin >> minutes;

    // Price calculation
    if(minutes > 0)
        hours++;

    price = 1.50*hours;

    cout << "\nFinal price is " << price << "$" << endl;

    return 0;
}
