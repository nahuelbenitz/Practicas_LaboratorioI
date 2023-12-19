/*
Hacer un programa donde se carguen 15 números enteros y luego le solicite al usuario un número
e indique si el mismo pertenece a la lista cargada anteriormente.
*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 5;
    int numeros[tam], numero, i;
    bool igual = false;

    for(i=0;i<tam;i++){
        cout << "Ingrese un numero en la posicion " << i+1 << ": ";
        cin >> numeros[i];
    }

    cout << "Ingrese un numero a buscar en la lista cargada anteriorimente: ";
    cin >> numero;

    for(i=0;i<tam;i++){
        if(numero == numeros[i]){
            igual = true;
        }
    }

    if(igual){
        cout << "El numero ingresado pertenece a la lista" << endl;
    }
    else{
        cout << "El numero ingresado NO pertenece a la lista" << endl;
    }

   return 0;
}
