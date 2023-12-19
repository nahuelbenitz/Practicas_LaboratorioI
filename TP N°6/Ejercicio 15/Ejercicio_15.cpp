/*
Hacer un programa que permita cargar un vector de 5 números enteros todos distintos entre sí y otro vector de 10 números todos distintos entre sí.
Luego de cargarlos, generar un tercer vector llamado v_interseccion que contenga los valores en común entre los dos vectores.
*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");
	const int uno = 5, dos = 10, tres = uno+dos;
	int vUno[uno], vDos[dos], v_interseccion[tres];

	for(int i = 0; i <uno; i++){
        cout << "Posición " << i+1 << " de vector 1, ingrese valor (no se pueden repetir): ";
        cin >> vUno[i];
    }

    for(int i = 0; i <dos; i++){
        cout << "Posición " << i+1 << " de vector 2, ingrese valor (no se pueden repetir): ";
        cin >> vDos[i];
    }

    for(int i = 0; i <dos; i++){
        for(int j = 0; j < uno; j++){
            if(vDos[i] == vUno[j]){
                v_interseccion[i] = vDos[i];
            }
        }
    }

    cout << "VECTOR TRES: " << endl;

    for(int i = 0; i<tres; i++){
        cout << v_interseccion[i] << endl;
    }

   return 0;
}
