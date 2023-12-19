/*
Hacer un programa donde se carguen 15 n�meros enteros y luego muestre por pantalla el m�nimo elemento del vector y
adem�s indique cu�ntas veces se repite el valor m�nimo dentro del vector.
*/

#include <iostream>
using namespace std;

int main() {
    const int tam = 10;
    int numeros[tam], minimo, repite = 0, i;

    for(i=0;i<tam;i++){
        cout << "Ingrese un numero en la posicion " << i+1 << ": ";
        cin >> numeros[i];
    }

    minimo = numeros[0];

    for(i=1;i<tam;i++){
        if(numeros[i] < minimo){
            minimo = numeros[i];
        }
    }

    for(i=0;i<tam;i++){
        if(minimo == numeros[i]){
            repite++;
        }
    }

    cout << "El minimo es " << minimo << " y se repite " << repite << " veces" << endl;

   return 0;
}
