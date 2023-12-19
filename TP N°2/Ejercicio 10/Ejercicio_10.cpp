/*
Hacer un programa para ingresar cinco números y listar el máximo de ellos.
*/

#include <iostream>
using namespace std;

int main() {
   int numero1, numero2, numero3, numero4, numero5, maximo;

   cout << "Ingrese el primer numero: ";
   cin >> numero1;
   cout << "Ingrese el segundo numero: ";
   cin >> numero2;
   cout << "Ingrese el tercer numero: ";
   cin >> numero3;
   cout << "Ingrese el cuarto numero: ";
   cin >> numero4;
   cout << "Ingrese el quinto numero: ";
   cin >> numero5;

   cout << endl;

   if (numero1 > numero2){
    maximo = numero1;
   }
   else{
    maximo = numero2;
   }

   if(maximo < numero3){
    maximo = numero3;
   }
   if(maximo < numero4){
    maximo = numero4;
   }
   if(maximo < numero5){
    maximo = numero5;
   }

   cout << "El mayor numero ingresado es el " << maximo;


   return 0;
}
