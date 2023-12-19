#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

#include <iostream>
using namespace std;

void cargarDatos(int p2_agentes[], float p3_distritos[], int p1_horaXinfra[][2], int p4_tipoXcant[][12]);
int ObtenerTipoHorario (int horario);
void Punto1(int p1_horaXinfra[][2], string infracciones[]);
void Punto2(int p2_agentes[]);
void Punto3(float p3_distritos[]);
void Punto4(int p4_tipoXcant[][12], string infracciones[]);

#endif // FUNCIONES_H_INCLUDED
