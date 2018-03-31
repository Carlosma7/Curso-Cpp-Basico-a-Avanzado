#include <iostream>
using namespace std;

// Fibonacci sequence
// (C) CARLOS MORALES AGUILERA

int main(){
    
    // Variable declaration
	int N;
	int a1=0, a2=1, an;
	
	// Data input
    cout << "Enter N:";
    cin >> N;

	// Check if N is higher or lower than 2
    if(N<2){
    	// Show N
        cout << "Fibonnaci sequence for " << N << " is " << N << endl;
    }
    else{
    	// Loop of N iterations
        for(int i=2; i<=N; i++){
            an = a1+a2;
            a1 = a2;
            a2 = an;
        }
        // Show computed an
        cout << "Fibonnaci sequence for " << N << " is " << an << endl;
    }


    return 0;
}
