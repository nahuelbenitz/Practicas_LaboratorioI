/*
Hacer un programa para ingresar por teclado cuatro números.
Si los valores que se ingresaran están ordenados en forma creciente,
emitir el mensaje “Conjunto Ordenado”, caso contrario emitir el mensaje: “Conjunto Desordenado”.
Ejemplo 1: si los números que se ingresan son 8, 10, 12 y 14, entonces están ordenados.
Ejemplo 2: si los números que se ingresan son 8, 12, 12 y 14, entonces están ordenados.
Ejemplo 3: si los números que se ingresan son 10, 8, 12 y 14, entonces están desordenados.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    int numero1, numero2, numero3, numero4;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    cout << "Ingrese el cuarto numero: ";
    cin >> numero4;

    cout << endl;

    if(numero1 <= numero2 && numero2 <= numero3 && numero3 <= numero4){
        cout << "Conjunto ordenado";
    }
    else{
        cout << "Conjunto desordenado";
    }


   return 0;
}
