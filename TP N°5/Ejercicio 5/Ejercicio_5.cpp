/*
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos. Por cada comanda se registró:
 -Número de comanda
 -Número de mozo (entero)
 -Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
 -Importe (float)
La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas.
Para indicar el fin de la carga de datos se registra un Número de mozo negativo.
Calcular e informar:

 1 - Por cada mozo, la cantidad de platos de cada tipo.
 2 - El número de mozo que haya atendido el Plato Principal de menor importe.
 3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant

*/

#include <iostream>
using namespace std;

int main() {
    const int comandas = 10;
    int numeroComanda, numeroMozo, tipoPlato;
    int plato1, plato2, plato3, totalComandas = 0, menorImporte = 0, mozoMenor;
    float importe, importePromedio, importeSuma = 0;

    cout << "Ingrese el numero de mozo: ";
    cin >> numeroMozo;

    while(numeroMozo > 0){

        plato1 = plato2 = plato3 = 0;

        for(int i = 1; i <= comandas; i++){
            cout << "Ingrese numero de comanda: ";
            cin >> numeroComanda;
            cout << "Ingrese tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre): ";
            cin >> tipoPlato;
            cout << "Ingrese el importe: $";
            cin >> importe;

            if(tipoPlato == 1){
                plato1++;
            }
            else if(tipoPlato == 2){
                plato2++;
                if(menorImporte == 0){
                    menorImporte = importe;
                    mozoMenor = numeroMozo;
                }
                else{
                    if(importe < menorImporte){
                        menorImporte = importe;
                        mozoMenor = numeroMozo;
                    }
                }
            }
            else{
                plato3++;
            }

            totalComandas++;
            importeSuma += importe;
        }

        cout << "El mozo " << numeroMozo << " tuvo:" << endl;
        cout << "Plato 1: " << plato1 << endl;
        cout << "Plato 2: " << plato2 << endl;
        cout << "Plato 3: " << plato3 << endl << endl;

        cout << "Ingrese el numero de mozo: ";
        cin >> numeroMozo;
    }

    cout << "El numero de mozo con menor importe ante un plato principal es el " << mozoMenor << endl;

    importePromedio = importeSuma / totalComandas;

   return 0;
}
