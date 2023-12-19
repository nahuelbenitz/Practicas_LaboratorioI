/*
Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores.
Sólo deben utilizarse dos vectores en el programa: pos y nega
*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int positivos = 0, negativos = 0, i;
    float pos[tam], neg[tam], numero;

    for(i=0;i<tam;i++){
        cout << "Ingrese el numero real: ";
        cin >> numero;

        if(numero > 0){
            positivos++;
            pos[i] = numero;
        }
        else if(numero < 0){
            negativos++;
            neg[i] = numero;
        }
    }

    cout << "El vector de pos tiene " << positivos << " elementos" << endl;
    cout << "El vector de neg tiene " << negativos << " elementos" << endl;

    for(i=0;i<tam;i++){
        cout << pos[i] << ", ";
    }

    cout << endl;

    for(i=0;i<tam;i++){
        cout << neg[i] << ", ";
    }

    cout << endl;

   return 0;
}
