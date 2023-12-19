/*
    Se dispone de la información de los últimos 19 partidos del futbolista Diego Armando Laradona. Por cada partido se registró:
    Número de partido
    Minutos jugados
    Tarjetas amarillas
    Tarjetas rojas
    Goles

    Existe un registro para cada partido. Los mismos se encuentran ordenados por número de partido. Se pide calcular e informar:
    La cantidad de partidos que no jugó (partidos con minutos igual a cero)
    La cantidad de partidos que jugó por completo (minutos >= 90)
    El promedio de tarjetas recibidas por partido.
    El número de partido en el que haya convertido mayor cantidad de goles. Indicar también los goles convertidos.
    La mejor racha de partidos convirtiendo goles. Se debe mostrar la mayor cantidad de partidos consecutivos en los que haya convertido.

*/

#include <iostream>
using namespace std;

int main() {
    const int partidoFijo = 6;
    int numPartido, tarjAmarilla, tarjRoja, tarjetas = 0, gol, partidoAnterior;
    int maxGoles, partidosNo = 0, partidosSi = 0, golesConsecutivos = 0, minutos;
    float tarjPromedio;
    bool primer = true;

        cout << "Bienvenido!";
        for(int x=1; x<=partidoFijo; x++){
        cout << endl << "Cargue los datos del partido N" << x << endl;
        cout << "Ingrese los minutos jugados ";
        cin >> minutos;

        if(minutos==0){
            partidosNo++;
        }
        else if(minutos >= 90){
            partidosSi++;
        }

        cout << "Tarjetas amarillas: ";
        cin >> tarjAmarilla;

        if(tarjAmarilla!=0){
            tarjetas += tarjAmarilla;
        }

        cout << "tarjeta roja: ";
        cin >> tarjRoja;

        if(tarjRoja==1){
            tarjetas += tarjRoja;
        }

        cout << "Ingrese los goles convertidos en el partido: ";
        cin >> gol;

        if(gol>0){

            if(primer){
                maxGoles = gol;
                numPartido = x;
                primer = false;
            }
            else if(gol > maxGoles){
                maxGoles = gol;
                numPartido = x;
            }

            partidoAnterior = (x-1);
            if(x - (partidoAnterior)==1){
                golesConsecutivos++;
            }
        }
    }

    tarjPromedio = (float)tarjetas/partidoFijo;


    cout << endl << endl;

    //Punto 1

    cout << "La cantidad de partidos que no jugo es de " << partidosNo << " partidos." << endl;

    //Punto 2

    cout << "La cantidad de partidos que jugo completos es de " << partidosSi << " partidos." << endl;

    //Punto 3

    cout << "El promedio de tarjetas por partido jugado es de " << tarjPromedio << " en total." << endl;

    //Punto 4

    cout << "El numero de partido en el que convirtio mas goles es el " << numPartido << " con un total de " << maxGoles << " goles." << endl;

    //Punto 5

    cout << "El mayor numero de partidos en los que convirtio de manera consecutiva es de " << golesConsecutivos << " partidos." << endl;

   return 0;
}
