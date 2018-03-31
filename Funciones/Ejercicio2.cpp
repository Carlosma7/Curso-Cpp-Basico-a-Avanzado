#include <iostream>
using namespace std;


// Check if two numbers are friends
// Two numbers are friends if the sum of their dividers is equal to the other number
// (C) CARLOS MORALES AGUILERA

// Function that computes the dividers
int dividers(int number){
    
	int sum = 0;
	
    for(int i=1; i<=number/2; i++){
        if(number%i==0){
            sum = sum + i;
        }
    }
    
    return sum;
}

// Function that checks if two numbers are friends
bool friends(int n1,int n2){
    if(dividers(n1) == n2 && dividers(n2)==n1){
        return true;
    }
    
    return false;
}


int main(){
	
	// Variable declaration
    int number1, number2;
    
    // Data input
    cout << "Enter first number: ";
    cin >> number1;
    
    cout << "\nEnter second number: ";
    cin >> number2;
    
	// Check if the numbers are friends
    if(friends(number1, number2)){
        cout << "Friends" << endl;
    }else{
        cout << "Not friends" << endl;
    }
    return 0;
}
