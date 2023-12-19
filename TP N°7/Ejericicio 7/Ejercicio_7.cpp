/*
Hacer una función que reciba un vector de números enteros y su tamaño y devuelva la posición en donde se encuentra el valor máximo del vector
*/

#include <iostream>
#include <locale>
using namespace std;

void cargarVector(int v[], int tamano);
int buscarMayor(int vec[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
    const int tam = 5;
    int vec[tam], pos;

    cargarVector(vec, tam);

    pos = buscarMayor(vec, tam);

    cout << "La posicion del maximo valor del vector es " << pos<< endl;
   return 0;
}

int buscarMayor(int vec[], int tamano){
    int pos, mayor;
    mayor = vec[0];
    pos = 1;

    for(int i=1; i<tamano;i++){
        if(vec[i] > mayor){
            mayor = vec[i];
            pos = i+1;
        }
    }
    return pos;
}

void cargarVector(int v[], int tamano){

    for(int i = 0; i < tamano; i++){
        cout << i+1 << ". Ingrese el valor: ";
        cin >> v[i];
    }
}
