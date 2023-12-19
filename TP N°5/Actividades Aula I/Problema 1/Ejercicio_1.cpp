/*
Problema 1
Se desea un programa que permita ingresar un número entero positivo mayor a 1, llamado N, y muestre por pantalla el Mínimo divisor y el Máximo divisor de N.
En el caso del mínimo divisor, mostrar el divisor más chico distinto a 1 y N.
En el caso del máximo divisor, mostrar el divisor más grande distinto a 1 y N.

En el caso de que no se encuentre un mínimo divisor y un máximo divisor para N indicar que N es un número primo

*/

#include <iostream>
using namespace std;

int main() {
    int n, maxDivisor = 0, minDivisor = 0, primo = 0;

    cout << "Ingrese un numero positivo mayor a 1: ";
    cin >> n;

    for(int x = 2; x < n; x++){
        if(n%x==0){
            if(minDivisor == 0){
                minDivisor = x;
            }
        maxDivisor = x;
        primo++;
        }
    }

    cout << endl;

    if(primo == 0){
        cout << "El numero es primo" << endl;
    }
    else{
        cout << "El minimo divisor es: " << minDivisor << endl;
        cout << "El maximo divisor es: " << maxDivisor << endl;
    }



   return 0;
}
