#include <iostream>
#define MAX 5

using namespace std;

// Read 2 float arrays with one dimension and create another array with the multiplication of values
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    int array1[MAX];
    int array2[MAX];
    int array3[MAX];
    
    // Output first array
    cout << "ARRAY 1:" << endl;
    
    for(int i=0; i < MAX; i++){
        cout << "- Index " << i << ":";
        // Data input
        cin >> array1[i];
    }

	// Output second array
    cout << endl << "ARRAY 2:" << endl;
    
    for(int i=0; i < MAX; i++){
        cout << "- Index " << i << ":";
        // Data input
        cin >> array2[i];
    }

	// Output multiplication array
    cout << endl << "MULTIPLICATION ARRAY:" << endl;
    for(int i=0; i < MAX; i++){
        array3[i] = array1[i]*array2[i];
        cout << array3[i] << " ";
    }

    return 0;
}
