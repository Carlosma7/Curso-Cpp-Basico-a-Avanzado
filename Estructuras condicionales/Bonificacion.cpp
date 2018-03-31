#include <iostream>
#include <cmath>

using namespace std;

/*	Enter the salary of a worker, category,
	stable (E) or non-stable (N) condition and report the payment
	total that should be done according to the following.
	The bonus percentage with respect to the salary is calculated
	with respect to the following table:
	CATEGORY   STABLE     NON-STABLE
        A         20%           17%
        B         18%           15%
        C         15%           14%
        D         12%           10%
		
	The calculation of the discount is with respect to the salary plus bonus
	Stable 6% Not Stable 4%
*/
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    char condition;
    char category;
    float salary;
	float bonus = 0, discount = 0;

    // Data input
    cout << "Enter the salary: ";
    cin >> salary;
    
    cout << "Enter the category (A,B,C,D): ";
    cin >> category;
    
    cout << "Enter the condition Stable(S)/Non-stable(N): ";
    cin >> condition;

    // Bonus calculation
    switch(category){
        case 'A': if(condition=='S'){
                        bonus = 0.2*salary;
                        discount = (salary+bonus)*0.06;
                  }else if(condition=='N'){
                        bonus=0.17*salary;
                        discount = (salary+bonus)*0.04;
                  }
                  break;

        case 'B': if(condition=='S'){
                        bonus = 0.18*salary;
                        discount = (salary+bonus)*0.06;
                  }else if(condition=='N'){
                        bonus=0.15*salary;
                        discount = (salary+bonus)*0.04;
                  }
                  break;

        case 'C': if(condition=='S'){
                        bonus = 0.15*salary;
                        discount = (salary+bonus)*0.06;
                  }else if(condition=='N'){
                        bonus=0.14*salary;
                        discount = (salary+bonus)*0.04;
                  }
                  break;

        case 'D': if(condition=='S'){
                        bonus = 0.12*salary;
                        discount = (salary+bonus)*0.06;
                  }else if(condition=='N'){
                        bonus=0.10*salary;
                        discount = (salary+bonus)*0.04;
                  }
                  break;
    }

	cout << endl << "Employee's final salary is " << salary+bonus-discount << "$" << endl;


    return 0;
}
