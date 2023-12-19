/*
Hacer un programa para que un comercio ingrese por teclado la recaudación en
pesos para cada una de las cuatro semanas del mes. El programa debe listar la recaudación
promedio por semana y el porcentaje de recaudación por semana.
Ejemplo. Si se ingresa $ 1600, $ 1200, $ 4800 y $ 400 se listara como recaudación
promedio $ 2000 y como porcentajes por semana: 20%, 15%, 60% y 5%.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   float semanaUno, semanaDos, semanaTres, semanaCuatro, promedio, total;
   float porcentajeUno, porcentajeDos, porcentajeTres, porcentajeCuatro;

   cout << "Ingrese la recaudacion de la primer semana: " << endl;
   cin >> semanaUno;
   cout << "Ingrese la recaudacion de la segunda semana: " << endl;
   cin >> semanaDos;
   cout << "Ingrese la recaudacion de la tercer semana: " << endl;
   cin >> semanaTres;
   cout << "Ingrese la recaudacion de la cuarta semana: " << endl;
   cin >> semanaCuatro;

   total = semanaUno + semanaDos + semanaTres + semanaCuatro;
   promedio = total / 4;

   porcentajeUno = (semanaUno * 100) / total;
   porcentajeDos = (semanaDos * 100) / total;
   porcentajeTres = (semanaTres * 100) / total;
   porcentajeCuatro = (semanaCuatro * 100) / total;

   cout << endl << "Recaudacion promedio: $" <<fixed<<setprecision(2)<<promedio;
   cout << endl << "El porcentaje por semana es";
   cout << endl << "Semana 1: " <<fixed<<setprecision(2)<<porcentajeUno<<"%";
   cout << endl << "Semana 2: " <<fixed<<setprecision(2)<<porcentajeDos<<"%";
   cout << endl << "Semana 3: " <<fixed<<setprecision(2)<<porcentajeTres<<"%";
   cout << endl << "Semana 4: " <<fixed<<setprecision(2)<<porcentajeCuatro<<"%";


   return 0;
}
