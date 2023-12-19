/*
Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}

*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int elementos[tam], mayor, i, y, aux;

    for(i=0;i<tam-1;i++){
        cout << "Ingrese el elemento: ";
        cin >> elementos[i];
    }

    cout << "Ingrese el elemento faltante: ";
    cin >> elementos[tam-1];

    for(i=0;i<tam;i++){
        cout << elementos[i] << ", ";
    }

    for(i=0;i<tam;i++){
        for(y=0; y<tam-1;y++){
            if(elementos[y]>elementos[y+1]){
                aux = elementos[y+1];
                elementos[y+1] = elementos[y];
                elementos[y] = aux;

            }
        }
    }

    cout << endl;
    for(i=0;i<tam;i++){
        cout << elementos[i] << ", ";
    }

    cout << endl;
   return 0;
}
