/*
Un negocio de perfumería efectúa descuentos según el importe de la venta.
  Si el importe es menor a $100 aplicar un descuento del 5%
  Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
  Si el importe es mayor a $500 aplicar un descuento del 15%
  Hacer un programa donde se ingresa el importe original sin descuento y que se
  informe por pantalla el importe con el descuento ya aplicado

  Anotación:

*/

#include <iostream>
using namespace std;

int main() {
   int importe;
   float total;

   cout << "Ingrese el importe total de la venta: ";
   cin >> importe;

   if(importe > 500){
    total = importe * 0.85;
   }
   else{
    if(importe > 100){
        total = importe * 0.90;
    }
    else{
        total = importe * 0.95;
    }
   }

   cout << "Con el descuento aplicado el total es $" << total << endl;

   return 0;
}
