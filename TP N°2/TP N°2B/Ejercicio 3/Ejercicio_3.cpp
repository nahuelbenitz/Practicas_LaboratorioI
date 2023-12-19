/*
Una granja dispone de 45 conejos blancos, 50 conejos negros, 40 marrones y 49 grises.
Se pide hacer un programa donde se ingresen tres ventas. Cada venta está compuesta por:
- Cantidad de conejos
- Tipo de conejo (1 - Blanco, 2 - Negro, 3- Marrón, 4 - Gris)

Calcular e informar:
1- Cantidad total de conejos vendidos en total.
2- Cuántos conejos quedaron de cada tipo.
3- Los tipos de conejos que no se vendieron.

NOTA: Ninguna venta superará los 10 conejos.

Anotación:

*/

#include <iostream>
using namespace std;

int main() {
    int coneBlanco = 45, coneNegro = 50, coneMarron = 40, coneGris = 49;
    int tipoCone, cantidad, acuCant = 0;
    int cantBlanco = 0, cantNegro = 0, cantMarron = 0, cantGris = 0;

//ingreso de datos
    cout << "Bienvenido." << endl;
    cout << "Venta #1" << endl;
    cout << "1 --> Blanco." << endl << "2 --> Negro." << endl << "3 --> Marrón." << endl << "4 --> Gris" << endl;
    cout << "Por favor, seleccione el tipo de conejo que desea comprar (1-2-3-4): ";
    cin >> tipoCone;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;
    acuCant += cantidad;

    switch(tipoCone){
    case 1:
        coneBlanco -= cantidad;
    break;
    case 2:
        coneNegro -= cantidad;
    break;
    case 3:
        coneMarron -= cantidad;
    break;
    case 4:
        coneGris -= cantidad;
    break;
    }

    cout << "Venta #2" << endl;
    cout << "1 --> Blanco." << endl << "2 --> Negro." << endl << "3 --> Marrón." << endl << "4 --> Gris" << endl;
    cout << "Por favor, seleccione el tipo de conejo que desea comprar (1-2-3-4): ";
    cin >> tipoCone;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;
    acuCant += cantidad;

    switch(tipoCone){
    case 1:
        coneBlanco -= cantidad;
    break;
    case 2:
        coneNegro -= cantidad;
    break;
    case 3:
        coneMarron -= cantidad;
    break;
    case 4:
        coneGris -= cantidad;
    break;
    }

    cout << "Venta #3" << endl;
    cout << "1 --> Blanco." << endl << "2 --> Negro." << endl << "3 --> Marrón." << endl << "4 --> Gris" << endl;
    cout << "Por favor, seleccione el tipo de conejo que desea comprar (1-2-3-4): ";
    cin >> tipoCone;
    cout << "Ingrese la cantidad que desea comprar: ";
    cin >> cantidad;
    acuCant += cantidad;

    switch(tipoCone){
    case 1:
        coneBlanco -= cantidad;
    break;
    case 2:
        coneNegro -= cantidad;
    break;
    case 3:
        coneMarron -= cantidad;
    break;
    case 4:
        coneGris -= cantidad;
    break;
    }

    cout << endl;


//Punto 1

    cout << "La cantidad de conejos vendidos en total es de " << acuCant << endl;
    cout << endl;

//Punto 2

    cout << "Luego de la ventas, quedaron: " << endl;
    cout << coneBlanco << " conejos blancos." << endl << coneNegro << " conejos negros." << endl << coneMarron << " conejos marrones." << endl << coneGris << " conejos grises." << endl;
    cout << endl;

//Punto 3

    if(coneBlanco == 45){
        cout << "Los conejos blancos (1) no se vendieron";
    }
    if(coneNegro == 50){
            cout << "Los conejos negros (2) no se vendieron";
        }
    if(coneMarron == 40){
            cout << "Los conejos marrones (3) no se vendieron";
        }
    if(coneGris == 49){
            cout << "Los conejos grises (4) no se vendieron";
        }
    cout << endl;

   return 0;
}
