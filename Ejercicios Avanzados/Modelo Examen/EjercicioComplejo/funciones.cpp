#include <iostream>
#include "funciones.h"
using namespace std;

void cargarDatos(int &generoDiaTres, int artistas[], int canciones[]){
    int dia, numArtista, genero, cantidadMinutos, cantidadCanciones;
    int mayorMinutos = 0;

    cout << "Ingrese el numero de dia (1 a 3): ";
    cin >> dia;

    while(dia != 0){

        cout << "Ingrese el numero de artista (100 a 130): ";
        cin >> numArtista;
        cout << "Ingrese el genero musical del artista (1 a 25): ";
        cin >> genero;
        cout << "Ingrese la cantidad de minutos de show: ";
        cin >> cantidadMinutos;
        cout << "Ingrese la cantidad de canciones a tocar: ";
        cin >> cantidadCanciones;

        //Punto A
        if(dia == 3){
            if(cantidadMinutos > mayorMinutos){
                mayorMinutos = cantidadMinutos;
                generoDiaTres = genero;
            }
        }

        //Punto B
        artistas[numArtista-100]++;

        //Punto C
        canciones[numArtista-100] += cantidadCanciones;


        cout << "Ingrese el numero de dia: ";
        cin >> dia;
    }
}

int artistasTresDias(int artistas[]){
    int cont = 0;
    for(int i=0; i<31; i++){
        if(artistas[i]==3){
            cont++;
        }

    }
    return cont;
}

void muchosTemas(int canciones[]){
    cout << "Los artistas que tocaron mas de 15 canciones son: " << endl;
    for(int i=0; i<31; i++){
        if(canciones[i]>15){
            cout << "Artista Num. " << i+1 << endl;
        }
    }
}
