/*
Problema 1B
Dado un número entero ingresado por teclado (entre 100 y 999) determinar y mostrar por pantalla si el número es un Número Narcisista.
Un número narcisista es aquel número que es igual a la suma de sus dígitos elevado a la potencia de su número de cifras.

Por ejemplo:
153 → 13 + 53 + 33 → 1 + 125 + 27 → 153

Variante desafío: Resolverlo pero sin asumir que el número será de tres cifras
*/

#include <iostream>
using namespace std;

int main() {
    int numero, digito, contador = 0, narcisista;
    cout << "Ingresar numero: ";
    cout << endl;
    cin >> numero;
    cout << endl;

    while (numero > 0){
        digito = numero % 10;
        narcisista += digito * (3);
        numero = numero / 10;
    }

    if(narcisista == numero){
        cout << "Es un numero narcisista";
    }

    cout << endl;



   return 0;
}
