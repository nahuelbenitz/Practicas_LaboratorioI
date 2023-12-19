/*
La mundialmente conocida hamburguesería Coco’s Burger desea registrar la información de las ventas de la primera semana de Agosto 2023 de su local ubicado en Canelones, Uruguay.
Por cada venta se registra:
•    Código de hamburguesa (entero de 1 a 5)
•    Día (entero de 1 - Lunes a 7 - Domingo)
•    Cantidad vendida (entero)
•    Tipo de Acompañamiento ('B' – con batatas / 'P' – con papas / 'C' – Aros de cebolla / 'X' – sin acompañamiento)
Pueden existir varios registros de ventas para la misma hamburguesa. El fin de la carga de datos se indica con un código de hamburguesa igual a 0.
A este lote se le precede otro ordenado por número de hamburguesa con la siguiente información:
•    Código de hamburguesa (1 a 5)
•    Precio (float)
•    Stock al comienzo de la semana (entero)
Se pide determinar e informar:
A. Por cada hamburguesa, la cantidad de unidades vendidas y el total recaudado.
B. La hamburguesa más vendida el viernes.
C. Los días que se vendieron hamburguesas acompañadas de Batatas pero no se vendieron hamburguesas acompañadas de Aros de Cebolla.
D. Las hamburguesas que lograron un sold out (vendieron todo)
E. Por cada día y acompañamiento, la cantidad de hamburguesas vendidas.
*/
#include <iostream>
#include "funciones4.h"
using namespace std;

int main()
{
    int stock[5] = {}, viernes[5] = {}, conBatatas[][2] = {}, diaXacomp[7][4] = {}, vendidas[5] = {};
    int masVendida, batatasSCebollas[7][2];
    float precios[5] = {}, recaudado[5] = {};
    string acompaniamientos[] = {"Batatas","Papas","Aros de cebolla","Sin acompaniamientos"};

    cargarLote(stock, precios);
    cargarVenta(stock, precios,viernes,conBatatas,diaXacomp,vendidas,recaudado);
    ventaPorHamburguesa(recaudado,vendidas);
    masVendida = masVendidaViernes(viernes);
    cout << "La hamburguesa mas vendida el viernes fue la " << masVendida << endl;
    diasBatatasSinCebolla(batatasSCebollas);
    soldOut(stock);
    DiasYAcompaniamientos(diaXacomp,acompaniamientos);

    return 0;
}
