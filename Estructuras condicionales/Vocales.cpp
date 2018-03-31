#include <iostream>
#include <cmath>

using namespace std;

// Check if a character is vowel or not

int main(){

    // Variable declaration
    char character;

    // Entrada de datos
    cout << "Enter the letter: ";
    cin >> character;

    // Check using ASCII coding
    if(character >= 97 && character <=122)
        cout << "\nCharacter " << character << " is a vowel" << endl;
    else
        cout << "\nCharacter " << character << " is not a vowel." << endl;

    return 0;
}
