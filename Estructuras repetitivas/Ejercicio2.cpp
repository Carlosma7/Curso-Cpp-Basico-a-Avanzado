#include <iostream>

using namespace std;

// Count digits of a number
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    int number, counter=0;
    
    // Data input
    cout << "Enter a number:";
    cin >> number;

	// Loop
    do{
    	// Divide by 10 to count 1 digit and raise counter
        number = number/10;
        counter++;
        
    }while(number!=0);
    
    cout<<"The number " << number << " has " << counter << " digits" << endl;

    return 0;
}


