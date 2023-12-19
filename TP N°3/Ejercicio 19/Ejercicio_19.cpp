/*
Dada una lista de 10 números enteros. Calcular e informar el primer número par, el primer número primo
*/

#include <iostream>
using namespace std;

int main() {
    int numero, primerPar, primerPrimo;
    bool par = true, primo = true;

    for(int x=0; x<10; x++){
        int divisor = 0;
        cout << "Ingrese el numero: ";
        cin >> numero;

        if(numero%2==0){
            if(par){
                primerPar = numero;
                par = false;
            }
        }
        for(int y=1; y<=numero; y++){
            if(numero%y==0){
                divisor++;
            }
        }

        if(divisor==2){
            if(primo){
                primerPrimo = numero;
                primo = false;
            }
        }
    }

    cout << endl << "Primer numero par ingresado es el " << primerPar ;
    cout << endl << "Primer numero primo ingresado es el " << primerPrimo ;


   return 0;
}
