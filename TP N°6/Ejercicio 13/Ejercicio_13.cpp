/*
Una empresa comercializa 15 artículos y por cada venta realizada genera un registro con los siguientes datos:
Nro. de Artículo (1 a 15)
Cantidad Vendida
Nro. de Sucursal (1 a 4)
A este lote se le precede otro lote ordenado por número de artículo con la siguiente información:
Nro de artículo
Stock

Puede haber varios registros de venta para el mismo artículo y el fin de la carga de datos se indica con número de artículo igual a cero.

Se pide determinar e informar:
A- Por cada artículo, la cantidad de unidades vendidas.
B- Por cada sucursal, los números de artículos que vendieron más de 10 unidades.
C- Por cada artículo, la sucursal donde más se comercializó.
D- Los artículos cuyo stock quedaron en cero.
E- Los artículos cuyo stock disminuyó más de la mitad.
*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");
	const int articulos = 15, sucursales = 4;
	int vArticulo[articulos], vStock[articulos], vAcuVentaArticulo[articulos] = {}, vStockAux[articulos], mSucursales[sucursales][articulos] = {}, mMayorComer[articulos][sucursales] = {};
	int numArticulo, cantidadVendida, numSucursal, stock, auxiliar, mayorComercio, mayorSucursal;

	for(int i = 0; i < articulos; i++){
        cout << "Numero de articulo: ";
        cin >> vArticulo[i];
        cout << "Stock: ";
        cin >> vStock[i];
	}

    for(int i =0; i<articulos;i++){
        vStockAux[i] = vStock[i];
    }

	cout << "Ingrese Nro de articulo (1 a 15): ";
    cin >> numArticulo;

	while(numArticulo != 0){
        cout << "Ingrese cantidad vendida: ";
        cin >> cantidadVendida;
        cout << "Ingrese Nro de sucursal (1 a 4): ";
        cin >> numSucursal;

        //A
        vAcuVentaArticulo[numArticulo-1] += cantidadVendida;

        //B

        mSucursales[numSucursal-1][numArticulo-1] += cantidadVendida;
        mMayorComer[numArticulo-1][sucursales-1] += cantidadVendida;


        if(vStock[numArticulo-1] - cantidadVendida >= 0){
            vStock[numArticulo-1] -= cantidadVendida;
        }
        else{
            cout << "No hay stock suficiente." << endl;
        }

        cout << "Ingrese Nro de articulo (1 a 15): ";
        cin >> numArticulo;
	}


	//A
    cout << endl << "--- PUNTO A ----" << endl;
	for(int i=0;i<articulos;i++){
        cout << "El articulo " << i+1 << " vendio " << vAcuVentaArticulo[i] << " unidades" << endl;
	}

	//B
    cout << endl << "--- PUNTO B ----" << endl;
	for(int i=0; i<sucursales;i++){
            cout << "En la sucursal " << i+1 << " los articulos con mas de 10 unidades vendidas son: " << endl;
        for(int j=0; j<articulos;j++){
            if(mSucursales[i][j]>10){
                cout << vArticulo[j] << endl;
            }
        }
	}

	//C
	cout << endl << "--- PUNTO C ----" << endl;

    for(int i =0; i< articulos; i++){
            mayorComercio=0;
        for(int j =0; j < sucursales; j++){
            if(mMayorComer[i][j] > mayorComercio){
                mayorComercio = mMayorComer[i][j];
                mayorSucursal = j+1;
            }
        }
        cout << "El articulo " << i+1 << " se comercializo mas en la sucursal " << mayorSucursal << endl;
    }



	//D
    cout << endl << "--- PUNTO D ----" << endl;
	auxiliar=0;
	for(int i =0;i<articulos;i++){
        if(vStock[i] == 0){
            cout << "El stock articulo " << vArticulo[i] << " quedo en 0" << endl;
            auxiliar++;
        }
	}

    if(auxiliar==0){
        cout << "Ningun articulo se quedo sin stock" << endl;
    }

    //E
    cout << endl << "--- PUNTO E ----" << endl;
    auxiliar=0;
	for(int i =0;i<articulos;i++){
        if(vStock[i] < (vStockAux[i]/2) && (vStock[i] != 0)){
            cout << "El stock del articulo " << vArticulo[i] << " quedo con menos de la mitad" << endl;
            auxiliar++;
        }
	}

    if(auxiliar==0){
        cout << "Ningun articulo se quedo con menos de la mitad del stock" << endl;
    }


   return 0;
}
