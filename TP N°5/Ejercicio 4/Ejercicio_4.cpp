/*
Una empresa transporta encomiendas entre Buenos Aires y Mendoza. Por cada encomienda se cobra un
importe de acuerdo al peso de la misma, con la siguiente escala:
  Kilos		   Importe
<= 10		      A
>10 y <=40	      B
>40		          C
Los camiones utilizados transportan un máximo de 200 kilos y son cargados a medida que llegan las encomiendas,
partiendo en el momento en que una encomienda no puede ser cargada en el camión por exceder los 200 kilos y se procede
a colocar en otro camión que así comienza a ser cargado. Los camiones a medida que se cargan se identifican con un número,
partiendo del número uno (1). Confeccionar un programa para que:
 a) Ingrese los valores de los tres importes A, B y C.
 b) Ingrese el peso de cada encomienda. Para finalizar la carga de datos se ingresa una encomienda "ficticia", con peso negativo.
 c) Por cada encomienda despachada se informe la siguiente información:
   - Nro. de Camión, Kg. Transportados e  Importe Cobrado
 d) Informar la cantidad total de camiones y el total facturado.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int PESO_MAXIMO_CAMION = 200;

    float pesoEncomienda, pesoCamion;//Para el PseudoCorte CONTROL
    float importeA, importeB, importeC, costoEncomienda;
    float contadorNumeroEncomienda;
    int contNumeroCamion = 0;
    float totalFacturdo = 0; //D)

    cout << "Ingrese el valor para el contenedor importe A '<= 10 kg' (por ej $1000): ";
    cin >> importeA;
    cout << "Ingrese el valor para el contenedor importe B '>10 y <= 40' (por ej $2000): ";
    cin >> importeB;
    cout << "Ingrese el valor para el contenedor importe C '>40' (por ej $3000): ";
    cin >> importeC;

    cout << "Ingrese el peso de la encomienda ('corta con -1'): ";
    cin >> pesoEncomienda;
    while (pesoEncomienda != -1 && (pesoEncomienda < 1 || pesoEncomienda > 200)){
        cout << "Ingrese un valor entre 1 y 200 por favor...";
        cin >> pesoEncomienda;
    }

    while(pesoEncomienda > 0 || pesoEncomienda != -1) {
  //PROCESAR-LISTAR DATOS DE TODO EL LOTE DE CAMIONES(CON SUS ENCOMIENDAS)
    pesoCamion = contadorNumeroEncomienda = costoEncomienda = 0;
    contNumeroCamion ++;

      while (pesoCamion + pesoEncomienda <= PESO_MAXIMO_CAMION && pesoEncomienda > 0 && pesoEncomienda != -1) {
      //PROCESAR-LISTAR CADA CAMION(CON SUS ENCOMIENDA)
        contadorNumeroEncomienda ++;
        pesoCamion += pesoEncomienda;

        //PROCESAR PUNTO C
        if(pesoEncomienda <= 10){
          costoEncomienda += importeA;
        }else if(pesoEncomienda > 10  && pesoEncomienda <= 40){
          costoEncomienda += importeB;
        }else{
          costoEncomienda += importeC;
        }

        cout << "Ingrese el peso de la encomienda: ";
        cin >> pesoEncomienda;
        while (pesoEncomienda < -1 || pesoEncomienda > 200 || pesoEncomienda == 0){
          cout << "Ingrese un valor entre 1 y 200 por favor...";
          cin >> pesoEncomienda;
        }
      }

      //PROCESAR D
      totalFacturdo += costoEncomienda;
      //LISTAR DATOS POR CAMION => PUNTO C
      cout << endl << "C) El numero de camion: " << contNumeroCamion << ". Tranporto " << fixed << setprecision(2) << pesoCamion << " KG." << " Se le cobro $" << fixed << setprecision(2) << costoEncomienda << "." << endl;
    }
    //LISTAR DATOS GLOBALES => PUNTO D
    cout << "D) Cantidad total de camiones: " << contNumeroCamion << ". Total Facturado $" << fixed << setprecision(2) << totalFacturdo << ".";
    return 0;
}
