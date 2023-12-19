/*
Una persona desea registrar los gastos realizados durante un mes. Ha definido que los gastos se pueden categorizar en:
ID de Categor�a Nombre de categor�a
1               Servicios
2               Alimentaci�n
3               Limpieza
4               Transporte
5               Educaci�n
6               Salud
7               Ocio
8               Impuestos
9               Vestimenta
10              Inversiones
Por cada gasto registrado se ingresa el siguiente registro:
- D�a (n�mero entero)
- ID de Categor�a de gasto (n�mero entero entre 1 y 10)
- Importe del gasto (n�mero real)
La informaci�n no se encuentra agrupada ni ordenada. No se sabe de antemano cu�ntos registros de gastos habr�. El fin de la carga de informaci�n se indica con un d�a igual a cero.
Calcular e informar:
A) La categor�a de gasto que mayor dinero se haya destinado y cu�l es dicha categor�a.
B) Por cada categor�a de gasto, el nombre de la categor�a y el total acumulado en concepto de gastos del mes.
C) La cantidad de categor�as de gasto que no hayan registrado movimientos.
D) Por cada d�a, la cantidad de gastos que se hayan registrado. S�lo mostrar aquellos registros de d�as que hayan registrado gastos
*/

#include <iostream>
#include "funciones_2.h"
using namespace std;

int main()
{

    string categoria[] = {"Servicios","Alimentacion","Limpieza","Transporte","Educacion","Salud","Ocio","Impuestos","Vestimenta","Inversiones"};
    float importes[10] = {};
    int dias[31] = {}, mayorCate, sinMovimiento;

    cargarDatos(importes, dias);
    mayorCate = mayorCategoria(importes);
    cout << "La categoria de gasto que mayor dinero se le destino fue la " << mayorCate << ". " << categoria[mayorCate-1] << endl;
    listarGastosMensuales(categoria,importes);
    sinMovimiento = sinVentas(importes);
    cout << "La cantidad de categorias sin gastos registrados es de " << sinMovimiento << endl;
    ventasDia(dias);


    return 0;
}
