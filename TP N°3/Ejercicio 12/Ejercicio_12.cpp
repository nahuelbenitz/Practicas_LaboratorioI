/*
Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados,
aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4

*/

#include <iostream>
using namespace std;

int main() {
    float numero, mayor1, mayor2;

    for(int x=0; x<5; x++){

        cout << "Ingrese un numero: ";
        cin >> numero;

        if(x==0){
            mayor1 = numero;
        }
        else if(numero >= mayor1){
            mayor2 = mayor1;
            mayor1 = numero;
        }
        else if(numero > mayor2){
            mayor2 = numero;
        }

    }

    cout << endl << "El primer mayor valor hallado fue " << mayor1;
    cout << endl << "El segundo mayor valor hallado fue " << mayor2;


   return 0;
}
