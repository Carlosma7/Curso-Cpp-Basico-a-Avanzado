#include <iostream>

using namespace std;

// Read a number and draw with '*' a rectangle triangle with N height and base
// (C) CARLOS MORALES AGUILERA

int main(){
    
	// Variable declaration
	int N;
	
	// Data input
    cout << "Enter N:";
    cin >> N;
    cout << endl;

	// Dooble loop for base and height
    for(int i=1; i<=N; i++){
        for(int j=1; j<=i; j++){
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
