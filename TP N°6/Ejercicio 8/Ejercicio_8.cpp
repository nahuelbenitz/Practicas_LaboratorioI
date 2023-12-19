/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes,
cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada.
El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron por ningún cliente.
*/

#include <iostream>
using namespace std;

int main() {
    const int clientes=50;
    int tiempoxTipoEnt[10][50]={};
    int nroEntrenam, tipoEntrenam, nroCliente, tiempoEntrenam;
    int acuTiempoXCliente=0, maxTiempoXCliente=0, clienteMaxTiempo, tiempoPorTipoJ;

    cout << "Nro de entrenamiento (1 - 9999999): ";
    cin >> nroEntrenam;

    while(nroEntrenam!=0){
        cout << "Nro de cliente (101- 150): ";
        cin >> nroCliente;
        cout << "Tipo de entrenamiento ( 1 - 10 ): ";
        cin >> tipoEntrenam;
        cout << "Tiempo de entrenamiento en min: ";
        cin >> tiempoEntrenam;
        tiempoxTipoEnt[tipoEntrenam-1][nroCliente-101]+=tiempoEntrenam;

        cout << endl << "Nro de entrenamiento: ";
        cin >> nroEntrenam;
}


    //Por cada cada cliente y tipo de entrenamiento, la cantidad total de
    //minutos entrenados. Solo listar aquellos registros que sean superiores a 0.
    // i= cliente    j= entrenamiento
    for(int i=0; i<50; i++){
        acuTiempoXCliente=0;
        for(int j=0; j<10; j++){
            if(tiempoxTipoEnt[j][i]!=0){
                cout << "El cliente nro " << i+101 << " hizo en total " << tiempoxTipoEnt[j][i];
                cout << " minutos de entrenamiento del tipo " <<  j+1 << endl;
                acuTiempoXCliente += tiempoxTipoEnt[j][i];
            }
            //El número de cliente que mas tiempo haya entrenado.
            if(acuTiempoXCliente>maxTiempoXCliente){
                maxTiempoXCliente=acuTiempoXCliente;
                clienteMaxTiempo= i+101;
            }
        }

        // Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos)
        if(acuTiempoXCliente!=0){
            cout << "Tiempo total de entrenamiento: " << acuTiempoXCliente/60 << " horas y " << acuTiempoXCliente%60 << " minutos." << endl;

            //Por cada cliente, los tipos de entrenamiento que realizo.
            cout << "Este cliente realizo entrenamientos del tipo: ";
            for(int j=0; j<10; j++){
                if(tiempoxTipoEnt[j][i]!=0){
                    cout << j+1 << ", ";
                }
            }
            cout << endl;
        }

}

    cout << endl << "El cliente que mas tiempo entreno fue el nro " << clienteMaxTiempo;
    cout << " con un total de " << maxTiempoXCliente << " minutos" << endl;

    // Los tipos de entrenamiento que no se realizaron por ningun cliente.
    cout << "Tipos de entrenamientos que ningun cliente realizo: ";

    for(int j=0; j<10; j++){
        tiempoPorTipoJ=0;
        for(int i=0; i<50; i++){
            if(tiempoxTipoEnt[j][i]!=0){
                tiempoPorTipoJ+=tiempoxTipoEnt[j][i];
            }
        }
        if(tiempoPorTipoJ==0){
            cout << j+1 << ", " << endl;
        }
}


   return 0;
}
