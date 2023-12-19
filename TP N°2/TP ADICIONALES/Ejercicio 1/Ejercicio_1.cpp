/*
Problema 1:
Un comercio solicita hacer un programa que permita ingresar el nombre de un artículo, su
precio unitario y la cantidad de unidades vendidas (entero) y calcular e informar el nombre
del artículo y el importe total de la venta que deberá pagar el cliente.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string articulo;
    float precio, aux;
    int unVendidas;

    cout << "Ingrese el nombre del articulo: ";
    cin >> articulo;
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese las unidades vendidas del articulo: ";
    cin >> unVendidas;
    cout << endl;

    aux = precio * unVendidas;

    cout << "El total a pagar por los/as " << articulo << " es de $" <<fixed<<setprecision(2)<< aux;


   return 0;
}
