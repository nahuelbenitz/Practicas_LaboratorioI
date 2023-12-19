/*
La asociación tigrense de panaderos desea registrar la información de los productos que comercializó el día de ayer. Por cada producto registró:
 -Código de producto
 -Tipo (1 - Factura, 2 - Torta, 3 - Panificado)
 -Cantidad de kilogramos vendidos
 -Total recaudado ($)
La información no se encuentra agrupada ni ordenada.
Para indicar el fin de la carga de datos se ingresa un código de producto negativo. Calcular e informar:
 1 - El código de producto que haya recaudado la menor cantidad de dinero.
 2 - El porcentaje de recaudación para cada tipo de producto.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int codigoProducto, tipoProducto, kgVendidos, menorProducto = 0;
    float recaudado, totalRecaudado1 = 0, totalRecaudado2 = 0, totalRecaudado3 = 0, menorRecaudado, sumaTotalRecaudado;
    float porcentajeTipo1, porcentajeTipo2, porcentajeTipo3;

    cout << "Ingrese el codigo del producto: ";
    cin >> codigoProducto;

    while(codigoProducto >= 0){
        cout << "Ingrese el tipo del producto (1 - Factura, 2 - Torta, 3 - Panificado): ";
        cin >> tipoProducto;
        cout << "Ingrese la cantidad de kilogramos vendidos: ";
        cin >> kgVendidos;
        cout << "Ingrese el total recaudado: ";
        cin >> recaudado;

        if(tipoProducto == 1){
            totalRecaudado1 += recaudado;
        }
        else if(tipoProducto == 2){
            totalRecaudado2 += recaudado;
            }
        else{
            totalRecaudado3 += recaudado;
            }


        if(menorProducto == 0){
            menorProducto = codigoProducto;
            menorRecaudado = recaudado;
        }
        else{
            if(recaudado < menorRecaudado){
                menorRecaudado = recaudado;
                menorProducto = codigoProducto;
            }
        }

        cout << "Ingrese el codigo del producto: ";
        cin >> codigoProducto;
    }

    cout << endl;

    sumaTotalRecaudado = (totalRecaudado1 + totalRecaudado2 + totalRecaudado3);

    porcentajeTipo1 = (totalRecaudado1 * 100) / sumaTotalRecaudado;
    porcentajeTipo2 = (totalRecaudado2 * 100) / sumaTotalRecaudado;
    porcentajeTipo3 = (totalRecaudado3 * 100) / sumaTotalRecaudado;

    //A

    cout << "El codigo de producto que recaudo la menor cantidad de dinero es el " << menorProducto << endl;

    //B

    cout << "El porcentaje de recaudacion para el tipo de producto 1 es de " <<fixed<<setprecision(2)<< porcentajeTipo1 << "%" << endl;
    cout << "El porcentaje de recaudacion para el tipo de producto 2 es de " <<fixed<<setprecision(2)<< porcentajeTipo2 << "%" << endl;
    cout << "El porcentaje de recaudacion para el tipo de producto 3 es de " <<fixed<<setprecision(2)<< porcentajeTipo3 << "%" << endl;


    cout << endl;
    return 0;
}
