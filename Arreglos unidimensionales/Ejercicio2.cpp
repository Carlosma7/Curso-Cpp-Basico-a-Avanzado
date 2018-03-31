#include <iostream>
#define MAX 100

using namespace std;

// Read two arrays and create a third one with the concatenation
// (C) CARLOS MORALES AGUILERA

int main(){
    
    // Variable declaration
    int array1[MAX], array2[MAX], concatenation[MAX*2];
    int tam1, tam2, tam_concatenation, index;

	// Data input with filter
    do{
        cout << "Enter lenght of first array:";
        cin >> tam1;
    }while(tam1>MAX || tam1<=0);

	// Initialize array 1
    for(int i=0; i<tam1; i++){
        cout << "Index " << i << " :";
        cin >> array1[i];
    }

	// Data input with filter
    do{
        cout << "Enter lenght of second array:";
        cin >> tam2;
    }while(tam2>MAX || tam2<=0);

	// Initialize array 2
    for(int i=0; i<tam2; i++){
        cout << "Index " << i << " :";
        cin >> array2[i];
    }
    
    // Initialize index of concatenation
    index = 0;
    tam_concatenation = tam1+tam2;
    
    // Concatenate array 1
    for(int i=0; i<tam1; i++){
        concatenation[index] = array1[i];
        index++;
    }

	// Concatenate array 2
    for(int i=0; i<tam2; i++){
        concatenation[index] = array2[i];
        index++;
    }

	// Print concatenation
	cout << endl << "Concatenation: ";
    for(int i=0; i<tam_concatenation; i++){
        cout << concatenation[i] << " ";
    }

    return 0;
}
