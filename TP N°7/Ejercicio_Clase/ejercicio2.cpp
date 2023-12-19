/*
hacer un programa que ingrese 5 numeros y muestre cuantos son mayores al promedio
*/

#include <iostream>
using namespace std;

void cargarVector(int vec[], int tamano);
int promedio(int vec[], int tamano);
int mayores(int vec[], int tamano, float prom);

int main() {
    const int tam = 5;
    int numeros[tam];
    float promedioVec;

    cargarVector(numeros, tam);

    promedioVec = promedio(numeros, tam);

    cout << "Hay " << mayores(numeros,tam,promedioVec) << " mayores al promedio. El mismo es de " << promedioVec << endl;

   return 0;
}

void cargarVector(int vec[], int tamano){

    for(int i = 0; i < tamano; i++){
        cout << "Ingrese un valor en la posicion " << i+1 << ": ";
        cin >> vec[i];
    }
}

int promedio(int vec[], int tamano){
    float promedio;
    int acu = 0;

    for(int i = 0; i < tamano; i++){

        acu += vec[i];
    }

    promedio = acu / (float)tamano;

    return promedio;
}

int mayores(int vec[], int tamano, float prom){
    int mayor = 0;

    for(int i = 0; i < tamano; i++){
        if(vec[i]>prom){
            mayor++;
        }
    }

    return mayor;
}
