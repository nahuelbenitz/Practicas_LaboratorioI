/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el
máximo y el mínimo sea mayor a 10. Calcular e informar:
-La cantidad de números que componen la lista.
Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7

*/

#include <iostream>
using namespace std;

int main() {
    int numero, maximo, minimo, cantidad = 1;

    cout << "Ingrese un numero: ";
    cin >> numero;

    maximo = numero;
    minimo = numero;

    while(maximo - minimo < 10){
        cantidad++;

        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > maximo){
            maximo = numero;
        }
        else if (numero < minimo){
            minimo = numero;
        }
    }

    cout << "La cantidad es de: " << cantidad << endl;

   return 0;
}
