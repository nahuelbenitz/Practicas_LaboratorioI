/*

*/

#include <iostream>
using namespace std;

int main() {
    int numero, tabla;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for(int i=1; i<=10; i++){
        tabla = numero * i;
        cout << numero << "x" <<i<< "=" <<tabla << endl;
    }


   return 0;
}
