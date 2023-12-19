/*
Hacer un programa para que el usuario ingrese un número positivo y que luego se muestren
por pantalla los números entre el 1 y el número ingresado por el usuario.
Ejemplo. Si el usuario ingresa 15, se mostrarán los números entre el 1 y el 15.
*/

#include <iostream>
using namespace std;

int main() {
    float numero;

    cout << "Ingrese un numero positivo: ";
    cin >> numero;

    for(int x=1; x<=numero; x++){
        cout << x << endl;
    }

   return 0;
}
