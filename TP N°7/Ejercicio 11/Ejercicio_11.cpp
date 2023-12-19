/*
Hacer una función que reciba tres números enteros llamados dia, mes y hemisferio y una cadena de caracteres llamada estacion.
Asignar el nombre de la estación del año de acuerdo al día y mes y dependiendo del hemisferio.
NOTA: Hemisferio será 0 → Sur y 1 → Norte
*/

#include <iostream>
#include <locale>
using namespace std;

void pedirDatos()
void definirEstacion(int dia, int mes, int hemisferio, string estacion[]. int tam);

int main() {
	setlocale(LC_ALL, "Spanish");
    const int tamanio = 4;
    string estacion[tamanio] = {"Verano","Otonio","Invierno","Primavera"};
    int dia, mes, hemisferio;

    cout << "Ingrese el dia: ";
    cin >> dia;
    cout << "Ingrese el mes: ";
    cin >> mes;
    cout << "Ingrese el hemisferio (0 → Sur y 1 → Norte): ";
    cin >> hemisferio;

    definirEstacion(dia, mes, hemisferio,estacion,tamanio);


   return 0;
}

void definirEstacion(int dia, int mes, int hemisferio, string estacion[]. int tam){

    switch(mes){
    case 1:
        if(hemisferio == 0){

        }
        break;
    case 2:
        if(hemisferio == 0){

        }
        break;
    case 3:
        if(hemisferio == 0){

        }
        break;
    case 4:
        if(hemisferio == 0){

        }
        break;
    case 5:
        if(hemisferio == 0){

        }
        break;
    case 6:
        if(hemisferio == 0){

        }
        break;
    case 7:
        if(hemisferio == 0){

        }
        break;
    case 8:
        if(hemisferio == 0){

        }
        break;
    case 9:
        if(hemisferio == 0){

        }
        break;
    case 10:
        if(hemisferio == 0){

        }
        break;
    case 11:
        if(hemisferio == 0){

        }
        break;
    case 12:
        if(hemisferio == 0){

        }
        break;
    default:
        break;
    }


}
