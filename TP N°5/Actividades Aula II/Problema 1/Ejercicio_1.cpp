/*
Problema 1
Dado un n�mero entero ingresado por teclado, calcular e informar por pantalla cada uno de los d�gitos del n�mero.
Por ejemplo, si el usuario ingresa 4562 el programa debe mostrar: 2 6 5 4

Variante desaf�o: Mostrar por pantalla los d�gitos pero de izquierda a derecha.
Ejemplo: 4 5 6 2

*/

#include <iostream>
using namespace std;

int main() {
    int numero, digito;
    cout << "Ingresar numero: ";
    cout << endl;
    cin >> numero;
    cout << endl;

    while (numero > 0){
        digito = numero % 10;
        cout << digito << endl;
        numero = numero / 10;
    }

    cout << endl;





   return 0;
}
