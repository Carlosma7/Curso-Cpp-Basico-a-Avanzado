#include <iostream>
#define MAX 50

using namespace std;

// Read a name in lower case and write it in upper case using toupper.
// (C) CARLOS MORALES AGUILERA

int main(){
	
	// Variable declaration
    char name[MAX];
	char character;
    int i=0;
    
    // Data input
    cout<<"Enter your name:";
    cin.getline(name,MAX);

	// Toupper name
    while(name[i]){
        character = toupper(name[i]);
        i++;
        cout << character;
    }

    return 0;
}
