#include <iostream>

using namespace std;

/*	Program that allows to enter the name and 3 marks of N students and store them into
	an array of Struct.
	Display the students including their mean ordered by higher marks.
*/
// (C) CARLOS MORALES AGUILERA

struct Student{
    char name[30];
    float mark1;
    float mark2;
    float mark3;
    float mean;
};

void fillStudents(Student S[],int N){
    for(int i=0;i<N;i++){
    	cout << "----------" << endl;
        cout << "Student " << i+1 << endl;
        cout << "----------" << endl;
        cout << "Name: ";
        cin.getline(S[i].name,30);
        
		cout << "Mark 1: ";
        cin >> S[i].mark1;
        cin.ignore();

        cout << "Mark 2: ";
        cin >> S[i].mark2;
        cin.ignore();

        cout << "Mark 3: ";
        cin >> S[i].mark3;
        cin.ignore();
        cout << endl;
        
        S[i].mean = (S[i].mark1 + S[i].mark2 + S[i].mark3)/3;
    }
}

void printStudents(Student S[],int N){
    for(int i=0;i<N;i++){
        cout << "Name: " << S[i].name << endl;
        cout << "mean : " << S[i].mean << endl;
        cout << endl;
    }
}

void orderMean(Student S[],int N){
    for(int i=1; i<=N; i++){
        for(int j=0; j<N-1; j++){
            if(S[j].mean<S[j+1].mean){
                Student aux = S[j];
                S[j] = S[j+1];
                S[j+1] = aux;
            }
        }
    }
}

int main(){
    
    // Variable declaration
    Student students[30];
    int N;
    
    // Data input
    cout << "Enter number of students: ";
    cin >> N;
    cin.ignore();
    
    // Fill students
    fillStudents(students,N);
    
    // Order students by the mean of their marks
    orderMean(students,N);
    
    // Show students ordered
    cout << "----------------" << endl;
    cout << "STUDENTS ORDERED" << endl;
    cout << "----------------" << endl;
    printStudents(students,N);

    return 0;
}
