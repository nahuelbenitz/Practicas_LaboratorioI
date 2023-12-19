/*
Hacer una función que reciba como parámetro un número float y devuelva un número entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78 debe devolver 8.
Si recibe 7.48 debe devolver 7.
Si recibe 7.5 debe devolver 8.

*/

#include <iostream>
#include <locale>
#include <iomanip>
#include <cmath>
using namespace std;

int redondeo(float numero);

int main() {
	setlocale(LC_ALL, "Spanish");

	float num;

	cout << "Ingrese numero: ";
	cin >> num;

	cout << redondeo(num);

   return 0;
}

int redondeo(float numero){
    int redondo;

    redondo = round(numero);

    return redondo;

}
