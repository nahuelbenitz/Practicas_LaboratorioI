/*
Problema 2:
Igual al Problema 1 pero el programa debe poder informar también el vuelto que debe
otorgarse al cliente, si es que debe hacerlo.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string articulo;
    float precio, total, vuelto, abona;
    int unVendidas;

    cout << "Ingrese el nombre del articulo: ";
    cin >> articulo;
    cout << "Ingrese el precio del articulo: ";
    cin >> precio;
    cout << "Ingrese las unidades vendidas del articulo: ";
    cin >> unVendidas;
    cout << endl;

    total = precio * unVendidas;
    cout << "El total a pagar por los/as " << articulo << " es de $" <<fixed<<setprecision(2)<< total;
    cout << endl;

    cout << "Con cuanto desea abonar? ";
    cin >> abona;
    cout << endl;

    if(total <= abona){
        vuelto = abona - total;
        cout << "Su vuelto es de $" << vuelto;
    }
    else{
        cout << "No es suficiente para pagar todo.";
    }

   return 0;
}
