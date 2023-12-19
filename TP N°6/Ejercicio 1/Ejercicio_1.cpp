/*
Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int numeros[tam];
    int i;

    for(i = 0; i <10; i++){
        cout << "Ingrese un numero en la posicion " << i+1 << ": ";
        cin >> numeros[i];
    }

    for (i = 0; i <10; i++){
        if(numeros[i] > 0){
            cout << numeros[i] << endl;
        }
    }

   return 0;
}
