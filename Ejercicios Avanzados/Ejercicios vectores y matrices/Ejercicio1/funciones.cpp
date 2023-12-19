#include <iostream>
#include "funciones.h"

using namespace std;

void cargarNotas(int notas[]){
    int i;
    for(i=0; i<78;i++){
        cout << i+1 << ". Ingrese la nota: ";
        cin >> notas[i];
    }

}

void buscarNota(int notas[], int valor){
    cout << "La nota en la posicion " << valor << " es " << notas[valor-1] << endl;
}

float calcularPromedio(int notas[]){
    int i, acumulador = 0;
    float promedio;
    for(i=0;i<78;i++){
        acumulador += notas[i];
    }
    promedio = (float)acumulador / 78;
    return promedio;
}

void listarEstudiante(int notas[]){
    int i, cont = 0;
    float promedio;
    promedio = calcularPromedio(notas);
    for(i=0;i<78;i++){
        if(notas[i]> promedio){
            cont++;
        }
    }

    cout << "Hubo " << cont << " estudiantes con notas mayor al promedio" << endl;
}
