/*
Una matriz es considerada Simoniana si tiene 5 filas y 5 columnas y si la suma de todos los elementos de alguna de sus filas es igual a alguno de los elementos individuales de la matriz.
Por ejemplo, la siguiente matriz es Simoniana porque la suma de todos los elementos de una fila es igual a uno de los elementos individuales. En este caso, la suma de la fila 4 y del tercer elemento de la fila 2 ambos son 18.
{
  { 1 , 2 , 3, 4, 5 },	→	Suma 15
  { 5, 4, 18, 10, 11},	→ 	Suma 48
  { 1, 1, 1, 1, 1},		→ 	Suma 5
  { 9, 8, 4, 2, -5},		→ 	Suma 18
  { 10, 10, 10, 10, 10}	→ 	Suma 50
}

Hacer una función llamada EsMatrizSimoniana que reciba una matriz de 5 x 5 y devuelva true si la matriz es Simoniana o false si no lo es.
*/
#include <iostream>
#include "miMatriz.h"

using namespace std;

int main()
{
    int matriz[5][5] = {}, suma[5] = {};
    cargarMatriz(matriz,suma);
    EsMatrizSimoniana(matriz,suma);
    return 0;
}
