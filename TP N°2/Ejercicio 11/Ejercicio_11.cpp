/*
Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, numero4, numero5, cont;

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

   if(numero1 > 0){
    cont++;
   }
   if(numero2 > 0){
    cont++;
   }
   if(numero3 > 0){
    cont++;
   }
   if(numero4 > 0){
    cont++;
   }
   if(numero5 > 0){
    cont++;
   }

   cout << "Hay " << cont << " numero/os positivo/os";

   return 0;
}
