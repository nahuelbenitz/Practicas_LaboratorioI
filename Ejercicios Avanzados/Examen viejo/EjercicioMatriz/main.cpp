/*
Una matriz es Messistica si es una matriz de enteros de 10x10, en todas sus filas hay por lo menos un elemento con el valor 10 y
la suma de todos los elementos de al menos una fila da como resultado el valor 10.
Hacer una función llamada EsMessistica que reciba una matriz de 10x10 y devuelva true si la matriz recibida es Messistica o false si no lo es.

NOTA: No deben entregar la función main para este problema. La función EsMessistica sólo debe calcular la condición de la matriz,
no debe solicitar al usuario ningún dato ni mostrar por pantalla ninguna información.
*/
#include <iostream>
#include "Funciones.h"


using namespace std;

int main()
{
    int matriz[10][10];

    for(int i=0; i<10;i++){
        for(int j=0;j<10;j++){
            cout << "Ingresa: ";
            cin >> matriz[i][j];
        }
    }

    bool resultado;
    resultado = EsMessistica(matriz);
    if(resultado){
        cout << "Encontre";
    }
    else{
        cout << "No encontre";
    }
    return 0;
}
