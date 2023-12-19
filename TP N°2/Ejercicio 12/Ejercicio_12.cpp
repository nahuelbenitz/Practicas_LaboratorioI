/*
Hacer un programa para leer tres números diferentes y determinar e
informar el número del medio. Ejemplo: si se ingresan 6, 10, 8, se emitirá 8.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
   int numero1, numero2, numero3, medio;

   cout << "Ingrese el primer numero: ";
   cin >> numero1;
   cout << "Ingrese el segundo numero: ";
   cin >> numero2;
   cout << "Ingrese el tercer numero: ";
   cin >> numero3;

   cout << endl;

   if(numero1 > numero2){
    if(numero2 > numero3){
        medio = numero2;
    }
    else{
        if(numero1 > numero3){
            medio = numero3;
        }
        else{
            medio = numero1;
        }
    }
   }
   else{
    if(numero1 > numero3){
        medio = numero1;
    }
    else{
        if(numero2 > numero3){
            medio = numero3;
        }
        else{
            medio = numero2;
        }
    }
   }

   cout << "El numero del medio es " << medio;

   cout << endl;
   return 0;
}
