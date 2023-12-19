#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
using namespace std;

void cargarDatos(int pa_provincias[], int pb_panteologo[], float &costoCordoba, int &expCordoba);
void mostrarProvinciasSinAnimales(int pa_provincias[], string provincias[]);
void mayorPaleontologo(int pb_paleontologo[], int &mayorLegajo);
void promedioCorboda(float costoCordoba, int expCordoba);

#endif // FUNCIONES_H_INCLUDED
