/*
Hacer un programa para ingresar por teclado tres números y luego determinar e
informar con una leyenda aclaratoria si los tres son iguales entre sí,
caso contrario no emitir nada.
Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
   int A, B, C;

   cout << "Ingrese el primer numero: ";
   cin >> A;
   cout << "Ingrese el segundo numero: ";
   cin >> B;
   cout << "Ingrese el tercer numero: ";
   cin >> C;

   cout << endl;

   if(A == B && B == C){
    cout << "Los tres numeros son iguales entre si";
   }


   return 0;
}
