/*
Dada una lista de n�meros que finaliza cuando se ingresa un n�mero divisible por 7, informar cual es el ante�ltimo y �ltimo n�mero impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podr�a no haber n�meros impares en la lista.

*/

#include <iostream>
using namespace std;

int main() {
    int numero, ultimo = 0, anteUltimo = 0;
    bool banPrimero = true;

    cout << "Ingrese un numero ";
    cin >> numero;

    while (numero % 7 != 0){
        if(numero % 2 != 0){
            if(banPrimero){
                ultimo = numero;
                banPrimero = false;
            }
            else{
                anteUltimo = ultimo;
                ultimo = numero;
            }
        }

        cout << "Ingrese un numero ";
        cin >> numero;

    }

    if (banPrimero == false){
        cout << "El anteultimo y ultimo numero impar son: " << anteUltimo << " y " << ultimo << endl;
    }
    else{
        cout << "No se ingresaron numeros impares" << endl;
    }


   return 0;
}
