/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo

*/

#include <iostream>
using namespace std;

int main() {
    int legajo, legMayor;
    float sueldo, sueldoMax;

    for(int x=0; x<10; x++){
        cout << "Ingrese el legajo del empleado ";
        cin >> legajo;
        cout << "Ingrese el sueldo $";
        cin >> sueldo;

        if(x==0){
            sueldoMax = sueldo;
            legMayor = legajo;
        }
        else if(sueldo > sueldoMax){
            sueldoMax = sueldo;
            legMayor = legajo;
        }
    }

    cout << endl << "El empleado con mayor sueldo es el de legajo: " << legMayor;


   return 0;
}
