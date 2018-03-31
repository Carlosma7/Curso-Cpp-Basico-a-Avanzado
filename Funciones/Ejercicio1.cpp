#include <iostream>
using namespace std;

// Write a function that computes manually the power of a number
// (C) CARLOS MORALES AGUILERA

// Function that computes power a number given base and exponent
int potencia(int base,int exponent){
    int power = 1;
    
    for(int i=1; i<=exponent; i++){
        power = power*base;
    }
    
    return power;
}

int main(){
    // Variable declaration
    int base, exponent;
    
    // Data input
    cout << "Enter the base: ";
    cin >> base;
    
    cout << "\nEnter the exponent: ";
    cin >> exponent;
    
    // Compute
	cout << endl << "Power of " << base << "^" << exponent << ": " << potencia(base,exponent) << endl;
	
    return 0;
}


