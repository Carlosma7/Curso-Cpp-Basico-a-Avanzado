#include <iostream>
#include <fstream>

using namespace std;

// Read text from file and convert all characters to upper cases
// (C) CARLOS MORALES AGUILERA

void upperCase(char chain[]){
    int i=0;
    while(chain[i]){
        chain[i] = toupper(chain[i]);
        i++;
    }
}

void readLines(char input_filename[],char output_filename[]){
	# Input file
    ifstream input;
    
    # Output file
    ofstream output;
    
    # Line of 256 chars
    char line[256];
    
    # Open both files
    entrada.open(input_filename);
    salida.open(output_filename);
    
    # Check if input file is ok
    if(input){
    	# Read input file line by line
        while(!input.eof()){
            entrada.getline(line,256);
            # Convert to upper case all characters
            upperCase(line);
            # Write on output file
            output << line << endl;
        }
    }
    else{
        cout<<"Error: Input file"<<endl;
    }
    
    # Close input file
    input.close();
    
    # Close output file
    output.close();
}

int main(){
	# Call the function to read Lines from files
    readLines("input.txt","output.txt");

    return 0;
}
