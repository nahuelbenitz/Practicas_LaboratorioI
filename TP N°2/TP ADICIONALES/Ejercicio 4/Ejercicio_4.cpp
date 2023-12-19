/*
Problema 4
Igual al Problema 3 pero el dueño del comercio decidió hacer una rifa de una notebook para
quienes hayan comprado en su negocio. Otorgará una serie de números para el sorteo a
partir de la siguientes condiciones:
Importe de la venta             Cantidad de números para el sorteo
Entre $100 y $1000                                  1
Mayor a $1000 y hasta $2500                         2
Mayor a $2500 y hasta $7500                         5
Mayor a $7500                                       10

La salida por pantalla debe mostrar el nombre del artículo, el subtotal de la compra y el total
de la compra (incluyendo el descuento o recargo aplicado si corresponde). También debe
mostrar la cantidad de números para el sorteo obtenidos.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     string articulo;
    float precio,subtotal, total, pago, vuelto;
    char abona;
    int unVendidas, rifas;

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

            if(total > 7500){
                rifas = 10;
            }
            else if(total > 2500){
                rifas = 5;
            }
            else if(total > 1000){
                rifas = 2;
            }
            else if(total >= 100 && total <= 1000){
                rifas = 1;
            }
            else {
                rifas = 0;
            }
            cout << "Perfecto!" << endl;
            cout << "Al abonar en efectivo se le realiza un 15% de descuento" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total << endl;
            cout << "Por su compra le damos " << rifas << " rifa/as para el sorteo" << endl;


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

            if(total > 7500){
                rifas = 10;
            }
            else if(total > 2500){
                rifas = 5;
            }
            else if(total > 1000){
                rifas = 2;
            }
            else if(total >= 100 && total <= 1000){
                rifas = 1;
            }
            else {
                rifas = 0;
            }

            cout << "Perfecto!" << endl;
            cout << "Al abonar con QR se le realiza un 5% de descuento" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total << endl;
            cout << "Por su compra le damos " << rifas << " rifa/as para el sorteo" << endl;
        break;
        case 'T':
            total = subtotal * 1.10;

            if(total > 7500){
                rifas = 10;
            }
            else if(total > 2500){
                rifas = 5;
            }
            else if(total > 1000){
                rifas = 2;
            }
            else if(total >= 100 && total <= 1000){
                rifas = 1;
            }
            else {
                rifas = 0;
            }

            cout << "Perfecto!" << endl;
            cout << "Al abonar con tarjeta se le realiza un 10% de recargo" << endl;
            cout << "----------FACTURACION----------" << endl;
            cout << "Articulo: " << articulo << endl << "El subtotal es de $" << subtotal << endl;
            cout << "Forma de pago: " << abona << endl;
            cout << "El total quedaria en $" <<fixed<<setprecision(2)<< total << endl;
            cout << "Por su compra le damos " << rifas << " rifa/as para el sorteo" << endl;
        break;
    }





   return 0;
}
