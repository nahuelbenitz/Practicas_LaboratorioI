/*
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla la diferencia
absoluta entre ambos.
Ejemplo 1: Si se ingresan 3 y 8, se emite 5. Si se ingresan 8 y 3,
se emite 5.
Ejemplo 2: Si se ingresan -3 y 9, se emite 12. Si se ingresan -12 y -1, se emite 11.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, resultado;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2){
        resultado = numero1 - numero2;
    }
    else{
        resultado = numero2 - numero1;
    }

    cout << "La diferencia es de " << resultado;

   return 0;
}
