#include <iostream>
using namespace std;

// Read numbers from input until the number is a negative one and sum all
// positive numbers before it
// (C) CARLOS MORALES AGUILERA

int main(){
    
	// Variable declaration
    float number, sum=0;

	// Loop
    do{
    	// Data input
        cout << "Number: ";
        cin >> number;
        // Check
        if(number>=0){
            sum = sum + number;
        }
    }while(number>=0);
    
    cout << "Sum: " << sum << endl;
    
    return 0;
}

