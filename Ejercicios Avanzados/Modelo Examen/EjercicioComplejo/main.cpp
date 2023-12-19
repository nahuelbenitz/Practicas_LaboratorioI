/*
El festival musical Larapalooza se realiz� este a�o en el mes de Junio y desea registrar la informaci�n de todos los artistas que participaron. Por cada artista y d�a registra:
N�mero de d�a (1 a 3)
N�mero de artista (100 a 130)
G�nero musical del artista (1 a 25)
Cantidad de minutos de show (entero)
Cantidad de canciones a tocar (entero)

Aclaraciones:
Un mismo artista puede tocar en varios d�as.

El fin de los datos se indica con un n�mero de d�a igual a 0. Los datos no est�n agrupados ni ordenados.

Calcular e informar:
A. El g�nero musical del artista que m�s minutos toc� el d�a 3.
   NOTA: Si hay m�s de un artista que registr� la mayor cantidad de minutos en el d�a 3, listar  el g�nero del primero encontrado.
B. La cantidad de artistas que hayan participado en los tres d�as del recital.
C. Los n�meros de artistas que hayan tocado m�s de 15 temas en el recital (teniendo en cuenta todos los d�as en los que hayan participado).
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
