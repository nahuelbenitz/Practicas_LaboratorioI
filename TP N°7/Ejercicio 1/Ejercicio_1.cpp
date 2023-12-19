/*
Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo. Caso contrario debe devolver falso.
*/

#include <iostream>
#include <locale>
using namespace std;

bool multiplo(int n1, int n2);

int main() {
	setlocale(LC_ALL, "Spanish");

	int num1, num2;

	cout << "Ingrese el primer numero: ";
	cin >> num1;
	cout << "Ingrese el segundo numero: ";
	cin >> num2;

	if(multiplo(num1,num2)){
        cout << "EL primero es multiplo del segundo";
	}
	else{
        cout << "El primero no es multiplo del segundo";
	}

   return 0;
}

bool multiplo(int n1, int n2){
    if(n1 % n2 == 0){
        return true;
    }
    else{
        return false;
    }
}
