/*
Hacer un programa para ingresar un n�mero positivo y calcular e informar si el mismo es un n�mero primo.
Recordar que un n�mero primo es un n�mero natural que tiene exactamente dos divisores.
*/

#include <iostream>
using namespace std;

int main() {
    int numero, contPrimo = 0;

    cout << "Ingrese el numero: ";
    cin >> numero;

    for(int x=1; x<=numero; x++){
        if(numero%x==0){
            contPrimo++;
        }
    }

    if(contPrimo==2){
        cout << endl << "Es primo";
    }
    else{
        cout << endl << "No es primo";
    }



   return 0;
}
