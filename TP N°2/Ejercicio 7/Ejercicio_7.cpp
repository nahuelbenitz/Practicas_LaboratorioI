/*
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria
si los tres son todos distintos entre sí, caso contrario no emitir nada.
Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8

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

   if(A != B && B != C && A != C){
    cout << "Los tres numeros son distintos entre si";
   }

   return 0;
}
