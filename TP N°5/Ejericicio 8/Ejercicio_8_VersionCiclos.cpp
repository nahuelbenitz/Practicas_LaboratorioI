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
    int dado, sumaDado = 0, puntaje;

    for(int i = 1; i <= 3; i++){
        cout << "Ingrese el dado numero " << i << ": ";
        cin >> dado;

        if(dado % 2 == 0){
            sumaDado += dado;
        }
        if(i == 3){
            puntaje = sumaDado * dado;
        }
    }

    cout << "El puntaje es: " << puntaje << endl << endl;



   return 0;
}
