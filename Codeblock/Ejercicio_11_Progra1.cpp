/*

*/

#include <iostream>
using namespace std;

int main() {
    int numero, maximo, minimo;

    cout << "Bienvenido" << endl;
    for(int x=0; x<10; x++){
        cout << "Ingrese numero ";
        cin >> numero;

        if(x==0){
            maximo = numero;
            minimo = numero;
        }
        if(numero > maximo){
            maximo = numero;
        }
        else if(numero < minimo){
            minimo = numero;
        }
    }

    cout << "El minimo es " << minimo << " y el maximo es " << maximo << endl;


   return 0;
}
