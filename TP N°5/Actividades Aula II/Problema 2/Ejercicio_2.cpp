/*
Problema 2
Dada una lista de números que pueden ser positivos, negativos o cero y que finaliza cuando se ingresan dos números iguales de manera consecutiva

Calcular e informar:
 -El tercer número negativo. Contemplar la posibilidad de que no haya tres números negativos.
 -El primer número divisible por 3 pero no por 4.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, contNegativo = 0, anterior, primerDiv = 0, negativo = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    if(numero < 0){
        contNegativo++;
    }

    if((numero % 3 == 0) && (numero % 4 != 0)){
        if(primerDiv == 0){
            primerDiv = numero;
        }
    }

    anterior = numero;

    cout << endl;
    cout << "Ingrese un numero: ";
    cin >> numero;

    while(anterior != numero){

        if(numero < 0){
            contNegativo++;
            if(contNegativo == 3){
                negativo = numero;
            }
        }

        if((numero % 3 == 0) && (numero % 4 != 0)){
            if(primerDiv == 0){
                primerDiv = numero;
            }
        }

        anterior = numero;

        cout << endl;
        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    if(negativo != 0){
        cout << "El tercer numero negativo es el " << negativo << endl;
    }
    else{
        cout << "No se llegaron a ingresar 3 numeros negativos" << endl;
    }

    if(primerDiv != 0){
        cout << "El primer numero divisible por 3 y no por 4 es el " << primerDiv << endl;
    }
    else{
        cout << "No se ingreso un numero divisible por 3 y no por 4" << endl;
    }

   return 0;
}
