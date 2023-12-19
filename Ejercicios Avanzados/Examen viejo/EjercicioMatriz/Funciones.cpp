#include <iostream>
#include "Funciones.h"

using namespace std;

/*
Una matriz es Messistica si es una matriz de enteros de 10x10, en todas sus filas hay por lo menos un elemento con el valor 10 y
la suma de todos los elementos de al menos una fila da como resultado el valor 10.
Hacer una función llamada EsMessistica que reciba una matriz de 10x10 y devuelva true si la matriz recibida es Messistica o false si no lo es.

NOTA: No deben entregar la función main para este problema. La función EsMessistica sólo debe calcular la condición de la matriz,
no debe solicitar al usuario ningún dato ni mostrar por pantalla ninguna información.
*/

bool EsMessistica(int matriz[][10]){
    int hayDiez = 0, sumaDiez = 0, acu = 0;

    for(int i=0; i<10;i++){
        for(int j=0;j<10;j++){
            if(matriz[i][j] == 10){
                hayDiez = 1;
            }
            acu+=matriz[i][j];
        }
        if(acu == 10){
            sumaDiez = 1;
        }
    }

    if(hayDiez == 1 && sumaDiez == 1){
        return true;
    }

    return false;
}
