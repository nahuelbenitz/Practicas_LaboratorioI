/*
La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima
en una zona y tiempo determinado. Dada la temperatura máxima y la temperatura mínima de San Fernando
de ayer, calcular y mostrar la amplitud térmica.
NOTA: El usuario ingresará como temperatura máxima un valor mayor o igual al de la temperatura mínima.
*/

#include <iostream>
using namespace std;

int main() {
   float tempMax, tempMin, diferencia;

   cout << "Ingrese la temperatura minima: ";
   cin >> tempMin;
   cout << "Ingrese la temperatura maxima: ";
   cin >> tempMax;

   diferencia = tempMax - tempMin;

   cout <<endl<< "La amplitud termica es de " << diferencia << " grados";

   return 0;
}
