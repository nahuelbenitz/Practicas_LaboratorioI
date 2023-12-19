/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registr� el n�mero de venta, el n�mero de d�a y el importe de la venta.
El fin de la carga de datos se indica con n�mero de venta igual a 0.
Se pide calcular e informar:
- Por cada d�a, la recaudaci�n total (s�lo de aquellos d�as que tuvieron recaudaci�n).
- El n�mero de d�a que m�s se recaud� en total y cu�l fue la recaudaci�n m�xima.

*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 31;
    int i = 0, numVenta, numDia, maxDia;
    float dias[tam] = {};
    float recaudacion, recaudacionMax;
    bool primer = true;

    cout << "Ingrese numero de venta: ";
    cin >> numVenta;

    while(numVenta != 0 && i<tam){
        i++;
        cout << "Ingrese el dia: ";
        cin >> numDia;

        cout << "Ingrese el importe de la venta: $";
        cin >> dias[numDia-1];

        if(primer){
            recaudacionMax = dias[numDia-1];
            maxDia = numDia;
            primer = false;
        }

        cout << "Ingrese numero de venta: ";
        cin >> numVenta;
    }



    for(i=1;i<tam;i++){
        if(dias[i]>recaudacionMax){
            recaudacionMax = dias[i];
            maxDia = i+1;
        }
    }

    cout << "La recaudacion maxima fue de $" << recaudacionMax << " en el dia " << maxDia << endl;

    for(i=0;i<tam;i++){
        if(dias[i]> 0){
            cout << "El dia " << i+1 << " se recaudo $" << dias[i] << endl;
        }
    }

   return 0;
}
