/*
El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una única jornada.
El mismo cuenta con 1200 butacas a un costo de $5000. Se pide un programa para poder ingresar todos los tickets vendidos para esta presentación.
Por cada venta se registró:
Número de venta
Cantidad de butacas

La venta de tickets se finaliza con un número de venta igual a cero o bien cuando no se dispongan de más butacas para vender.
Se pide calcular e informar:
A. El total recaudado.
B. La cantidad de butacas que quedaron sin vender

*/

#include <iostream>
using namespace std;

int main() {
    const int precio = 5000;
    int butacas = 1200, numVenta, cantidad, total = 0, sobrantes;




    do{
        cout << "Ingrese el numero de venta: ";
        cin >> numVenta;
        cout << "Ingrese la cantidad de butacas: ";
        cin >> cantidad;
        if(butacas - cantidad >= 0){
            total += cantidad * precio;
            butacas -= cantidad;
        }
        else{
            cout << "No hay butacas suficientes para cubrir lo solicitado. Quedan " << butacas << endl;
        }

    }while(numVenta != 0 && butacas > 0);

    cout << endl << endl;

    //A
    cout << "El total recaudado es de: $" << total << endl;

    //B
    if(butacas > 0){
        cout << "Sobraron " << butacas << " butacas" << endl;
    }
    else{
        cout << "No sobraron butacas" << endl;
    }

   return 0;
}
