/*
Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

#include <iostream>
using namespace std;

int main() {
    float sueldo, sueldoMax, sueldoPro, sueldoMin, acu = 0;
    int cont = 0;

    for(int x=0; x<10; x++){
        cout << "Ingrese el sueldo: $";
        cin >> sueldo;
        acu += sueldo;

        if(x==0){
            sueldoMax = sueldo;
            sueldoMin = sueldo;

            if(sueldo > 50000){
                cont++;
            }
        }
        else if(sueldo > sueldoMax){
            sueldoMax = sueldo;
            if(sueldo > 50000){
                cont++;
            }
        }
        else if(sueldo < sueldoMin){
            sueldoMin = sueldo;
            if(sueldo > 50000){
                cont++;
            }
        }
        else{
            if(sueldo > 50000){
                cont++;
            }
        }
    }

    sueldoPro = acu / 10.f;

    cout << endl << "El sueldo maximo es de $" << sueldoMax;
    cout << endl << "El sueldo minimo es de $" << sueldoMin;
    cout << endl << "El sueldo promedio es de $" << sueldoPro;
    cout << endl << "Los sueldos mayores a $50000 son " << cont;

   return 0;
}
