#include <iostream>
#include "funciones.h"
using namespace std;

void cargarDatos(int p2_agentes[], float p3_distritos[], int p1_horaXinfra[][2], int p4_tipoXcant[][12]){
    int numInfraccion, codAgente, dia, mes, hora, tipo, distrito, horario;
    float importe;

    cout << "Ingrese el numero de infraccion: ";
    cin >> numInfraccion;

    while(numInfraccion != 0){
        cout << "Ingrese el codigo de agente (entre 1 y 300): ";
        cin >> codAgente;
        cout << "Ingrese el dia: ";
        cin >> dia;
        cout << "Ingrese el mes: ";
        cin >> mes;
        cout << "Ingrese la hora: ";
        cin >> hora;
        cout << "Ingrese el tipo de infraccion (entre 10 y 19): ";
        cin >> tipo;
        cout << "Ingrese el distrito (entre 500 y 610): ";
        cin >> distrito;
        cout << "Ingrese el importe de la infraccion: ";
        cin >> importe;

        //Punto 1
        horario = ObtenerTipoHorario(hora); //GUARDA EL 0 O 1 Y LO USO PARA INDICAR LA COLUMNA
        p1_horaXinfra[tipo-10][horario]++; //INCREMENTO EN 1 SEGUN EL TIPO Y HORARIO

        //Punto 2
        p2_agentes[codAgente-1] = 1; //ASIGNO 1 A LOS "AGENTES" QUE REGISTRARON AL MENOS 1 INFRACCION PARA DESPUES UTILIZARLO EN LA FUNCIÓN

        //Punto 3
        if(mes == 1 || mes == 2 || mes == 3){ //PREGUNTO SI ES DEL PRIMER TRIMESTRE DEL AÑO
            p3_distritos[distrito-500] += importe; //ACUMULO EL IMPORTE PARA LUEGO VER QUIENES TIENES MAS DE UN MILLON
        }

        //Punto 4
        p4_tipoXcant[tipo-10][mes-1]++; //GUARDO LA CANTIDAD DE MULTAS SEGUN EL MES (COLUMNA) Y EL TIPO (FILA), PARA LUEGO RECORRER FILA POR FILA (DE ARRIBA HACIA ABAJO, NO IZQUIERDA A DERECHA).


        cout << "Ingrese el numero de infraccion: ";
        cin >> numInfraccion;
    }

}

//FUNCIÓN SOLICITADA PARA RESOLVER EL PUNTO 1

int ObtenerTipoHorario (int horario){

    if(horario >= 6 && horario <=18){ //SI NO ESTA EN ESTA FRANJA, AUTOMATICAMENTE SE QUE ES NOCTURNO
        return 1;
    }
    return 0;
}

void Punto1(int p1_horaXinfra[][2], string infracciones[]){
    cout << "Los tipos de infracciones que se cometieron mayormente en horario nocturno son: " << endl;
    for(int i=0;i<10; i++){
        if(p1_horaXinfra[i][0] > p1_horaXinfra[i][1]){
            cout << infracciones[i] << endl; // SI LA CANTIDAD DE INFRACCIONES EN HORARIO NOCTURNO (COLUMNA 0) ES MAYOR AL DIURNO (COLUMNA 1), MUESTRO
        }
    }

}

//FUNCIÓN SOLICITADA PARA EL PUNTO 2

void Punto2(int p2_agentes[]){
    cout << "Los codigos de agentes que registraron al menos una infraccion son: " << endl;
    for(int i=0; i<300; i++){
        if(p2_agentes[i] == 1){
            cout << i+1 << endl; //MUESTRO SOLAMENTE SI ANTERIORMENTE SE LE COLOCO EL 1 (AL MENOS UNA INFRACCION)
        }
    }

}

void Punto3(float p3_distritos[]){
    cout << "Los distritos que NO recaudaron mas de un millon de pesos en el primer trimestre del anio son: " << endl;
    for(int i=0; i<111; i++){
        if(p3_distritos[i]<=1000000){
            cout << i+500 << endl; //MUESTRO SOLAMENTE LOS QUE NO SUPERARON EL MILLON
        }
    }
}

void Punto4(int p4_tipoXcant[][12], string infracciones[]){

    for(int i=0; i<12; i++){
        cout << "En el mes " << i+1 << " se cometieron las siguientes infracciones: " << endl;
        for(int j=0; j<10; j++){
            if(p4_tipoXcant[j][i]>0){
                cout << "   " << p4_tipoXcant[j][i] << " -> " << infracciones[j] << endl; //SI HUBO INFRACCIONES, MUESTRO CANTIDAD Y LUEGO NOMBRE
            }
        }
    }
}
