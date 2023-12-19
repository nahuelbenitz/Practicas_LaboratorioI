/*
Hacer una función que reciba un número entero llamado dia y una cadena de caracteres llamada nombre y le asigne el nombre correspondiente según el número de día. Siendo 0 → Domingo y 6 → Sábado
*/

#include <iostream>
#include <locale>
using namespace std;

void mostrarVector(char vec[], int tamano);
void asignacion(int dia,string nombre[], int tamano);

int main() {
	setlocale(LC_ALL, "Spanish");
    const int tamanio = 7;
    string nombre[tamanio] = {"Domingo","Lunes","Martes","Miercoles","Jueves","Viernes","Sabado"};
    int dia;

    cout << "Ingrese el dia: ";
    cin >> dia;

    asignacion(dia, nombre, tamanio);


   return 0;
}

void asignacion(int dia,string nombre[], int tamano){

    if(dia < tamano){
        cout << "Dia " << nombre[dia];
    }
    else{
        cout << "Valor incorrecto";
    }


}
