/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listar� M�ximo -5.
*/

#include <iostream>
using namespace std;

int main() {
    int numero, maximo;
    bool banPrimero = true;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while(numero != 0){
        if(banPrimero){
            maximo = numero;
            banPrimero = false;
        }
        else{
            if(numero > maximo){
                maximo = numero;
            }
        }
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "El maximo es: " << maximo << endl;

   return 0;
}
