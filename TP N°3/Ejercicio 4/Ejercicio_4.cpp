/*
Hacer un programa para que el usuario ingrese dos n�meros y luego el programa muestre por pantalla
los n�meros entre el menor y el mayor de ambos.
Ejemplo, si el usuario ingresa 3 y 15, se mostrar�n los n�meros entre el 3 y el 15;
y si el usuario ingresa 25 y 8, se mostrar�n los n�meros entre el 8 y el 25.
*/

#include <iostream>
using namespace std;

int main() {
   float num1, num2;

   cout << "Ingrese el primer numero: ";
   cin >> num1;
   cout << "Ingrese el segundo numero: ";
   cin >> num2;

   if(num1 > num2){
    for(int x=num2; x <=num1; x++){
        cout << x << endl;
    }
   }
   else{
    for(int x=num1; x <=num2; x++){
        cout << x << endl;
    }
   }

   return 0;
}
