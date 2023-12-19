
#include <iostream>
#include "Funciones3.h"
using namespace std;

void cargarDatos(int mayorAdopcionAnimal[], int edades[][2],int animalXvivienda[][5]){
    int mes, tipoAnimal, edad, tipoVivienda;
    cout << "Ingrese mes de adopcion (1 a 12): ";
    cin >> mes;

    while(mes!=0){
        cout << "Ingrese el tipo de animal (entre 10 y 15): ";
        cin >> tipoAnimal;
        cout << "Ingrese la edad del adoptante responsable: ";
        cin >> edad;
        cout << "Ingrese el tipo de vivienda del adoptante (entre 1 y 5): ";
        cin >> tipoVivienda;

        //Punto A
        mayorAdopcionAnimal[tipoAnimal-10] += 1;

        //Punto B
        edades[tipoAnimal-10][0] += edad;
        edades[tipoAnimal-10][1] += 1;

        //Punto C
        animalXvivienda[tipoAnimal-10][tipoVivienda-1]++;


        cout << "Ingrese mes de adopcion (1 a 12): ";
        cin >> mes;
    }
}

int animalMasAdoptado(int mayorAdopcionAnimal[]){
    int i, mayor = 0, tipo; //Inicializo en absurdo
    for(i=0;i<6;i++){
        if(mayorAdopcionAnimal[i]>mayor){
            mayor = mayorAdopcionAnimal[i];
            tipo = i+10;
        }
    }

    return tipo;
}

void promedioAdoptantes(int edades[][2], string animales[]){
    int i;
    float promedio;
    for(i=0;i<6;i++){
        if(edades[i][1]>0){
            promedio = (float)edades[i][0]/edades[i][1];
            cout << "El promedio de edad del " << animales[i] << " es de " << promedio << endl;
        }
        else{
            cout << "El " << animales[i] << " no tuvo adoptantes" << endl;
        }
    }

}

void adopcionesTotales(int animalXvivienda[][5], string viviendas[], string animales[]){

    for(int i = 0;i<6;i++){
        cout << "Cantidad de " << animales[i] << " viviendo en: ";

        for(int j=0;j<5;j++){
            cout << viviendas[j] << " es de " << animalXvivienda[i][j] << " ";

        }
        cout << endl;
    }
}
