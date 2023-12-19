/*
Problema 3
La provincia de Buenos Aires posee los registros de los pagos de los impuestos del mes de Agosto de 2023
de algunas localidades de 3 municipios seleccionados al azar.
Por cada registro contiene:
 -Código de Municipio
 -Código de Localidad
 -Cantidad de facturas emitidas
 -Cantidad de facturas abonadas
La información se encuentra agrupada por código de municipio. Para indicar el fin de la carga de datos de un municipio, se ingresa
un código de localidad igual a cero.
Se pide:
 A- Por cada municipio, el código de localidad que tuvo mayor porcentaje de facturas abonadas con respecto a las facturas emitidas.
 B- La cantidad total de facturas que quedaron sin abonar.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigoMunicipio, codigoLocalidad, cantidadFacAbonadas, cantidadFacEmitidas, facturasSinAbonar = 0, mayorPorcentaje, mayorLocalidad;
    float porcentajeAbonado;

    for(int i = 1; i <= 3; i++){

        cout << "Ingrese el codigo del municipio: ";
        cin >> codigoMunicipio;
        cout << "Ingrese el codigo de la localidad: ";
        cin >> codigoLocalidad;

        cantidadFacEmitidas = 0;
        cantidadFacAbonadas = 0;
        porcentajeAbonado = 0;
        mayorPorcentaje = -1;

        while(codigoLocalidad != 0){
            cout << "Ingrese la cantidad de facturas emitidas: ";
            cin >> cantidadFacEmitidas;
            cout << "Ingrese la cantidad de facturas abonadas: ";
            cin >> cantidadFacAbonadas;

            facturasSinAbonar += (cantidadFacEmitidas - cantidadFacAbonadas);

            porcentajeAbonado = (cantidadFacAbonadas * 100) / (float)cantidadFacEmitidas;

            if(mayorPorcentaje == -1){
                mayorPorcentaje = porcentajeAbonado;
                mayorLocalidad = codigoLocalidad;
            }
            else{
                if(porcentajeAbonado > mayorPorcentaje){
                    mayorPorcentaje = porcentajeAbonado;
                    mayorLocalidad = codigoLocalidad;
                }
            }

            cout << "Ingrese el codigo de la localidad: ";
            cin >> codigoLocalidad;
        }

        cout << endl;
        cout << "En el municipio " << i << " la localidad que tuvo mayor porcentaje de facturas abonadas con respecto a las facturas emitidas fue la " << mayorLocalidad << " con un " <<fixed<<setprecision(2)<< mayorPorcentaje << "%" << endl;
        cout << endl;
    }

    cout << "El total de facturas que quedaron sin abonar fue de " << facturasSinAbonar << endl;


   return 0;
}
