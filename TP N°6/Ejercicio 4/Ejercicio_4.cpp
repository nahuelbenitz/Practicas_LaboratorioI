/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta, el número de día y el importe de la venta.
El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
- Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
- El número de día que más se recaudó en total y cuál fue la recaudación máxima.

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
