/*
Problema 2
Durante la Edad Media existía un popular juego de dados llamado Nomis. El juego consistía en tirar dos dados de seis caras durante tres rondas.
En cada ronda se debía anotar la diferencia absoluta entre las caras de los dados obtenidos en la tirada.
Esta diferencia absoluta se utiliza para calcular el puntaje a partir de las siguientes reglas:
 -Si en una ronda se obtienen dos dados con la cara 1 o dos dados con la cara 6: El puntaje de esa ronda es de 10 puntos.
 -Cualquier diferencia absoluta mayor a uno: El puntaje de esa ronda es igual a la diferencia absoluta.
 -Cualquier escalera: El puntaje de la ronda es cero y se pierde el total acumulado hasta el momento.

Aclaración: Una escalera es cualquiera de las siguientes combinaciones sin importar el orden de los dados (1-2, 2-3, 3-4, 4-5, 5-6, 1-6)

El juego debe pedir en cada ronda el valor de los dos dados y mostrar el puntaje de la ronda y el puntaje acumulado. Al finalizar las tres rondas debe mostrar el puntaje acumulado.

NOTA: El juego Nomis dejó de jugarse masivamente cuando leyeron el nombre del mismo al revés.

*/

#include <iostream>
using namespace std;

int main() {
   int dado1, dado2, puntajeAcu = 0, puntajeRonda, diferencia;
   const int rondas = 3;

   for(int i = 1; i <= rondas; i++){
    cout << "Puntos dado 1: ";
    cin >> dado1;
    cout << "Puntos dado 2: ";
    cin >> dado2;

    if(dado1 - dado2 > 0){
        diferencia = dado1 - dado2;
    }
    else{
        diferencia = dado2 - dado1;
    }

    if((dado1 == 1 && dado2 == 1) || (dado1 == 6 && dado2 == 6)){
        puntajeRonda = 10;
    }
    else{
        if(diferencia == 1 || diferencia == 5){
            puntajeRonda = 0;
            puntajeAcu = 0;
        }
        else{
            puntajeRonda = diferencia;
        }
    }

    puntajeAcu += puntajeRonda;

    cout << "Ronda: " << i << endl;
    cout << "Puntaje de la ronda: " << puntajeRonda << endl;
    cout << "Puntaje acumulado: " << puntajeAcu << endl;
   }

    cout << "FIN DEL JUEGO" << endl;
    cout << "Puntaje acumulado: " << puntajeAcu << endl;

   return 0;
}
