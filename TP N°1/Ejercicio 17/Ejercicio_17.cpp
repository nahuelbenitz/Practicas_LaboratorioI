/*
El Laboratorio Gonzalez&Velez hace frascos de píldoras para aprender a programar.
Cada frasco contiene 75 píldoras y cada píldora contiene 45mg de Briancetamol, 2grs de Pintoxicilina y 7mg de Ácido Simonítico.
Nos solicitan un programa donde se ingrese la cantidad de frascos de un pedido y
muestre la cantidad de miligramos de Briancetamol, Pintoxicilina y de Ácido Simonítico que son necesarios para elaborarlos.

*/

#include <iostream>
using namespace std;

int main() {
   int frascos;
   float brian, pinto, acido;

   cout << "Ingrese la cantidad de frascos: ";
   cin >> frascos;

   brian = (frascos*75)*45;
   pinto = (frascos*75)*2;
   acido = (frascos*75)*7;

   cout <<endl<< "En los " << frascos << " frascos se va a necesitar: ";
   cout <<endl<< brian << "mg de Briancetamol";
   cout <<endl<< pinto << "mg de Pintoxicilina";
   cout <<endl<< acido << "mg de acido Simonitico"<<endl;


   return 0;
}
