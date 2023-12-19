/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos en tres jornadas distintas.
Se desea un programa que registre los artistas que participarán. Por cada artista se registró:
Número de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número de artista igual a cero.
Calcular e informar:
A. El número de artista que realice el show más largo de la jornada 1. // mayor
B. La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados). // contador
C. La jornada más extensa (en minutos). // mayor
D. Duración promedio de show por artista (se muestra un resultado). // promedio

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numArtista, integrantes, duracion, artistaMayor, duracionMayor, acuDuracion = 0, jornadaMayor, numeroJornadaMayor;
    int solistas1 = 0,solistas2 = 0, solistas3 = 0,  artistas = 0, jornadaExtensa1 = 0, jornadaExtensa2 = 0, jornadaExtensa3 = 0;
    float duracionPromedio;
    char jornada;
    bool banDuracion = true;

    cout << "Ingrese el numero del artista: ";
    cin >> numArtista;

    while (numArtista != 0){

        cout << "Ingrese el numero de integrantes: ";
        cin >> integrantes;

        cout << "Ingrese el numero de la jornada (1, 2 o 3): ";
        cin >> jornada;

        cout << "Ingrese la duracion del show (en minutos): ";
        cin >> duracion;


        if (jornada == '1'){
        //A
            if(banDuracion){
                duracionMayor = duracion;
                artistaMayor = numArtista;
                banDuracion = false;
            }
            else{
                if(duracion > duracionMayor){
                    duracionMayor = duracion;
                    artistaMayor = numArtista;
                }
            }
        //B
            if(integrantes == 1){
                solistas1++;
            }
        //C
            jornadaExtensa1 += duracion;
        }
        else if ( jornada == '2'){
            if(integrantes == 1){
                solistas2++;
            }

            jornadaExtensa2 += duracion;
        }
        else {
            if(integrantes == 1){
                solistas3++;
            }

            jornadaExtensa3 += duracion;
        }

        acuDuracion += duracion;
        artistas++;




        cout << "Ingrese el numero del artista: ";
        cin >> numArtista;
    }

    //C
    if(jornadaExtensa1 > jornadaExtensa2){
        if(jornadaExtensa1 > jornadaExtensa3){
            jornadaMayor = jornadaExtensa1;
            numeroJornadaMayor = 1;
        }
        else{
            jornadaMayor = jornadaExtensa3;
            numeroJornadaMayor = 3;
        }
    }
    else{
        if(jornadaExtensa2 > jornadaExtensa3){
            jornadaMayor = jornadaExtensa2;
            numeroJornadaMayor = 2;
        }
        else{
            jornadaMayor = jornadaExtensa3;
            numeroJornadaMayor = 3;
        }
    }

    //D
    duracionPromedio = acuDuracion / (float)artistas;

    cout << endl << endl;

    cout << "A. El artista con show mas largo en la jornada uno es: " << artistaMayor << endl;
    cout << "B. la cantidad de solistas que participaron en la jornada 1, 2 y 3 fueron respectivamente: " << solistas1 << ", " << solistas2 << " y " << solistas3 << endl;
    cout << "C. La jornada mas extensa fue la jornada " << numeroJornadaMayor << " con " << jornadaMayor << " minutos." << endl;
    cout << "D. La duracion promedio de show por artista fue de: " <<fixed<<setprecision(2)<<duracionPromedio << " minutos" << endl;

   return 0;
}
