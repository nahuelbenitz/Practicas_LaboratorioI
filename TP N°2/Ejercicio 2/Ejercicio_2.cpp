/*
Hacer un programa para ingresar por teclado dos n�meros y luego informar por pantalla con
un cartel aclaratorio si el primer n�mero es m�ltiplo del segundo.

Anotaci�n:

*/

#include <iostream>
using namespace std;

int main() {
   int numero1, numero2;

   cout << "Ingrese el primer numero: ";
   cin >> numero1;
   cout << "Ingrese el segundo numero: ";
   cin >> numero2;

   cout << endl;

   if (numero1 % numero2 == 0){
    cout << "El primer numero es multiplo del segundo";
   }

   return 0;
}
