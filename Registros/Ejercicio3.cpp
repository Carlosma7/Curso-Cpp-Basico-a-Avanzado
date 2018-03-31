#include <iostream>

using namespace std;

/*	Program that displays all namonth, surnamonth and ages of all
	men born between two dates entered by keyboard. A register contains:
	Surnamonth, Name, Birth Date(Day, Month, Year), Age and Gender.
*/
// (C) CARLOS MORALES AGUILERA

struct Date{
    int day;
    int month;
    int year;
};

struct People{
    char name[30];
    char surname[45];
    int age;
    char gender;
    Date birthDate;
};

Date readDate(){
    Date f;
    cin >> f.day >> f.month >> f.year;

    return f;
}

People readPeople(){
    People p;
    cout << "Name: ";
    cin.getline(p.name,30);
    cout << "Surname: ";
    cin.getline(p.surname,45);
    cout << "Age: ";
    cin >> p.age;
    cout << "Gender: ";
    cin >> p.gender;
    cout << "Birth Date: ";
    p.birthDate = readDate();
    cin.ignore();
    
    return p;
}

int numerodays(Date f){
    return f.day + f.month*30 + f.year*365;
}

bool betweenDates(People p,Date ini,Date fin){
    int daysIni = numerodays(ini);
    int daysEnd = numerodays(fin);
    int daysTillBirthday = numerodays(p.birthDate);
    if(daysIni<=daysTillBirthday && daysTillBirthday<=daysEnd){
        return true;
    }
    else{
        return false;
    }
}

void fillPeople(People P[],int N){
    for(int i=0; i<N; i++){
        cout << "People " << i+1 << endl;
        P[i] = readPeople();
        cout << endl;
    }
}

void printMen(People P[],int N,Date ini,Date fin){
    for(int i=0; i<N; i++){
        if((P[i].gender == 'M') && (betweenDates(P[i],ini,fin))){
            cout << "Name: " << P[i].name << endl;
            cout << "Surname: " << P[i].surname << endl;
            cout << "Age: " << P[i].age << endl;
            cout << endl;
        }
    }
}

int main(){
	
	// Variable declaration
    People people[30];
    int N;
    Date ini,fin;
    
    // Data input
    cout << "Enter number of people: ";
    cin >> N;
    cin.ignore();
    
    // Fill People
    fillPeople(people,N);
    
    // Start date input
    cout << "Initial date :";
    ini = readDate();
    
    // End date input
    cout << "Final date :";
    fin = readDate();
    cout << endl;
    
    // Display men between this dates
    printMen(people,N,ini,fin);
    return 0;
}
