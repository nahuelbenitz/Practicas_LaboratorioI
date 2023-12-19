/*
Hacer un programa que contenga un men� con el siguiente formato:

Men� principal
-----------------------------
1 - Ingresar medida en metros
2 - Convertir a cent�metros
3 - Convertir a kil�metros
4 - Convertir a pulgadas
5 - Convertir a pies
-----------------------------
0 - Salir del programa

Ingrese opci�n:


Al ingresar a la opci�n 1, nos pedir� una medida (float) en metros que con las siguientes opciones del men� podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y s�lo finalizar� al ingresar a la opci�n 0

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    int opcion;
    float medida, centimetros, kilometros, pulgadas, pies;

    do{
        cout << "Menu principal"<< endl;
        cout << "-------------------------------"<<endl;
        cout << "1 - Ingresar medida en metros"<<endl;
        cout << "2 - Convertir a centimetros"<<endl;
        cout << "3 - Convertir a kilometros"<<endl;
        cout << "4 - Convertir a pulgadas"<<endl;
        cout << "5 - Convertir a pies"<<endl;
        cout << "-------------------------------"<<endl;
        cout << "0 - Salir del programa"<<endl;
        cout << endl;
        cout << "Ingrese opcion: ";
        cin >> opcion;

        switch(opcion){
        case 1:
            cout << "Ingrese medida en metros: ";
            cin >> medida;
            break;
        case 2:
            centimetros = medida * 100;
            cout <<fixed<<setprecision(1)<<centimetros << "cm" <<endl;
            break;
        case 3:
            kilometros = medida / 1000.0f;
            cout << kilometros << "km" << endl;
            break;
        case 4:
            pulgadas = medida / 0.0254;
            cout << pulgadas << " pulgadas" << endl;
            break;
        case 5:
            pies = (medida / 0.0254) / 12;
            cout << pies << " pies" << endl;
            break;
        default:
            cout << "Gracias por usarme!" << endl;
            break;

        }
    } while (opcion != 0);


    return 0;
}
