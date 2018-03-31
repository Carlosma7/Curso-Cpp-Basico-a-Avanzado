#include <iostream>
#include <fstream>
#include <cstring>
#include <cstdlib>
#include <conio.h>

using namespace std;

/*	Program that works as an agenda of e-mails, it should allow:
	1. Enter a new contact
	2. Search for a contact
	3. List contacts
	4. Delete contact
	5. Update contact
	6. Exit program
	
	The program should save all contacts in a file '.dat'
*/
// (C) CARLOS MORALES AGUILERA

const char DIR_FILE[] = "Contacts.dat";

struct Contact{
    char name[30];
    char surname[45];
    int age;
    char mail[45];
};

/***************** FUNCTIONS ***********************/
void enterContact(Contact c){
    ofstream output;
    
    output.open(DIR_FILE,ios::binary | ios::app);
    output.write((char*)&c,sizeof(Contact));
    output.close();
}

Contact readContact(){
    Contact c;
    cout << "\t\t\tName   : ";
    cin.getline(c.name,30);
    cout << "\t\t\tSurname : ";
    cin.getline(c.surname,45);
    cout << "\t\t\tAge     : ";
    cin >> c.age;
    cin.ignore();
    cout << "\t\t\tMail   : ";
    cin.getline(c.mail,45);
    
    return c;
}

bool existsContact(char name[],char surname[]){
    Contact c;
    ifstream input;
    
    input.open(DIR_FILE,ios::binary);
    if(input.good()){
        while(input.read((char*)&c,sizeof(Contact))){
        	
            if(strcmp(name,c.name)==0 && strcmp(surname,c.surname)==0){
                input.close();
                return true;
            }
        }
        input.close();
        return false;
    }
    else{
        input.close();
        return false;
    }
}

Contact searchContact(char name[],char surname[]){
    Contact c;
    ifstream input;
    input.open(DIR_FILE,ios::binary);
    if(input.good()){
        while(input.read((char*)&c,sizeof(Contact))){
            /**strcmp -> string comparison -> comparacion de cadenas**/
            if(strcmp(name,c.name)==0 && strcmp(surname,c.surname)==0){
                input.close();
                return c;
            }
        }
    }
}

void printContact(Contact c){
    cout << endl;
    cout << "\t\t\t Name   : " << c.name << endl;
    cout << "\t\t\t Surname : " << c.surname << endl;
    cout << "\t\t\t Age     : " << c.age << endl;
    cout << "\t\t\t Mail   : " << c.mail << endl;
    cout << endl;
}

void listContact(){
    ifstream input;
    input.open(DIR_FILE,ios::binary);
    Contact c;
    if(input.good()){
        while(input.read((char*)&c,sizeof(Contact))){
            printContact(c);
        }

    }
    else{
        cout << "[Error] File couldn´t be opened" << endl;
    }
    input.close();
}

void deleteContact(char name[],char surname[]){
    ifstream input;
    ofstream temp;
    
    input.open(DIR_FILE,ios::binary);
    temp.open("temp.dat",ios::binary);
    Contact c;
    if(input.good()){
        while(input.read((char*)&c,sizeof(Contact))){
            if(strcmp(name,c.name)!=0 || strcmp(surname,c.surname)!=0){
                temp.write((char*)&c,sizeof(Contact));
            }
        }
    }
    input.close();
    temp.close();
    remove(DIR_FILE);
    rename("temp.dat",DIR_FILE);
}

void actualizarContact(char name[],char surname[]){
    ifstream input;
    ofstream temp;
    input.open(DIR_FILE,ios::binary);
    temp.open("temp.dat",ios::binary);
    Contact c;
    
    if(input.good()){
        while(input.read((char*)&c,sizeof(Contact))){
            if(strcmp(name,c.name)==0 && strcmp(surname,c.surname)==0){
                Contact updated = readContact();
                temp.write((char*)&updated,sizeof(Contact));
            }
            else{
                temp.write((char*)&c,sizeof(Contact));
            }
        }
    }
    input.close();
    temp.close();
    remove(DIR_FILE);
    rename("temp.dat",DIR_FILE);
}
/***************************************************/


/*************** MENU FUNCTIONS ********************/
void menuEnter(){
    cout << "\t\t\t\tENTER NEW CONTACT" << endl;
    Contact newContact = readContact();
    enterContact(newContact);
}

void menuSearch(){
    cout << "\t\t\t\tSEARCH CONTACT" << endl;
    char name[30],surname[45];
    cout << "\t\t\tEnter the data for search:" << endl;
    cout << "\t\t\tName   : ";
    cin.getline(name,30);
    cout << "\t\t\tSurname: ";
    cin.getline(surname,45);
    if(existsContact(name,surname)){
        Contact searched = searchContact(name,surname);
        printContact(searched);
    }
    else{
        cout << "\t\t\tThe contact wasn´t found" << endl;
    }
    getch();
}

void menuList(){
    cout << "\t\t\t\tLIST OF CONTACTS" << endl;
    listContact();
    getch();
}

void menuDelete(){
    cout << "\t\t\t\tDELETE CONTACT" << endl;
    char name[30],surname[45];
    cout << "\t\t\tEnter the data for deletion:" << endl;
    cout << "\t\t\tName   : ";
    cin.getline(name,30);
    cout << "\t\t\tSurname: ";
    cin.getline(surname,45);
    
    if(existsContact(name,surname)){
        Contact deletion = searchContact(name,surname);
        int op;
        cout << "\t\t\tAre you sure you want to delete the contact?";
        printContact(deletion);
        
        do{
            cout << "\t\t\tYES[1]/NO[2]:";
            cin >> op;
            switch(op){
                case 1: deleteContact(name,surname);
                        cout << "\t\t\tSuccessful deletion of contact" << endl;
                        break;
                case 2: break;
                default: cout << "\t\t\tWrong option" << endl;
            }
        }while(op!=1 && op!=2);
    }
    else{
        cout << "\t\t\tCONTACT DOESN´T EXIST" << endl;
    }
}

void menuUpdate(){
    cout << "\t\t\t\tUPDATE CONTACT" << endl;
    char name[30],surname[45];
    cout << "\t\t\tEnter the data for update:" << endl;
    cout << "\t\t\tName   : ";
    cin.getline(name,30);
    cout << "\t\t\tSurname: ";
    cin.getline(surname,45);
    
    if(existsContact(name,surname)){
        Contact searched = searchContact(name,surname);
        cout << "\t\t\tContact to modify:" << endl;
        printContact(searched);
        actualizarContact(name,surname);
        cout << "\t\t\tCONTACT WAS UPDATED" << endl;
    }
    else{
        cout << "\t\t\tCONTACT DOESN´T EXIST" << endl;
    }
}
/***************************************************/

int main(){
    int option;
    
    // Menu
    do{
    	// Clean Screen of Console
        system("cls");
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tAGENDA" << endl;
        cout << "\t\t\t-------------------------------" << endl;
        cout << "\t\t\tEnter Contact...............[1]" << endl;
        cout << "\t\t\tSearch Contact..............[2]" << endl;
        cout << "\t\t\tList Contacts...............[3]" << endl;
        cout << "\t\t\tDelete Contact..............[4]" << endl;
        cout << "\t\t\tUpdate Contact..............[5]" << endl;
        cout << "\t\t\tEXIT........................[6]" << endl;
        cout << "\t\t\t-------------------------------" << endl << endl;
        cout << "\t\t\tEnter an option ->:";
        
        // Option input
        cin >> option;
        cin.ignore();
        
        // Option
        system("cls");
        switch(option){
            case 1 : menuEnter();
                     break;
            case 2 : menuSearch();
                     break;
            case 3 : menuList();
                     break;
            case 4 : menuDelete();
                     break;
            case 5 : menuUpdate();
                     break;
            case 6 : break;
            default: cout << "\t\tWrong option (Press Enter to try again)" << endl;
            		 getch();
            		 break;
        }
    }while(option!=6);
    
    return 0;
}
