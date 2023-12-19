/*
hacer un programa que pida 10 números enteros y muestre la cantidad de números pares ingresados
*/

#include <iostream>
using namespace std;

int main() {
    int numero, contPares = 0;

    for(int x=0; x < 10; x++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero % 2 == 0){
            contPares++;
        }
    }
    cout << endl;
    cout << "La cantidad de numeros pares ingresados es de " << contPares;

   return 0;
}
