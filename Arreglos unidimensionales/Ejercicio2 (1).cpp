#include <iostream>
#define MAX 100

using namespace std;

// Ask for two matrix with NxN dims and then generates another matrix with the product
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
	int matrix1[MAX][MAX];
    int matrix2[MAX][MAX];
    int matrix_mult[MAX][MAX];
    int N;


	// Data input
    cout << "Please introduce number of dimension (NxN):";
    cin >> N;

	// Show matrix 1
    cout << "Matrix 1" << endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << "[" << i << "][" << j << "]:";
            cin >> matrix1[i][j];
        }
    }
    
    // Show matrix 2
    cout << endl << "Matrix 2" << endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << "[" << i << "][" << j << "]:";
            cin >> matrix2[i][j];
        }
    }
    
    
    // Compute and show matrix multiplication between matrix 1 and 2
    cout << endl << "Matrix multiplication" << endl;
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matrix_mult[i][j] = 0;
            for(int k=0;k<N;k++){
                matrix_mult[i][j] = matrix_mult[i][j] + (matrix1[i][k]*matrix2[k][j]);
            }
            cout << matrix_mult[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}

