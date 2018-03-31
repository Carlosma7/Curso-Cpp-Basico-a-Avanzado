#include <iostream>

using namespace std;

/*	Program that defines a table of providers, knowing each provider has:
	name, quantity sold, unit price and amount.
	Display information of each provider, the total amount of purchase and the name
	of cheaper and most expensive provider.
*/
// (C) CARLOS MORALES AGUILERA

// Provider
struct Provider{
    char name[30];
    int quantitySold;
    float unitPrice;
    float amount;
};

void fillProviders(Provider P[],int N){
    for(int i=0; i<N; i++){
    	cout << "----------" << endl;
        cout << "Provider " << i+1 << endl;
        cout << "----------" << endl;
        cout << "Name: ";
        cin.getline(P[i].name,30);
        cout << "Quantity sold: ";
        cin >> P[i].quantitySold;
        cin.ignore();
        cout << "Unit price: ";
        cin >> P[i].unitPrice;
        cin.ignore();
        
        P[i].amount = P[i].unitPrice * P[i].quantitySold;
        cout << endl;
    }
}

Provider searchMostExpensive(Provider  P[],int N){
    Provider mostExpensive = P[0];
    
    for(int i=1;i<N;i++){
        if(P[i].unitPrice>mostExpensive.unitPrice){
            mostExpensive = P[i];
        }
    }
    
    return mostExpensive;
}

Provider searchCheaper(Provider P[],int N){
    Provider cheaper = P[0];
    
    for(int i=1;i<N;i++){
        if(P[i].unitPrice<cheaper.unitPrice){
            cheaper = P[i];
        }
    }
    
    return cheaper;
}

void printProvider(Provider p){
    cout << "Name: " << p.name << endl;
    cout << "Unit price: " << p.unitPrice << endl;
    cout << "Quantity sold: " << p.quantitySold << endl;
    cout << "Amount: " << p.amount << endl;
}

int main(){
    
    // Variable declaration
	Provider providers[30], cheaper, mostExpensive;
    int N;
    
    // Data input
    cout << "Enter number of providers: ";
    cin >> N;
    cin.ignore();
    
    // Fill all providers
    fillProviders(providers, N);
    
    // Search for cheaper and most expensive providers
    cheaper = searchCheaper(providers, N);
    mostExpensive = searchMostExpensive(providers, N);
    
    // Show cheaper
    cout << "-----------------" << endl;
    cout << "CHEAPER PROVIDER" << endl;
    cout << "-----------------" << endl;
    printProvider(cheaper);
    
    // Show most expensive
    cout << "------------------------" << endl;
    cout << "MOST EXPENSIVE PROVIDER" << endl;
    cout << "------------------------" << endl;
    printProvider(mostExpensive);

    return 0;
}
