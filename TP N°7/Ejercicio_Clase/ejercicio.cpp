/*
Hacer un programa que pida 2 numeros y muestre cual es el mayor
*/

#include <iostream>
using namespace std;


int esMayor (int num1, int num2);

int main() {
    int numero1, numero2, resultado;


    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    resultado = esMayor(numero1, numero2);

    cout << "El mayor es: " << resultado << endl;

   return 0;
}

int esMayor (int num1, int num2){

    if(num1 > num2){
        return num1;
    }
    else{
        return num2;
    }


}
