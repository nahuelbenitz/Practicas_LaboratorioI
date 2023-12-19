/*
La asociaci�n de maratonistas de maratones de verdad (no de series) quiere registrar la informaci�n de las
�ltimas 5 maratones que se realizaron en el pa�s. Por cada participante se registr� la siguiente informaci�n:
 -N�mero de marat�n (entero)
 -N�mero de participante (entero)
 -G�nero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo)
 -Tiempo (en minutos)
 -Finaliza (1 - Finaliza, 0 - Abandona)

La informaci�n se encuentra agrupada por n�mero de marat�n. Cada marat�n puede tener una cantidad distinta de participantes.
Para indicar el fin de la carga de datos de una marat�n se ingresa un n�mero de participante negativo.
Se pide calcular e informar:
 - El porcentaje de participantes por g�nero.
 - El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones.
 - Por cada marat�n, la persona que haya realizado el menor tiempo y haya finalizado la competencia. Indicar el n�mero de participante y el tiempo
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int numeroMaraton, numeroParticipante, finalizo, menorParticipante;
    const int maratones = 5;
    char genero;
    bool primero;
    int mujeres = 0, hombres = 0, indefinido = 0, totalParticipantes, completo = 0, acuTiempo = 0;
    float tiempo, porcentajeF, porcentajeM, porcentajeX, tiempoPromedio, menorTiempo;

    cout << "BIENVENIDO" << endl;

    for(int i = 1; i <= maratones; i++){
        primero = true;

        cout << "Nos encontramos en la maraton numero " << i << endl;
        cout << "Ingrese el numero de participante: ";
        cin >> numeroParticipante;

        while(numeroParticipante > 0){

            cout << "Ingrese el genero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo): ";
            cin >> genero;
            cout << "Ingrese el tiempo (en minutos): ";
            cin >> tiempo;
            cout << "Finalizo o abandono? (1 - Finaliza, 0 - Abandona): ";
            cin >> finalizo;

            switch(genero){
            case 'F':
                mujeres++;
                break;
            case 'M':
                hombres++;
                break;
            case 'X':
                indefinido++;
                break;
            }

            if(finalizo == 1){
                completo++;
                acuTiempo += tiempo;

                if(primero){
                    menorTiempo = tiempo;
                    menorParticipante = numeroParticipante;
                    primero = false;
                }
                else{
                    if(tiempo < menorTiempo){
                        menorTiempo = tiempo;
                        menorParticipante = numeroParticipante;
                    }
                }

            }


            cout << "Ingrese el numero de participante: ";
            cin >> numeroParticipante;
        }

        //C

        cout << "En la maraton numero " << i << " el participante que logro completarla en el menor tiempo posible fue el " << menorParticipante << " en un total de " << menorTiempo << " minutos" << endl;

    }

    totalParticipantes = (mujeres + hombres +indefinido);
    porcentajeF = (mujeres * 100) / totalParticipantes;
    porcentajeM = (hombres * 100) / totalParticipantes;
    porcentajeX = (indefinido * 100) / totalParticipantes;

    tiempoPromedio = acuTiempo / completo;

    //A

    cout << "El porcentaje del genero femenino es de " <<fixed<<setprecision(2)<< porcentajeF << "%" <<endl;
    cout << "El porcentaje del genero masculino es de " <<fixed<<setprecision(2)<< porcentajeM << "%" <<endl;
    cout << "El porcentaje del que prefirio no decir su genero es de " <<fixed<<setprecision(2)<< porcentajeX << "%" <<endl;

    //B

    cout << "El tiempo promedio de los que finalizaron la maraton es de " << tiempoPromedio << " minutos" << endl;






   return 0;
}
