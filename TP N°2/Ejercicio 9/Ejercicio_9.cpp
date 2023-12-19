/*
Hacer un programa para ingresar tres números y listar el máximo de ellos.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
   int numero1, numero2, numero3;

   cout << "Ingrese el primer numero: ";
   cin >> numero1;
   cout << "Ingrese el segundo numero: ";
   cin >> numero2;
   cout << "Ingrese el tercer numero: ";
   cin >> numero3;

   if(numero1 > numero2 && numero1 > numero3){
       cout << "El mayor es " << numero1;
   }
   else{
    if(numero2 > numero1 && numero2 > numero3){
        cout << "El mayor es " << numero2;
    }
    else{
        cout << "El mayor es " << numero3;
    }
   }

   return 0;
}
