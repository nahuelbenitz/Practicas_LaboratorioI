/*
Hacer un programa para ingresar por teclado un n�mero y luego informar por pantalla
con un cartel aclaratorio si el mismo es par o impar.

Anotaci�n:

*/

#include <iostream>
using namespace std;

int main() {
   int numero;

   cout << "Ingrese un numero: ";
   cin >> numero;

   if (numero % 2 == 0){
    cout << "El numero es par";
   }

   return 0;
}
