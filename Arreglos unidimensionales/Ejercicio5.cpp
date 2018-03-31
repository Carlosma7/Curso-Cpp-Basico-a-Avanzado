#include <iostream>

using namespace std;

// Bubble sort
// (C) CARLOS MORALES AGUILERA

int main(){
    
    // Variable declaration
    int array[]={7,9,3,5,2,1,8,4,6,12};
    
    // Sort
    for(int i=0;i<10;i++){
        for(int j=0; j<9; j++){
            if(array[j]<array[j+1]){
                int aux = array[j];
                array[j] = array[j+1];
                array[j+1] = aux;
            }
        }
    }

	// Print array
    for(int i=0; i<10; i++){
        cout << array[i] << " ";
    }
    
    return 0;
}
