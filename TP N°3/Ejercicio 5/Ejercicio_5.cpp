/*
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y
luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
*/

#include <iostream>
using namespace std;

int main() {
    int lista, contPos = 0;
    float temp;

    cout << "Ingrese la cantidad de componentes de su lista: ";
    cin >> lista;

    for(int x=0; x<lista; x++){
        cout << "Ingrese un numero: ";
        cin >> temp;

        if(temp > 0){
            contPos++;
        }
    }

    cout << endl << "En total ingreso " << contPos << " numeros positivos";


   return 0;
}
