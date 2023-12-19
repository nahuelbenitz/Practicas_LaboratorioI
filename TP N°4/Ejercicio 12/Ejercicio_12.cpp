/*
Un número Simonírico es un número positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
Hacer un programa que muestre los primeros 1000 números Simoníricos. El usuario no debe ingresar nada
*/

#include <iostream>
using namespace std;

int main() {
    int i=1, x=1 ;

    while (i<=1000){
        if(x % 15 == 0 && x % 3 == 0 && x % 6 != 0){
            cout << x << endl;
            i++;
        }
        x++;
    }



   return 0;
}
