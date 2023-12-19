/*
Problema 1A
Dado un número entero ingresado por teclado informar por pantalla si todos los dígitos del número son pares o no.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, digito, par = 0;
    cout << "Ingresar numero: ";
    cout << endl;
    cin >> numero;
    cout << endl;

    while (numero > 0){
        digito = numero % 10;
        if(digito % 2 != 0){
            par = 1;
        }
        numero = numero / 10;
    }

    if(par == 0){
        cout << "Todos los digitos del numero son pares";
    }
    else{
        cout << "No todos los digitos del numero son pares";
    }

    cout << endl;


   return 0;
}
