/*
Ídem al ejercicio 6 pero debe devolver la cantidad de veces que el valor buscado se encuentra dentro del vector
Ejercicio 6:
Hacer una función que reciba un número entero llamado valor_buscado, un vector de números enteros y su tamaño y
devuelva verdadero si el valor buscado se encuentra dentro del vector. Caso contrario debe devolver falso.
*/

#include <iostream>
#include <locale>
using namespace std;

void cargarVector(int v[], int tamano);
int busquedaVector(int valor_buscado, int vec[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
    const int tam = 5;
    int valor, vec[tam];
    bool encontro;

    cargarVector(vec, tam);

    cout << "Ingrese el valor a buscar: ";
    cin >> valor;

    cout << "El valor se encontro un total de " << busquedaVector(valor, vec, tam) << " veces";
   return 0;
}

int busquedaVector(int valor_buscado, int vec[], int tamano){
    int encontro = 0;
    for(int i = 0; i<tamano; i++){
        if(valor_buscado == vec[i]){
            encontro++;
        }
    }
    return encontro;
}

void cargarVector(int v[], int tamano){

    for(int i = 0; i < tamano; i++){
        cout << i+1 << ". Ingrese el valor: ";
        cin >> v[i];
    }
}
