/*
En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen. Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?

*/

#include <iostream>
using namespace std;

int main() {
    int categoria, antiguedad, categoria1 = 0, categoria2 = 0, categoria3 = 0, sueldo;
    int totalSueldo1 = 0, totalSueldo2 = 0, totalSueldo3 = 0, sueldoMaximo, cateMaximo;
    int maxSueldo1 = 0, maxSueldo2 = 0, maxSueldo3 = 0;
    float sueldoPromedio;
    const int sueldoCate1 = 38000, sueldoCate2 = 70000, sueldoCate3 = 105000, adicionalAntiguedad = 1200, empleados = 3;

    for(int i = 1; i <= empleados; i++){
        cout << "Ingrese la categoria del empleado (1, 2 o 3): ";
        cin >> categoria;
        cout << "Ingrese la antiguedad del empleado: ";
        cin >> antiguedad;

        if(categoria == 1){
            categoria1++;
            if(antiguedad > 0){
                sueldo = sueldoCate1 + (antiguedad * adicionalAntiguedad);
            }
            else{
                sueldo = sueldoCate1;
            }

            if(maxSueldo1 == 0){
                maxSueldo1 = sueldo;
            }
            else{
                if(sueldo > maxSueldo1){
                    maxSueldo1 = sueldo;
                }
            }

            totalSueldo1 += sueldo;
        }
        else if(categoria == 2){
            categoria2++;
            if(antiguedad > 0){
                sueldo = sueldoCate2 + (antiguedad * adicionalAntiguedad);
            }
            else{
                sueldo = sueldoCate2;
            }

            if(maxSueldo2 == 0){
                maxSueldo2 = sueldo;
            }
            else{
                if(sueldo > maxSueldo2){
                    maxSueldo2 = sueldo;
                }
            }

            totalSueldo2 += sueldo;

        }
        else{
            categoria3++;
            if(antiguedad > 0){
                sueldo = sueldoCate3 + (antiguedad * adicionalAntiguedad);
            }
            else{
                sueldo = sueldoCate3;
            }

            if(maxSueldo3 == 0){
                maxSueldo3 = sueldo;
            }
            else{
                if(sueldo > maxSueldo3){
                    maxSueldo3 = sueldo;
                }
            }

            totalSueldo3 += sueldo;

        }
    }

    //A

    cout << "En la categoria 1 hay " << categoria1 << " empleados." << endl;
    cout << "En la categoria 2 hay " << categoria2 << " empleados." << endl;
    cout << "En la categoria 3 hay " << categoria3 << " empleados." << endl;

    //B

    cout << "El sueldo total en la categoria 1 es de $" << totalSueldo1 << endl;
    cout << "El sueldo total en la categoria 2 es de $" << totalSueldo2 << endl;
    cout << "El sueldo total en la categoria 3 es de $" << totalSueldo3 << endl;

    //C

    sueldoPromedio = (float)(totalSueldo1 + totalSueldo2 + totalSueldo3) / (categoria1 + categoria2 + categoria3);

    //D

    if(maxSueldo1 > maxSueldo2){
        if(maxSueldo1 > maxSueldo3){
            cout << "El sueldo maximo fue $" << maxSueldo1 << " y pertenece a la categoria 1" << endl;
        }
        else{
            cout << "El sueldo maximo fue $" << maxSueldo3 << " y pertenece a la categoria 3" << endl;
        }
    }
    else{
        if(maxSueldo2 > maxSueldo3){
            cout << "El sueldo maximo fue $" << maxSueldo2 << " y pertenece a la categoria 2" << endl;
        }
        else{
            cout << "El sueldo maximo fue $" << maxSueldo3 << " y pertenece a la categoria 3" << endl;
        }
    }



   return 0;
}
