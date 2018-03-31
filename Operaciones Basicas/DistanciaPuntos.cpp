#include <iostream>
#include <cmath>

using namespace std;

/*	Calculate the distance between 2 points (P_1 and P_2)
	located in an XY plane.
	DISTANCE = sqrt((x2-x1)^2 + (y2-y1)^2)
*/
// (C) CARLOS MORALES AGUILERA

int main(){

    // Variable declaration
    float x1, x2, y1, y2;
	float distance;

    // Entrada de datos
    cout << "Enter the x coordinate of first point: ";
    cin >> x1;

    cout << "Enter the y coordinate of first point: ";
    cin >> y1;

    cout << "\nEnter the x coordinate of second point: ";
    cin >> x2;

    cout << "Enter the y coordinate of second point: ";
    cin >> y2;

    // Cálculo de la distancia
    distance = sqrt(pow(x2-x1,2) + pow(y2-y1,2));

    // Salida de resultado
    cout << "\nDistance between points P_1=(" << x1 << "," << y1 << ") and P_2=(" << x2 << "," << y2 << ") is " << distancia << endl;

    return 0;
}
