/*
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y liste cada uno de los elementos.
*/

#include <iostream>
#include <locale>
using namespace std;

void listarVector(int v[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
    int const tam = 5;
    int vec[tam;]

    listarVector(vec, tam);

   return 0;
}

void listarVector(int v[], int tamano){
    for(int i = 0; i < tamano; i++){
        cout << v[i] << endl;
    }
}
