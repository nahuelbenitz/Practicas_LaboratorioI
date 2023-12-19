/*
Hacer un programa para ingresar por teclado una cantidad de minutos y mostrar por pantalla
a cuántos días, horas y minutos equivalen.
Ejemplo 1: si se ingresan 1520 minutos el programa mostrará por pantalla que equivalen a 1 día, 1 hora y 20 minutos.
Ejemplo 2: si se ingresan 480 minutos el programa mostrará por pantalla que equivalen a 0 día, 8 horas y 0 minutos.

*/

#include <iostream>
using namespace std;

int main() {
   int ingreso, minutos, horas, dias, ayudaDia, ayudaMin;

   cout << "Ingrese los minutos: ";
   cin >> ingreso;


   dias = ingreso / 1440;
   horas = (ingreso % 1440) / 60;
   minutos = ingreso % 60;

   cout << "Equivale a " << dias <<" dias, "<< horas <<" horas y "<< minutos<< " minutos";
   return 0;
}
