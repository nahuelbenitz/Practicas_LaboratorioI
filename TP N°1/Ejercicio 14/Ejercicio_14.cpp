/*
Hacer un programa para ingresar el importe de una compra y el descuento a aplicar. Listar por pantalla,
el importe sin descuento, el descuento aplicado y el importe total a cobrar.

Ejemplo:
Importe  : 4500 ↲
Descuento: 40 ↲
Importe    : $ 4500
Descuento  : $ 1800
Total      : $ 2700
*/

#include <iostream>
using namespace std;

int main() {
   float importe, descuento, desAplicar, desImpor, total;

   cout << "Ingrese el importe de la compra: $";
   cin >> importe;

   cout << "Ingrese el descuento a aplicar: ";
   cin >> descuento;

   desImpor = (importe * descuento) / 100;

   total = importe - desImpor;

   cout <<endl<<"Importe: $" << importe <<endl<< "Descuento: " << descuento << "%" <<endl<<"Importe: $" << importe <<endl<<"Descuento: $"<< desImpor <<endl<< "Total: $" << total;

   return 0;
}
