#ifndef FUNCIONES3_H_INCLUDED
#define FUNCIONES3_H_INCLUDED

#include <iostream>
using namespace std;

void cargarDatos(int mayorAdopcionAnimal[], int edades[][2],int animalXvivienda[][5]);
int animalMasAdoptado(int mayorAdopcionAnimal[]);
void promedioAdoptantes(int edades[][2], string animales[]);
void adopcionesTotales(int animalXvivienda[][5], string viviendas[], string animales[]);


#endif // FUNCIONES3_H_INCLUDED
