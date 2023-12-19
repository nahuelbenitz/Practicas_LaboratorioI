/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo: 35 - Posici�n: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo: 55 - Posici�n: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listar� M�ximo: -5 - Posici�n: 1.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, maximo, i = 1, posicion;
    bool banPrimero = true;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while(numero != 0){
        if(banPrimero){
            maximo = numero;
            posicion = i;
            banPrimero = false;
        }
        else{
            if(numero > maximo){
                maximo = numero;
                posicion = i;
            }
        }
        i++;
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "El maximo es: " << maximo <<". En la posicion: " << posicion << endl;

   return 0;
}
