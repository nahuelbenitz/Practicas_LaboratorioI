/*
Problema 3
Igual al Problema 2 pero el programa debe poder calcular e informar una serie de
descuentos y recargos que dependen de la Forma de Pago.

Forma de pago Acción
E → Efectivo | Aplica un 15% de descuento al total de la compra
Q → QR       | Aplica un 5% de descuento al total de la compra
T → Tarjeta  | Aplica un 10% de recargo al total de la compra

La salida por pantalla debe mostrar el nombre del artículo, el subtotal de la compra, la forma
de pago y el total de la compra (incluyendo el descuento o recargo aplicado si corresponde).
*/

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    string articulo;
    float precio,subtotal, total, pago, vuelto;
    char abona;
    int unVendidas;

    cout << "Ingrese el nombre del articulo: ";
    cin >> articulo;
    cout << "Ingrese el precio del articulo: $";
    cin >> precio;
    cout << "Ingrese las unidades vendidas del articulo: ";
    cin >> unVendidas;
    cout << endl;

    subtotal = precio * unVendidas;
    cout << "El subtotal a pagar por los/as " << articulo << " es de $" <<fixed<<setprecision(2)<< subtotal;
    cout << endl;

    cout << "De que manera desea abonar? " << endl;
    cout << "E -> Efectivo" << endl;
    cout << "Q -> QR" << endl;
    cout << "T -> Tarjeta" << endl;
    cin >> abona;
    cout << endl;

    switch(abona){
        case 'E':
            total = subtotal * 0.85;
            cout << "Perfecto!" << endl;
            cout << "Al abonar en efectivo se le realiza un 15% de descuento" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total << endl;

            cout << "Con cuanto desea pagar? $";
            cin >> pago;
            cout << endl;
            if(total <= pago){
                vuelto = pago - total;
                cout << "Su vuelto es de $" << vuelto;
            }
            else{
                cout << "No es suficiente para pagar todo.";
            }

        break;
        case 'Q':
            total = subtotal * 0.95;
            cout << "Perfecto!" << endl;
            cout << "Al abonar con QR se le realiza un 5% de descuento" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total;
        break;
        case 'T':
            total = subtotal * 1.10;
            cout << "Perfecto!" << endl;
            cout << "Al abonar con tarjeta se le realiza un 10% de recargo" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total;
        break;
    }






   return 0;
}
