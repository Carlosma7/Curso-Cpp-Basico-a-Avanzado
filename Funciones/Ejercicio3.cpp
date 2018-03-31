#include <iostream>
using namespace std;

// Write a function that reverses an array
// (C) CARLOS MORALES AGUILERA

// Function that prints an array in format
void printArray(int array[], int N){
    for(int i=0; i<N; i++){
        cout << array[i] << " ";
    }
    
    cout << endl;
}

// Function that reverses an array
void reverse(int array[], int N){
	int aux;
	
    for(int i=0; i<N/2; i++){
        aux =  array[i];
        array[i] = array[N-1-i];
        array[N-1-i] = aux;
    }
}

int main(){
	// Variable declaration
    int array[]={1,2,3,4};
    
    // Show initial array
    printArray(array,4);
    
    // Reverse
    reverse(array,4);
    
    // Show reversed array
    printArray(array,4);
    return 0;
}


