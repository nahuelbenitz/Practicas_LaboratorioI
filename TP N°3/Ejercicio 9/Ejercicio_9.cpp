/*
Hacer un programa para ingresar una lista 10 números e informar el máximo de los negativos y el mínimo de los positivos.
Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
Máximo Negativo: -3.
Mínimo Positivo: 2.

*/

#include <iostream>
using namespace std;

int main() {
    float numero, negMax, posMin;
    bool primerPos = true, primerNeg = true;

    for(int x=0; x<10; x++){
        cout << "Ingrese el numero: ";
        cin >> numero;

        if(numero > 0){
            if(primerPos){
                posMin = numero;
                primerPos = false;
            }
            else if(numero < posMin){
                posMin = numero;
            }
        }
        else if(numero < 0){
            if(primerNeg){
                negMax = numero;
                primerNeg = false;
            }
            else if(numero > negMax){
                negMax = numero;
            }
        }
    }

    cout << endl << "El mayor de los negativos fue el " << negMax;
    cout << endl << "El menor de los positivos fue el " << posMin;





   return 0;
}
