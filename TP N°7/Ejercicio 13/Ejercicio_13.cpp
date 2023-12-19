/*
Hacer una función que reciba un número entero de hasta 5 cifras y un vector de enteros de cinco elementos y descomponga las cifras del número y las asigne a cada elemento del vector. Por ejemplo:
Si recibe 45323 como parámetro, el vector quedará {4, 5, 3, 2, 3}
Si recibe 390 como parámetro, el vector quedará {0, 0, 3, 9, 0}

*/

#include <iostream>
#include <locale>
using namespace std;

void descomponer(int numero, int vec[], int tam);
void mostrarVector(int vec[], int tam);

int main() {
	setlocale(LC_ALL, "Spanish");
	const int tamanio = 5;
	int num, vec[tamanio];

	cout << "Ingrese un numero (hasta 5 cifras): ";
	cin >> num;

	descomponer(num, vec, tamanio);
    mostrarVector(vec, tamanio);

   return 0;
}

void descomponer(int numero, int vec[], int tam){
    int digito;
    for(int i=tam-1; i>=0; i--){
        digito = numero % 10;
        numero /= 10;
        vec[i] = digito;
    }

}

void mostrarVector(int vec[], int tam){

    for(int i=0; i< tam; i++){
        cout << vec[i] << endl;
    }

}


