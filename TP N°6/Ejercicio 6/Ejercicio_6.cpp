/*
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.

*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int elementos[tam], mayor, i, aux;

    for(i=0;i<tam;i++){
        cout << "Ingrese el elemento: ";
        cin >> elementos[i];
    }

    mayor = elementos[0];

    for(i=1;i<tam;i++){
        if(elementos[i]> mayor){
            mayor = elementos[i];
        }
    }

    //muestro vector sin modificar

    for(i=0;i<tam;i++){
        cout << elementos[i] << ", ";
    }

    for(i=0;i<tam-1;i++){
        if(elementos[i]==mayor){
            aux = elementos[i+1];
            elementos[i+1] = mayor;
            elementos[i] = aux;
        }
    }

    //muestro vector modificado
    cout << endl;
    for(i=0;i<tam-1;i++){
        cout << elementos[i] << ", ";
    }


   return 0;
}
