#include <iostream>

using namespace std;

// Transpose of a matrix
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    int A[][3]={{1,2,3},{4,5,6}};
    int rows = 2, cols = 3;
    int B[cols][rows];

	// Transpose matrix
    for(int i=0; i<rows; i++){
        for(int j=0; j<cols; j++){
            B[j][i] = A[i][j];
        }
    }

	// Print matrix
    for(int i=0; i<cols; i++){
        for(int j=0; j<rows; j++){
            cout << B[i][j] << " ";
        }
        cout<<endl;
    }


    return 0;
}
