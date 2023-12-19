/*
Hacer una funci�n que reciba un n�mero entero como par�metro y devuelva verdadero si el mismo es un n�mero primo. De lo contrario debe devolver falso.
*/

#include <iostream>
#include <locale>
using namespace std;

bool esPrimo(int num);

int main() {
    setlocale(LC_ALL, "Spanish");
    int numero, resultado;

    cout << "Ingrese un numero: ";
    cin >> numero;

    resultado = esPrimo(numero);

    if(resultado){
        cout << "El numero es primo";
    }
    else{
        cout << "El numero NO es primo";
    }

   return 0;
}

bool esPrimo(int num){
    int cont = 0;
    for(int i = 1; i<=num; i++){
        if(num%i == 0){
            cont++;
        }
    }

    if(cont == 2){
        return true;
    }
    else{
        return false;
    }

}
