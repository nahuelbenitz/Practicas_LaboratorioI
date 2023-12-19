/*
Hacer un programa para ingresar por teclado el importe de una venta y el porcentaje de descuento
aplicada a la misma y luego informar por pantalla el importa a pagar.
Ejemplo 1. Si el importe de la venta es $ 1.200 y el descuento es el 15% entonces el total a pagar ser� de $ 1.020.
Ejemplo 2. Si el importe de la venta es $ 800 y el descuento es el 0% entonces el total a pagar ser� de $ 800.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float precio, descuento, descuentoSolicitado, total;

   cout << "Ingrese el precio del articulo: $";
   cin >> precio;
   cout << endl << "Ingrese el porcentaje de descuento a aplicar: ";
   cin >> descuentoSolicitado;

   descuento = 100 - descuentoSolicitado;
   total = (precio * descuento) / 100;

   cout << "El precio inicial es de $" << precio << endl;
   cout << "aplicando el descuento del " << descuentoSolicitado <<"%"<<endl;
   cout << "quedaria el precio final en $" << total;

   return 0;
}
