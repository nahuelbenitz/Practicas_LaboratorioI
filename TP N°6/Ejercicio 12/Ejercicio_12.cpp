/*
Se ingresa un lote de 24 registros donde se informa para cada provincia el nro. de zona geográfica en donde la misma está ubicada.

Cada registro contiene:
- Nro. de Provincia(1 a 24)
- Nro. de Zona de la provincia(1 a 9)

A partir de este lote se pide que se informe las zonas que abarquen más de 3 provincias distintas y cuales son esas provincias.

*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");
	const int tamano = 10, registros = 24;
	int vZonas[tamano], vConZonas[tamano] = {}, numProvincia, vProvincia[registros] = {}, numZona;

	for(int i=0; i < tamano; i++){
        vZonas[i] = i+1;
	}

	for(int i =0; i < registros; i++){
        cout << "Ingrese el numero de provincia: ";
        cin >> numProvincia;
        cout << "Ingrese el numero de zona: ";
        cin >> numZona;

        vProvincia[numProvincia-1] = numZona;


        vConZonas[numZona-1]++;

	}

	for(int i = 0; i < 10; i++){
        if(vConZonas[i] > 3){
            cout << "En la zona " << vZonas[i] << " hay mas de 3 provincias: " << endl;
            for(int j = 0; j < registros; j++){
                if(vProvincia[j] == vZonas[i]){
                    cout << j+1 << endl;
                }
            }
        }
	}

   return 0;
}
