#include <iostream>
#include "funciones.h"
using namespace std;


void cargarDatos(int pa_provincias[], int pb_panteologo[], float &costoCordoba, int &expCordoba){
    int legajo, dias, codigo, fosAnimales, fosVegetales;
    int sumaFosiles;
    float costoTotal;

    cout << "Ingrese numero de legajo (1000 a 1499): ";
    cin >> legajo;

    while(legajo != 0){
        cout << "Ingrese dias de duracion: ";
        cin >> dias;
        cout << "Ingrese codigo de provincia (1 a 6): ";
        cin >> codigo;
        cout << "Ingrese cantidad de fosiles animales encontrados: ";
        cin >> fosAnimales;
        cout << "Ingrese cantidad de fosiles vegetales encontrados: ";
        cin >> fosVegetales;
        cout << "Ingrese el costo total de la expedicion: $";
        cin >> costoTotal;

        //Punto A
        pa_provincias[codigo-1] += fosAnimales;

        //Punto B
        sumaFosiles = fosAnimales + fosVegetales;
        pb_panteologo[legajo-1000] += sumaFosiles;

        //Punto C
        if(codigo == 4){
            costoCordoba += costoTotal;
            expCordoba++;
        }

        cout << "Ingrese numero de legajo (1000 a 1499): ";
        cin >> legajo;
    }
}

void mostrarProvinciasSinAnimales(int pa_provincias[], string provincias[]){
    cout << "En las siguientes provincias no se encontraron fosiles animales: " << endl;
    for(int i=0; i<6; i++){
        if(pa_provincias[i]==0){
            cout << provincias[i] << endl;
        }
    }
}

void mayorPaleontologo(int pb_paleontologo[], int &mayorLegajo){
    int mayor = 0;
    for(int i=0; i<500; i++){
        if(pb_paleontologo[i]> mayor){
            mayor = pb_paleontologo[i];
            mayorLegajo = i+1000;
        }
    }


}

void promedioCorboda(float costoCordoba, int expCordoba){
    float promedio;
    promedio = costoCordoba/expCordoba;
    cout << "El costo promedio de las expediciones a Cordoba fue de $" << promedio;
}
