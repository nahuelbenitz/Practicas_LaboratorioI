/*
Hacer un programa que permita cargar un vector de 5 números enteros y otro vector de 10 números.
Luego de cargarlos, generar un tercer vector llamado v_union que contenga los datos del primer vector y a continuación los datos del segundo vector
*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");
    const int primer = 5, segundo = 10, tercero = primer+segundo;
    int vUno[primer], vDos[segundo], v_union[tercero];

    for(int i = 0; i <primer; i++){
        cout << "Posición " << i+1 << " de vector 1, ingrese valor: ";
        cin >> vUno[i];
    }

    for(int i = 0; i <segundo; i++){
        cout << "Posición " << i+1 << " de vector 2, ingrese valor: ";
        cin >> vDos[i];
    }

    for(int i = 0; i <primer; i++){
        v_union[i] = vUno[i];
    }

    for(int i = 0; i <segundo; i++){
        v_union[i+5] = vDos[i];
    }

    cout << "VECTOR TRES: " << endl;

    for(int i = 0; i<tercero; i++){
        cout << v_union[i] << endl;
    }




   return 0;
}
