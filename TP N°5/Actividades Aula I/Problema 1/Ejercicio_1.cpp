/*
Problema 1
Se desea un programa que permita ingresar un n�mero entero positivo mayor a 1, llamado N, y muestre por pantalla el M�nimo divisor y el M�ximo divisor de N.
En el caso del m�nimo divisor, mostrar el divisor m�s chico distinto a 1 y N.
En el caso del m�ximo divisor, mostrar el divisor m�s grande distinto a 1 y N.

En el caso de que no se encuentre un m�nimo divisor y un m�ximo divisor para N indicar que N es un n�mero primo

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
