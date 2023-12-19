#include <iostream>
#include "funciones4.h"
using namespace std;


void cargarLote(int stock[], float precios[]){
    for(int i =0;i<5;i++){
        cout << "Ingrese el precio de la hamburguesa codigo " << i+1 << ": ";
        cin >> precios[i];
        cout << "Ingrese el stock de la hamburguesa codigo " << i+1 << ": ";
        cin >> stock[i];
    }
}

void cargarVenta(int stock[], float precios[], int viernes[], int batatasSinCebolla[][2], int diaXacompaniamiento[][4], int vendidas[], float recaudado[]){
    int codigo, dia, cantidadVendida;
    char tipoAcompaniamiento;

    cout << "Ingrese el codigo de la hamburguesa: ";
    cin >> codigo;

    while(codigo != 0){
        cout << "Ingrese el dia (de 1-Lunes a 7-Domingo): ";
        cin >> dia;
        cout << "Ingrese la cantidad vendida: ";
        cin >> cantidadVendida;


        cout << "Ingrese el tipo de acompaniamiento ('B' – con batatas / 'P' – con papas / 'C' – Aros de cebolla / 'X' – sin acompañamiento: ";
        cin >> tipoAcompaniamiento;

        //Punto A
        recaudado[codigo-1] += precios[codigo-1]*cantidadVendida;
        if(stock[codigo-1]-cantidadVendida >=0){
            stock[codigo-1] -= cantidadVendida;
            vendidas[codigo-1] += cantidadVendida;
        }

        //Punto B
        if(dia == 5){
            viernes[codigo-1] += cantidadVendida;
        }

        //Punto C
        if(tipoAcompaniamiento == 'B'){
            batatasSinCebolla[dia-1][0]++;
        }
        else if(tipoAcompaniamiento == 'C'){
            batatasSinCebolla[dia-1][1]++;
        }

        //Punto E
        switch(tipoAcompaniamiento){
        case 'B':
            diaXacompaniamiento[dia-1][0]++;
            break;
        case 'P':
            diaXacompaniamiento[dia-1][1]++;
            break;
        case 'C':
            diaXacompaniamiento[dia-1][2]++;
            break;
        case 'X':
            diaXacompaniamiento[dia-1][3]++;
            break;
        }
        diaXacompaniamiento[dia-1][0]++;

        cout << "Ingrese el codigo de la hamburguesa: ";
        cin >> codigo;
    }
}

void ventaPorHamburguesa(float recaudado[], int vendidas[]){
    for(int i=0;i<5;i++){
        cout << "La hamburguesa " << i+1 << " vendio un total de " << vendidas[i] << " y recaudo $" << recaudado[i] << endl;
    }

}

int masVendidaViernes(int viernes[]){
    int mayor = 0, masVendida;
    for(int i = 0; i < 5; i++){
        if(viernes[i]>mayor){
            mayor = viernes[i];
            masVendida = i+1;
        }
    }

}

void diasBatatasSinCebolla(int batatasScebolla[][2]){

    for(int i = 0; i<7; i++){
        if(batatasScebolla[i][0]>0 && batatasScebolla[i][1] == 0){
            cout << "El dia " << i+1 << " se vendieron hamburguesas acompañadas de Batatas pero no se vendieron hamburguesas acompañadas de Aros de Cebolla" << endl;
        }
    }

}

void soldOut(int stock[]){
    for(int i =0;i<5;i++){
        if(stock[i]==0){
            cout << "La hamburguesa " << i+1 << " se agoto." << endl;
        }
    }

}

void DiasYAcompaniamientos(int diaXacompaniamiento[][4], string acompa[]){

    for(int i=0;i<7;i++){
            cout << "El dia " << i+1 << " se vendieron: " << endl;
        for(int j=0; j<4;j++){
            cout << diaXacompaniamiento[i][j] << " con " << acompa[j];
        }
        cout << endl;
    }


}
