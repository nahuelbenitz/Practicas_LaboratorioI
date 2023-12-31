/*
Hacer un programa para un cajero autom�tico para ingresar un importe a retirar y convertir el mismo en la
cantidad de billetes de $ 1.000, $ 500, $ 200 y $ 100 a entregar.
Ejemplo 1: Si el importe a retirar es $ 2.500 se mostrar� por pantalla que se deber�n entregar
2 billetes de $ 1.000, 1 billete de $ 500 y 0 billetes de $ 200 y $ 100.
Ejemplo 2: Si el importe a retirar es $ 3.400 se mostrar� por pantalla que se deber�n entregar
3 billetes de $ 1.000, 2 billetes de $ 200 y 0 billetes de $ 500 y $ 100.
Ejemplo 3: Si el importe a retirar es $ 300 se mostrar� por pantalla que se deber�n entregar
1 billete de $ 200, 1 billete de $ 100, 0 billetes de $ 1.000 y 0 billetes de $ 500.
Recordatorio. Considerar en todos los casos que el importe a retirar es en todos los casos m�ltiplo
de $ 100 ya que el cajero no cuenta con billetes de $ 50, $ 20 o $ 10.

*/

#include <iostream>
using namespace std;

int main() {
    int importe, divisionMil, divisionQui, divisionDos, divisionCien;
    int op1, restoMil, restoQui, restoDos;

    cout << "Ingrese el importe a retirar: $";
    cin >> importe;

    op1 = importe / 1000;
    restoMil = importe % 1000;
    restoQui = restoMil % 500;
    restoDos = restoQui % 200;

    divisionMil = op1;
    divisionQui = restoMil / 500;
    divisionDos = restoQui / 200;
    divisionCien = restoDos / 100;

    cout << divisionMil << " billetes de mil, " << divisionQui << " billetes de quinientos, " << divisionDos << " billetes de doscientos y " << divisionCien << " billetes de cien";
   return 0;
}
