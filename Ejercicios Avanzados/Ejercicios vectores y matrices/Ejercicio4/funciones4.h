#ifndef FUNCIONES4_H_INCLUDED
#define FUNCIONES4_H_INCLUDED

#include <iostream>
using namespace std;

void cargarLote(int stock[], float precios[]);
void cargarVenta(int stock[], float precios[], int viernes[], int batatasSinCebolla[][2], int diaXacompaniamiento[][4], int vendidas[], float recaudado[]);
void ventaPorHamburguesa(float recaudado[], int vendidas[]);
int masVendidaViernes(int viernes[]);
void diasBatatasSinCebolla(int batatasScebolla[][2]);
void soldOut(int stock[]);
void DiasYAcompaniamientos(int diaXacompaniamiento[][4], string acompa[]);

#endif // FUNCIONES4_H_INCLUDED
