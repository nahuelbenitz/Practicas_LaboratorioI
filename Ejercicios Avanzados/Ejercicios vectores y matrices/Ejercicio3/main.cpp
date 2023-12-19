/*
Una fundaci�n que se dedica a fomentar la adopci�n de mascotas dispone de los registros de adopciones del a�o 2023. Por cada adopci�n que se haya efectuado se registr�:
Mes de la adopci�n (entero entre 1 y 12)
Tipo de animal adoptado (entero entre 10 y 15)
Edad del adoptante responsable
Tipo de vivienda del adoptante responsable (entero entre 1 y 5)

La informaci�n no se encuentra agrupada ni ordenada bajo ning�n criterio. Para indicar el fin de la carga de datos se ingresa un mes de adopci�n igual a cero.

Se pide calcular e informar
A. El tipo de animal m�s adoptado en general.
B. El promedio de edad de los adoptantes de cada tipo de animal.
C. Por cada tipo de animal y tipo de vivienda la cantidad total de adopciones registradas.

Aclaraci�n:
Los tipos de animales son:
10 - Perro, 11 - Gato, 12 - Conejo, 13 - Hur�n, 14 - Caballo, 15 - Oveja

Los tipos de vivienda son:
1 - Casa, 2 - Departamento, 3 - Casa Quinta, 4 - Finca, 5 - Duplex
*/
#include <iostream>
#include "Funciones3.h"

using namespace std;

int main()
{
    string animales[] = {"Perro","Gato","Conejo","Huron","Caballo","Oveja"};
    string tipoVivienda[] = {"Casa","Departamento","Casa Quinta","Finca","Duplex"};
    int mayorAdopcion[] = {}, edades[6][2] = {}, animalXvivienda[6][5] = {}, mayorAnimal;

    cargarDatos(mayorAdopcion,edades,animalXvivienda);
    mayorAnimal = animalMasAdoptado(mayorAdopcion);
    cout << "El tipo de animal mas adoptado en general fue el " << mayorAnimal << " - " << animales[mayorAnimal-10] << endl;
    promedioAdoptantes(edades,animales);
    adopcionesTotales(animalXvivienda,tipoVivienda,animales); //NO puedo acceder al vector en la posicion 0



    return 0;
}
