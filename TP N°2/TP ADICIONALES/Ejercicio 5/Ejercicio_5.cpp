/*
Problema 5
Una empresa proveedora de electricidad ha informado el cuadro tarifario vigente para este
año. El mismo es el que se indica a continuación:
Código de tarifa        Tipo        Categoría       Cargo fijo        Precio por kWh
A / a                  Residencial      1           $ 500               $ 1
B / b                  Residencial      2           $ 750               $ 1.25
C / c                  Residencial      3           $ 600               $ 3.75
D / d                  Comercial        1           $ 1100              $ 6
E / e                  Comercial        2           $ 1500              $ 12.5
F / f                  Comercial        3           $ 1800              $ 20

Hacer un programa que solicite el código de tarifa y muestre por pantalla el tipo de servicio,
la categoría, el cargo fijo y el precio por kWh.
*/

#include <iostream>
using namespace std;

int main() {
    char codTarifa;

    cout << "Ingrese su codido de tarifa: ";
    cin >> codTarifa;

    switch(codTarifa){
        case 'a':
        case 'A':
            cout << "Tipo de servicio: Residencial" << endl;
            cout << "Categoria: 1" << endl;
            cout << "Cargo fijo: $500" << endl;
            cout << "Precio por kWh: $1" << endl;
        break;
        case 'b':
        case 'B':
            cout << "Tipo de servicio: Residencial" << endl;
            cout << "Categoria: 2" << endl;
            cout << "Cargo fijo: $750" << endl;
            cout << "Precio por kWh: $1.25" << endl;
        break;
        case 'c':
        case 'C':
            cout << "Tipo de servicio: Residencial" << endl;
            cout << "Categoria: 3" << endl;
            cout << "Cargo fijo: $600" << endl;
            cout << "Precio por kWh: $3.75" << endl;
        break;
        case 'd':
        case 'D':
            cout << "Tipo de servicio: Comercial" << endl;
            cout << "Categoria: 1" << endl;
            cout << "Cargo fijo: $1100" << endl;
            cout << "Precio por kWh: $6" << endl;
        break;
        case 'e':
        case 'E':
            cout << "Tipo de servicio: Comercial" << endl;
            cout << "Categoria: 2" << endl;
            cout << "Cargo fijo: $1500" << endl;
            cout << "Precio por kWh: $12.5" << endl;
        break;
        case 'f':
        case 'F':
            cout << "Tipo de servicio: Comercial" << endl;
            cout << "Categoria: 3" << endl;
            cout << "Cargo fijo: $1800" << endl;
            cout << "Precio por kWh: $20" << endl;
        break;
    }

   return 0;
}
