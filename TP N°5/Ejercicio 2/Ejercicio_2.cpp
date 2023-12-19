/*
Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
 - Sucursal 1: Virreyes
 - Sucursal 2: San Fernando
 - Sucursal 3: Tigre
En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
 - Nro. de Cliente (100 al 1200)
 - Nro. de Sucursal (1, 2 ó 3)
 - Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
 - Monto en pesos de la transacción
El último registro se indica con nro. de cliente igual a cero. Se pide a partir de estos datos, determinar e informar:
 a) Cantidad de depósitos por más de $1000.-.
 b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
 c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
 d) Total de pesos depositados en cada una de las sucursales.
 e) Cantidad de depósitos en la sucursal de Tigre.
 f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos)

*/

#include <iostream>
using namespace std;

int main() {
    int numeroCliente, numeroSucursal, depositosMil = 0, extraccionMayor = 0, sucursalMayorDeposito, clienteMayorMonto, sucursalExtracionMayor;
    int totalDepositos1 = 0, totalDepositos2 = 0, totalDepositos3 = 0, sucursalTigre = 0, sucursalVirreyes = 0, sucursalSanFernando = 0, totalTransacciones;
    int depositoTigre = 0, depositoSanFernando = 0, depositoVirreyes = 0;
    float monto, porcentajeTransacciones1, porcentajeTransacciones2, porcentajeTransacciones3;
    char codigoTransaccion;

    cout << "Ingrese su numero de cliente: ";
    cin >> numeroCliente;

    while(numeroCliente != 0){
        cout << "Ingrese su numero de sucursal: ";
        cin >> numeroSucursal;
        cout << "Ingrese codigo de transaccion ('D' para depositos, 'E' para extracciones): ";
        cin >> codigoTransaccion;
        cout << "Ingrese el monto de la transaccion: $";
        cin >> monto;


        //C- transacciones
        if(numeroSucursal == 1){
            sucursalVirreyes++;
        }
        else if(numeroSucursal == 2){
            sucursalSanFernando++;
        }
        else{
            sucursalTigre++;
        }



        switch(codigoTransaccion){
        case 'D':
            //A
            if(monto > 1000){
                depositosMil++;
            }
            //D - depositos
            if(numeroSucursal == 1){
                depositoVirreyes++;
                totalDepositos1 += monto;
            }
            else if (numeroSucursal == 2){
                depositoSanFernando++;
                totalDepositos2 += monto;
            }
            else{
                depositoTigre++;
                totalDepositos3 += monto;
            }




            break;
        case 'E':
            //B
            if(extraccionMayor == 0){
                extraccionMayor = monto;
                clienteMayorMonto = numeroCliente;
                sucursalExtracionMayor = numeroSucursal;
            }
            else{
                if(monto > extraccionMayor){
                    extraccionMayor = monto;
                    clienteMayorMonto = numeroCliente;
                    sucursalExtracionMayor = numeroSucursal;
                }
            }



            break;
        }

        cout << "Ingrese su numero de cliente: ";
        cin >> numeroCliente;
    }


    //A

    cout << "Cantidad de depositos por mas de $1000: " << depositosMil << endl;

    //B

    cout << "El cliente que realizo la mayor extraccion fue el " << clienteMayorMonto << " en la sucursal " << sucursalExtracionMayor << endl;

    //C
    totalTransacciones += (sucursalVirreyes + sucursalTigre + sucursalSanFernando);
    porcentajeTransacciones1 = (sucursalVirreyes * 100) / totalTransacciones;
    porcentajeTransacciones2 = (sucursalSanFernando * 100) / totalTransacciones;
    porcentajeTransacciones3 = (sucursalTigre * 100) / totalTransacciones;

    cout << "El porcentaje de la sucursal 1 con respecto al total de transacciones es de " << porcentajeTransacciones1 << "%" << endl;
    cout << "El porcentaje de la sucursal 2 con respecto al total de transacciones es de " << porcentajeTransacciones2 << "%" << endl;
    cout << "El porcentaje de la sucursal 3 con respecto al total de transacciones es de " << porcentajeTransacciones3 << "%" << endl;

    //D

    cout << "El total depositado en la sucursal 1 es de $" << totalDepositos1 << endl;
    cout << "El total depositado en la sucursal 2 es de $" << totalDepositos2 << endl;
    cout << "El total depositado en la sucursal 3 es de $" << totalDepositos3 << endl;

    //E

    cout << "La cantidad de depositos en la sucursal de tigre es de " << depositoTigre << endl;

    //F
    if(depositoVirreyes > depositoSanFernando){
        if(depositoVirreyes > depositoTigre){
            sucursalMayorDeposito = 1;
        }
        else{
            sucursalMayorDeposito = 3;
        }
    }
    else{
        if(depositoSanFernando > depositoTigre){
            sucursalMayorDeposito = 2;
        }
        else{
            sucursalMayorDeposito = 3;
        }
    }

    cout << "El nro. de sucursal que recibio mas cantidad de depositos es el " << sucursalMayorDeposito << endl;

   return 0;
}
