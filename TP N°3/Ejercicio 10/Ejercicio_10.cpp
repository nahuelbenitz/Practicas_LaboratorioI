/*
Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.
*/

#include <iostream>
using namespace std;

int main() {
    int numero, pri, seg;
    bool primero = true, segundo = true;

    for(int x=0; x<7; x++){
        cout << "Ingrese un numero: ";
        cin >> numero;

        if(numero%2!=0){
            if(primero){
                pri = numero;
                primero = false;
            }
            else if(segundo){
                seg = numero;
                segundo = false;
            }
        }
    }

    cout << endl << "El primer numero impar ingresado fue el " << pri;
    cout << endl << "El segundo numero impar ingresado fue el " << seg;



   return 0;
}
