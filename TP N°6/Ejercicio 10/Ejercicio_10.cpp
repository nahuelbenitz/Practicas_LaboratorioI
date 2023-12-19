/*
LaraRaffle es el sorteo más importante de Argentina. Se dispone de 100 números entre el 0 y el 99 que los participantes pueden elegir para su compra.
Cada número tiene un costo de $500. Entrega un premio al ganador de $30000 y al segundo ganador de $5000.
Nos solicitan un programa que permita cargar los números comprados por los participantes.
El programa no debe permitir comprar más de una vez un número ya vendido. El fin de carga de información se indica con número igual a -1.

Luego, sortear dos números al azar entre 0 y 99 e informar:
A- Total recaudado en concepto de compra de números.
B- Ganancia neta o pérdida del Sr Lara.
C- El porcentaje de números no vendidos con respecto al total.
D- Número ganador del primer premio y número ganador del segundo premio (no pueden ser el mismo número). E indicar si esos números se vendieron o no.

*/

#include <iostream>
#include <locale>
#include <ctime>  // para trabajar con time
#include <cstdlib>  // para trabajar con rand
using namespace std;

int main() {
    setlocale(LC_ALL, "Spanish");
    const int cantidad = 100, costeRifa = 500, ganador = 30000, segundo = 5000;
    int vNumeros[cantidad] = {}, numero, acumuladoTotal = 0, vendidos = 0, sorteo1, sorteo2, dineroNeto;
    float porcentajeNV;
    bool gano1 = false, gano2 = false;

    srand(time(0)); // semilla o seed

    sorteo1 = -1;
    sorteo2 = -1;

    cout << "Ingrese el número elegido: ";
    cin >> numero;

    while(numero != -1){

        if(vNumeros[numero-1] == 0){
            vNumeros[numero-1] = 1; // Pongo uno indicando que la rifa ya esta vendida
            acumuladoTotal += costeRifa;
            vendidos++; // utilizo la cantidad vendida para saber el total NO vendido
        }
        else{
            cout << "El número ya fue comprado, por favor, elija otro";
        }


        cout << "Ingrese el número elegido: ";
        cin >> numero;
    }

    //Sorteo los numeros

    sorteo1 = rand() % 100;
    sorteo2 = rand() % 100;

    while(sorteo1 == sorteo2){
        sorteo2 = rand() % 100; //Para que no se repitan los numeros
    }

    // D

    dineroNeto = acumuladoTotal;

    for(int i = 0; i < cantidad; i++){
        if(vNumeros[sorteo1] == 1){
            gano1 = true;
        }
        if(vNumeros[sorteo2] == 1){
            gano2 = true;
        }
    }

    if(gano1){
        dineroNeto -= ganador;
        cout << "El número ganador del primer premio es el " << sorteo1 << ". El mismo fue vendido" << endl;
    }
    else{
        cout << "El número ganador del primer premio es el " << sorteo1 << ". El mismo NO fue vendido" << endl;
    }
    if(gano2){
        dineroNeto -= segundo;
        cout << "El número ganador del primer premio es el " << sorteo2 << ". El mismo fue vendido" << endl;
    }
    else{
        cout << "El número ganador del primer premio es el " << sorteo2 << ". El mismo NO fue vendido" << endl;
    }

    // A

    cout << "El total recaudado con las rifas es de $" << acumuladoTotal << endl;

    //B

    if(dineroNeto > 0){
        cout << "La ganancia neta del sorteo es de $" << dineroNeto << endl;
    }
    else if(dineroNeto < 0){
        cout << "La perdida neta del sorteo es de $" << dineroNeto << endl;
    }
    else{
        cout << "El sorteo no tuvo perdidas, pero tampoco ganancias" << endl;
    }

    //C

    if(vendidos != 99){
        porcentajeNV = ((100 - vendidos) * 100) / (float)100;
    }
    else{
        porcentajeNV = 0;
    }

    cout << "El porcentaje de números no vendidos es de " << porcentajeNV << "%" << endl;

   return 0;
}
