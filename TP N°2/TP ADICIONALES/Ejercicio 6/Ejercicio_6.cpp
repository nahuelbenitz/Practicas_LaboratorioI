/*
Problema 6
Hacer un programa que solicite la lectura de kWh del medidor del mes actual y del mes
anterior (ambos números enteros) de un domicilio y el código de tarifa del mismo. Debe
calcular e informar el importe a abonar en concepto de suministro eléctrico en ese mes.
*/

#include <iostream>
using namespace std;

int main() {
    int kWhActual, kWhAnterior, kWhTotal, fijo;
    float porDia, total;
    char codTarifa;

    cout << "Ingrese los kWh del mes anterior: ";
    cin >> kWhAnterior;
    cout << "Ingrese los kWh del mes actual: ";
    cin >> kWhActual;
    cout << "Ingrese su codido de tarifa: ";
    cin >> codTarifa;

    kWhTotal = kWhAnterior + kWhActual;

    switch(codTarifa){
        case 'a':
        case 'A':
            fijo = 500;
            porDia = 1;
            total = kWhTotal * porDia + fijo;
            cout << "El importe a abonar es de $" << total << endl;
        break;
        case 'b':
        case 'B':
            fijo = 750;
            porDia = 1.25;
            total = kWhTotal * porDia + fijo;
            cout << "El importe a abonar es de $" << total << endl;
        break;
        case 'c':
        case 'C':
            fijo = 600;
            porDia = 3.75;
            total = kWhTotal * porDia + fijo;
            cout << "El importe a abonar es de $" << total << endl;
        break;
    }

   return 0;
}
