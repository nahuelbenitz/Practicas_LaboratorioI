/*
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y cargue cada uno de los elementos.
*/

#include <iostream>
#include <locale>
using namespace std;

void cargarVector(int v[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
    const int tam = 5;
    int vectorNumeros[tam];

    cargarVector(vectorNumeros,tam);

    for(int i = 0; i <tam; i++){
        cout << vectorNumeros[i] << endl;
    }

   return 0;
}

void cargarVector(int v[], int tamano){

    for(int i = 0; i < tamano; i++){
        cout << i+1 << ". Ingrese el valor: ";
        cin >> v[i];
    }
}
