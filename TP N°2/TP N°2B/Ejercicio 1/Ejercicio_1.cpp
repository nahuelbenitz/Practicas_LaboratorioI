/*
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:
Nombre     Tipo       Valor hora
C/C++      'C'        $ 2500
C#         '#'        $ 2100
Python     'P'        $ 1400
Go         'G'        $ 2000
Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.
Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de
horas (int), el tipo de lenguaje (char) y si es urgente o no (bool).

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    int horas;
    float precio;
    char lenguaje;
    bool urgente;

    cout << "Según ls siguiente información..." << endl;
    cout << "C/C++ --> C --> $2500" << endl;
    cout << "C# --> # --> $2100" << endl;
    cout << "Python --> P -> $1400" << endl;
    cout << "Go --> G --> $2000" << endl;
    cout << "Ingrese el tipo de lenguaje a utilizar en el proyecto: " << endl;
    cin >> lenguaje;

    cout << endl;

    cout << "Ahora ingrese la cantidad de horas que conlleva el proyecto: " << endl;
    cin >> horas;

    cout << endl;

    cout << "¿Su proyecto es urgente? Esto provocara un aumento del 120% sobre el precio final" << endl;
    cout << "Ingrese 1 para 'si' y 0 para 'no': " << endl;
    cin >> urgente;

    switch(lenguaje){
        case 'c':
        case 'C':
            switch(urgente){
                case 1:
                    precio = (horas * 2500)*2.2;
                break;
                case 0:
                    precio = horas * 2500;
                break;
            }
        break;
        case '#':
            switch(urgente){
                case 1:
                    precio = (horas * 2100)*2.2;
                break;
                case 0:
                    precio = horas * 2100;
                break;
            }
        break;
        case 'p':
        case 'P':
            switch(urgente){
                case 1:
                    precio = (horas * 1400)*2.2;
                break;
                case 0:
                    precio = horas * 1400;
                break;
            }
        break;
        case 'g':
        case 'G':
            switch(urgente){
                case 1:
                    precio = (horas * 2000)*2.2;
                break;
                case 0:
                    precio = horas * 2000;
                break;
            }
        break;
    }

    cout << endl;

    cout << "El costo total del proyecto es de $" << precio;

    cout << endl;
   return 0;
}
