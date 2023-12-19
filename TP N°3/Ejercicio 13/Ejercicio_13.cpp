/*
Hacer un programa para ingresar un número y luego informar todos los divisores de ese número.
Ejemplo 1. Si se ingresa 6 se listarán: 1, 2, 3 y 6
Ejemplo 2. Si se ingresa 9 se listarán: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listarán 1 y 11.

*/

#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Ingrese el numero: ";
    cin >> numero;

    cout << "Los divisores de " << numero << " son: ";

    for(int x=1; x<=numero; x++){
        if(numero%x==0){
            cout << x << ", ";
        }
    }


   return 0;
}
