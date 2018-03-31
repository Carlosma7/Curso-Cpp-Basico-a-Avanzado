#include <iostream>

using namespace std;

// Compute the sequence 1/2 + 1/3 + 1/4 + 1/5 + ... 1/N
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    int N;
    float sum = 0;
    
    // Data input
    cout << "Enter N :";
    cin >> N;

	// Loop counter
    for(int i=2; i<=N; i++){
        sum = sum + 1.0/i;
    }

    cout << "Sum: "<< sum << endl;

    return 0;
}
