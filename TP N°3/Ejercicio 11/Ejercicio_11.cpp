/*
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente.
En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”

*/

#include <iostream>
using namespace std;

int main() {
    float numero, aux;
    bool ordenado = true;

    for(int x=0; x<8; x++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(x==0){
            aux = numero;
        }
        else if(aux < numero){
            aux = numero;
        }
        else{
            ordenado = false;
        }
    }

    if(ordenado){
        cout << endl << "Conjunto ordenado";
    }
    else{
        cout << endl << "Conjunto no ordenado";
    }





   return 0;
}
