/*
Hacer un programa que muestre los números primos entre el 1 y el 10000. El usuario no debe ingresar nada en este programa.
*/

#include <iostream>
using namespace std;

int main() {
    for(int x=1; x<=10000; x++){
        int contador = 0;

        for(int y=1; y<=x; y++){
            if(x%y==0){
                contador++;
            }
        }

        if(contador==2){
            cout << x << ", ";
        }
    }




   return 0;
}
