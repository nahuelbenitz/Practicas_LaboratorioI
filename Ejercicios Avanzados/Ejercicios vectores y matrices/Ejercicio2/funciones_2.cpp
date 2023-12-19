#include <iostream>
#include "funciones_2.h"

using namespace std;

void cargarDatos(float gastos[], int diaMes[]){
    int dia, id;
    float importe;

    cout << "Ingrese numero de dia: ";
    cin >> dia;

    while(dia != 0){
        cout << "Ingrese id de la categoria: ";
        cin >> id;
        cout << "Ingrese el importe total: $";
        cin >> importe;

        //Punto A
        gastos[id-1] += importe;

        //Punto D
        diaMes[dia-1] += importe;

        cout << "Ingrese numero de dia: ";
        cin >> dia;
    }
}

int mayorCategoria(float gastos[]){
    int i, mayor = 0, categoria; //Inicializo en 0 el mayor gasto ya que seria un ansurdo
    for(i=0;i<10;i++){
        if(gastos[i]> mayor){
            mayor = gastos[i];
            categoria = i+1;
        }
    }

    return categoria;

}

void listarGastosMensuales(string categorias[], float gastos[]){
    int i;
    for(i=0;i<10;i++){
        cout << "En la categoria " << i+1 << ". " << categorias[i] << ", el gasto mensual fue de $" << gastos[i] << endl;
    }
}

int sinVentas(float gastos[]){
    int i, cont = 0;
    for(i=0; i<10;i++){
        if(gastos[i] == 0){
            cont++;
        }
    }

    return cont;
}

void ventasDia(int dia[]){
    int i;
    for(i=0;i<31;i++){
        if(dia[i] > 0){
            cout << "El dia " << i+1 << " se vendio un total de $" << dia[i] << endl;
        }
    }
}
