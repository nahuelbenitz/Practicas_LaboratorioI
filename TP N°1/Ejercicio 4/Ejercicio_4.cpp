/*
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n y la cantidad
de pasajes ocupados y luego calcular e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes,
el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float asientosTotal, asientosOcupados, asientosLibres;
   float porcentajeOcupado, porcentajeLibre;

   cout << "Ingrese la cantidad total de asientos: ";
   cin >> asientosTotal;
   cout << endl << "Ingrese la cantidad de asientos ocupados: ";
   cin >> asientosOcupados;

   asientosLibres = asientosTotal - asientosOcupados;

   porcentajeOcupado = (asientosOcupados * 100) / asientosTotal;
   porcentajeLibre = (asientosLibres * 100) / asientosTotal;

   cout << endl << "El porcentaje de asientos ocupados es del " <<fixed<<setprecision(2)<<porcentajeOcupado<<"%";
   cout << endl << "El porcentaje de asientos libres es del " <<fixed<<setprecision(2)<<porcentajeLibre<<"%";

   return 0;
}
