#include <iostream>
#define MAX 100

using namespace std;

// Ask user for two matrix of NxN dimension and then show their sum
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    int matrix1[MAX][MAX];
    int matrix2[MAX][MAX];
    int matrix_sum[MAX][MAX];
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
    cout << "Matrix 2" << endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            cout << "[" << i << "][" << j << "]:";
            cin >> matrix2[i][j];
        }
    }

	// Compute and show the sum matrix between matrix 1 and 2
    cout<<"Matrix sum"<<endl;
    for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            matrix_sum[i][j] = matrix1[i][j] + matrix2[i][j];
            cout << matrix_sum[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

