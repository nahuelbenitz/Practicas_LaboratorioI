/*
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
*/

#include <iostream>
using namespace std;

int main() {
    int contPos = 0, contNeg = 0, contCero = 0;
    float numero;

    for(int x=0; x<10; x++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero > 0){
            contPos++;
        }
        else if(numero < 0){
            contNeg++;
        }
        else{
            contCero++;
        }
    }

    cout << endl << "Hay " << contPos << " numeros positivos";
    cout << endl << "Hay " << contNeg << " numeros negativos";
    cout << endl << "Hay " << contCero << " ceros";

   return 0;
}
