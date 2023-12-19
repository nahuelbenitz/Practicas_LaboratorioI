/*
El festival musical Larapalooza se realizó este año en el mes de Junio y desea registrar la información de todos los artistas que participaron. Por cada artista y día registra:
Número de día (1 a 3)
Número de artista (100 a 130)
Género musical del artista (1 a 25)
Cantidad de minutos de show (entero)
Cantidad de canciones a tocar (entero)

Aclaraciones:
Un mismo artista puede tocar en varios días.

El fin de los datos se indica con un número de día igual a 0. Los datos no están agrupados ni ordenados.

Calcular e informar:
A. El género musical del artista que más minutos tocó el día 3.
   NOTA: Si hay más de un artista que registró la mayor cantidad de minutos en el día 3, listar  el género del primero encontrado.
B. La cantidad de artistas que hayan participado en los tres días del recital.
C. Los números de artistas que hayan tocado más de 15 temas en el recital (teniendo en cuenta todos los días en los que hayan participado).
*/
#include <iostream>
#include "funciones.h"
using namespace std;

int main()
{
    int mayorGenero, participacionArtista[31] = {}, masDias, canciones[31];

    cargarDatos(mayorGenero,participacionArtista,canciones);

    cout << "El genero musical con mas minutos el dia 3 fue el " << mayorGenero << endl;

    masDias = artistasTresDias(participacionArtista);

    cout << "En total participaron " << masDias << " artistas los 3 dias del recital" << endl;

    muchosTemas(canciones);

    return 0;
}
