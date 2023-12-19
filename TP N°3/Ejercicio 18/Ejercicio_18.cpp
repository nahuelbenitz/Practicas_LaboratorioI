/*
La cuenta corriente de la famosa cantante Lady Lara ha registrado 14 movimientos durante la semana pasada. Por cada movimiento se registró:
Número de movimiento
Día
Tipo ('E' - Extracción / 'D' - Depósito)
Importe

Existe un registro por movimiento. Se desea calcular e informar:
El saldo final de la cuenta.
El porcentaje de movimientos de extracción y el porcentaje de depósito.
El depósito de mayor importe indicando también día y número de movimiento.
La cantidad de movimientos del día 10.

*/

#include <iostream>
using namespace std;

int main() {
    const int
    int numMovimiento, movimientoMayor, diaDiez = 0, extraciones = 0, depositos = 0;
    int dia, diaMayor;
    bool inicio = true;
    char tipo;
    float importe, saldoFinal=0, depositoMayor, porcentajeExtraccion, porcentajeDeposito;

    for( int x=1; x<=14; x++){
        cout << "Bienvenido" << endl;
        cout << "Por favor, ingrese el dia (dd): ";
        cin >> dia;
        cout << "Ingrese el numero de  movimiento: ";
        cin >> numMovimiento;
        cout << "Usted cuenta con $" << saldoFinal << endl;
        cout << "Que operacion desea realizar?" << endl;
        cout << "E --> Extracion" << endl "D --> Deposito";
        cin >> tipo;
        cout << "Ingrese el importe: $";
        cin >> importe;

        switch(tipo){
        case 'E':
            if(saldoFinal!=0){
                saldoFinal -= importe;
                extraciones++;
            }
            else{
                Cout << "Fondos insuficientes";
            }
            break;
        case 'D':
            if(inicio){
                saldoFinal += importe;
                depositoMayor = importe;
                diaMayor = dia;
                movimientoMayor = numMovimiento;
                depositos++;
            }
            else if(importe > depositoMayor){
                saldoFinal += importe;
                depositoMayor = importe;
                diaMayor = dia;
                movimientoMayor = numMovimiento;
                depositos++;
            }
            else{
                saldoFinal += importe;
                depositos++;
            }
            break;

        }





    }




   return 0;
}
