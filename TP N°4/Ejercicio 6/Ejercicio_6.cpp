/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/

#include <iostream>
using namespace std;

int main() {
    int numero, iterador = 0, ternas = 0, negativos = 0;


    while(iterador != 5){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero % 2 == 0){
            iterador++;
        }
        if(numero < 0){
            negativos++;
        }
        if(negativos == 3 || numero < 0 && negativos % 3 == 0){
            ternas++;
        }

    }

    cout << endl;
    cout << "La cantidad de ternas es de " << ternas << endl;



   return 0;
}
