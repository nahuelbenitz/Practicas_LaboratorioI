/*
Una fábrica de caramelos dispone de un presupuesto inicial para inaugurar su sucursal en Villa Brian Lara.
Se sabe que para producir caramelos tienen los siguientes costos:
- Costo de alquiler de $10000
- Costo por caramelo producido de $0.5
- Costo por mantenimiento cada 1000 caramelos de $5000

Dados el presupuesto inicial y la cantidad de caramelos a producir el primer mes, informar:
1. "El presupuesto es suficiente para cubrir los costos de $XXXX"
2. "El presupuesto no es suficiente, necesita un crédito de $XXXX"

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    const float alquiler = 10000, caramelo = 0.5, mantenimiento = 5000;
    float presupuesto, precioCantCaramelos, cantidadMantenimiento, total, neto;
    int cantidad;
    bool cubre;

    cout << "Bienvenido." << endl;
    cout << "Ingrese su presupuesto inicial: $";
    cin >> presupuesto;
    cout << "Ahora ingrese la cantidad de caramelos a producir el primer mes: ";
    cin >> cantidad;

    cout << endl;

    //costos
    precioCantCaramelos = cantidad * caramelo;    cantidadMantenimiento = (cantidad / 1000) * mantenimiento;
    total = precioCantCaramelos + cantidadMantenimiento + alquiler;

    neto = presupuesto - total;

    if(neto >= 0){
        cubre = true;
    }
    else{
        cubre = false;
    }

    switch(cubre){
        case true:
            cout << "El presupuesto es suficiente para cubrir el total de los costos" << endl;
        break;
        case false:
            cout << "El presupuesto no es suficiente, necesita un credito de $" << (neto*(-1)) << endl;
        break;
    }


   return 0;
}
