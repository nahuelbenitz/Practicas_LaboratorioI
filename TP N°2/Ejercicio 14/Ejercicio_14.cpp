/*
Un año es bisiesto si es múltiplo de 4, exceptuando a los años que son múltiplos de 100 pero que no
sean múltiplos de 400. Esto último significa que el año 1900 no es bisiesto, pero el año 2000 si lo es.
Hacer un programa para que ingresar un año y listar por pantalla si es bisiesto o no lo es.

Ejemplo 1. Si se ingresa el año 2020 se indicará como bisiesto.
Ejemplo 2. Si se ingresa el año 2019 se indicará como no bisiesto.
Ejemplo 3. Si se ingresa el año 1800 o 1900 se indicará como no bisiesto.
Ejemplo 4. Si se ingresa el año 1600 o 2000 se indicará como bisiesto.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
   int anio;

   cout << "Ingrese el anio a determinar: ";
   cin >> anio;

    if(anio % 400 == 0 || anio % 1000 == 0){
        cout << anio << " es anio bisiesto" << endl;
    }
    else{
        if(anio % 4 == 0 && anio % 100 != 0){
            cout << anio << " es anio bisiesto" << endl;
        }
        else{
            cout << anio << " no es bisiesto" << endl;
        }
    }


   return 0;
}
