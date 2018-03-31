#include <iostream>

using namespace std;

// Read an array and search the lowest element and the index where it is located
// (C) CARLOS MORALES AGUILERA

int main(){
    
	// Variable declaration
	int array[10];
    int min_element;

	// Data input
    for(int i=0; i<10; i++){
        cout << "Enter index " << i << " :";
        cin >> array[i];
    }

	// Search the minimum
    min_element = 0;
    for(int i=1; i<10; i++){
        if(array[i]<array[min_element]){
            min_element = i;
        }
    }
    
    cout << "The minimum is " << array[min_element] << " at index " << min_element << endl;
    
    return 0;
}
