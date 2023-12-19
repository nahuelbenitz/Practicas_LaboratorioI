/*
Un popular juego de dados Napolitano llamado “Lara Lara” consiste en lanzar tres dados y sumar el puntaje teniendo en cuenta que
el mismo consiste en: la suma de los valores pares de los dados multiplicado por el tercer dado lanzado.
Por ejemplo:
 1 4 6 → Suma de pares (4 + 6) → 10 * 6 (último dado) → 60 pts
 1 3 5 → Suma de pares 0 → 0 * 5 (último dado) → 0 pts

Hacer un programa para ingresar por teclado los valores de los 3 dados e informar que puntaje le corresponde en el “Lara Lara”.

*/

#include <iostream>
using namespace std;

int main() {
    int dado1, dado2, dado3, ultimo, puntaje, sumaDado = 0;

    cout << "Ingrese el primer dado: ";
    cin >> dado1;
    cout << "Ingrese el segundo dado: ";
    cin >> dado2;
    cout << "Ingrese el tercer dado: ";
    cin >> dado3;

    if(dado1 % 2 == 0){
        sumaDado += dado1;
    }
    if(dado2 % 2 == 0){
        sumaDado += dado2;
    }
    if(dado3 % 2 == 0){
        sumaDado += dado3;
    }

    puntaje = sumaDado * dado3;

    cout << "Su puntaje es: " << puntaje << endl << endl;

   return 0;
}
