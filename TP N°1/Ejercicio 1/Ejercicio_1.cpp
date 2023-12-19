/*
Hacer un programa para ingresar por teclado la cantidad de horas trabajadas
por un operario y el valor que se le paga por hora trabajada y listar por
pantalla el sueldo que le corresponda.
*/

#include <iostream>
using namespace std;

int main() {
   int horas;
   float pagoHora, pagoTotal;

   cout << "Ingrese sus horas trabajadas: ";
   cin >> horas;
   cout << "Ingrese su paga por hora: $";
   cin >> pagoHora;

   pagoTotal = horas * pagoHora;

   cout << endl << "Su paga total es de: $" << pagoTotal << endl;

   return 0;
}
