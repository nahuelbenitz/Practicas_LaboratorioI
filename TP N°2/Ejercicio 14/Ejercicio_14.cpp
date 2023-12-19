/*
Un a�o es bisiesto si es m�ltiplo de 4, exceptuando a los a�os que son m�ltiplos de 100 pero que no
sean m�ltiplos de 400. Esto �ltimo significa que el a�o 1900 no es bisiesto, pero el a�o 2000 si lo es.
Hacer un programa para que ingresar un a�o y listar por pantalla si es bisiesto o no lo es.

Ejemplo 1. Si se ingresa el a�o 2020 se indicar� como bisiesto.
Ejemplo 2. Si se ingresa el a�o 2019 se indicar� como no bisiesto.
Ejemplo 3. Si se ingresa el a�o 1800 o 1900 se indicar� como no bisiesto.
Ejemplo 4. Si se ingresa el a�o 1600 o 2000 se indicar� como bisiesto.

Anotaci�n:

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
