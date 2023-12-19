/*
Hacer una función que reciba un carácter llamado valor_buscado y un vector de cadenas de caracteres y devuelva la cantidad de veces que el carácter buscado se encuentra en el vector.
*/

#include <iostream>
#include <locale>
using namespace std;

void cargarVector(char vec[], int tamano);
void mostrarVector(char vec[], int tamano);
int busquedaRepetida(char valor_buscado,char vec[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
	const int tam = 10;
	char vec[tam], valor;

	cargarVector(vec, tam);

	cout << "Ingrese el caracter a buscar: ";
    cin >> valor;

	cout << "El valor ingresado se repite un total de " << busquedaRepetida(valor, vec, tam) << " veces" << endl;
	mostrarVector(vec, tam);

   return 0;
}

void cargarVector(char vec[], int tamano){

    for(int i = 0; i<tamano;i++){
        cout << i+1 << ". Ingrese el caracter: ";
        cin >> vec[i];
        cout << " Le quedan " << tamano-(i+1) << " lugares" << endl;
    }
}

void mostrarVector(char vec[], int tamano){
    for(int i = 0; i<tamano;i++){
        cout << vec[i] << endl;
    }
}

int busquedaRepetida(char valor_buscado,char vec[], int tamano){
    int contador = 0;
    for(int i = 0; i<tamano; i++){
        if(vec[i] == valor_buscado){
            contador++;
        }
    }

    return contador;
}
