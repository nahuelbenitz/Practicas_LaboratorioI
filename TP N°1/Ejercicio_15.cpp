/*
La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima
en una zona y tiempo determinado. Dada la temperatura m�xima y la temperatura m�nima de San Fernando
de ayer, calcular y mostrar la amplitud t�rmica.
NOTA: El usuario ingresar� como temperatura m�xima un valor mayor o igual al de la temperatura m�nima.
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
