/*
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado
la longitud de los tres lados de un tri�ngulo y luego listar que tipo de tri�ngulo es:
- Equil�tero: si los tres lados son iguales.
- Is�sceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre s�.

*/

#include <iostream>
using namespace std;

int main() {
   float A, B, C;

   cout << "Ingrese la longitud del primer lado: ";
   cin >> A;
   cout << "Ingrese la longitud del segundo lado: ";
   cin >> B;
   cout << "Ingrese la longitud del tercer lado: ";
   cin >> C;

   cout << endl;

   if(A == B && B == C){
    cout << "Su triangulo es Equilatero";
   }
   else{
    if(A != B && B != C && A != C){
        cout << "Su triangulo es Escaleno";
    }
    else{
        cout << "Su triangulo es Isosceles";
    }
   }

   return 0;
}
