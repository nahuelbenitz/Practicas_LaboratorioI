/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar cu�ntos son positivos y cu�ntos son negativos.

Ejemplo: 4, -3, 8, -5, 18, 20, 0. Se listar� Positivos: 4 Negativos: 2.
*/

#include <iostream>
using namespace std;

int main() {
    int numero, contPositivos = 0, contNegativos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0){
        if(numero > 0){
            contPositivos++;
        }
        else{
            contNegativos++;
        }
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "Positivos: " << contPositivos << endl;
    cout << "Negativos: " << contNegativos << endl;

   return 0;
}
