/*
La Asociaci�n de Paleontolog�a Argentina dispone de la informaci�n de las expediciones de sus 500 paleont�logos asociados durante el a�o 2022. Por cada expedici�n realizada se registr�:
Legajo de/la paleont�logo/a l�der (1000 a 1499)
D�as de duraci�n (n�mero entero)
C�digo de provincia (1 a 6)
Cantidad de f�siles animales encontrados (n�mero entero)
Cantidad de f�siles vegetales encontrados (n�mero entero)
Costo total de la expedici�n (float)
La informaci�n no se encuentra agrupada ni ordenada. Para indicar el fin de la carga de datos se ingresa un legajo igual a cero.
Se pide calcular e informar
A) Los nombres de las provincias en las que no se hayan encontrado f�siles animales en ninguna de las expediciones (al menos debe haber registrado alguna expedici�n).
    Las provincias registran los siguientes c�digos y nombres:
    C�digo          Nombres
    1              R�o Negro
    2              Chubut
    3              Santa Cruz
    4              C�rdoba
    5              Tierra del Fuego
    6              Buenos Aires
B) El legajo de/la paleont�logo/a que haya encontrado, en total, la mayor cantidad de f�siles.
C) El costo promedio de las expediciones realizadas en C�rdoba.
Aclaraciones
Un/a paleont�logo/a puede haber participado de varias expediciones, de una o de ninguna.
S�lo habr� un/a paleont�logo/a que haya encontrado la mayor cantidad de f�siles en total.
*/
#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    string provincias[] = {"Rio negro","Chubut","Santa Cruz","Cordoba","Tierra del Fuego","Buenos Aires"};
    int pa_provincias[6] = {}, pb_panteologo[500] = {}, expCordoba = 0, mayPaleontologo;
    float costoCordoba = 0;

    cargarDatos(pa_provincias,pb_panteologo,costoCordoba,expCordoba);
    mostrarProvinciasSinAnimales(pa_provincias,provincias);
    mayorPaleontologo(pb_panteologo,mayPaleontologo);
    cout << "El legajo del paleontologo con mas fosiles encontrados es el " << mayPaleontologo << endl;
    if(expCordoba > 0){
        promedioCorboda(costoCordoba,expCordoba);
    }
    else{
        cout << "NO hubo expediciones a cordoba";
    }

    return 0;
}
