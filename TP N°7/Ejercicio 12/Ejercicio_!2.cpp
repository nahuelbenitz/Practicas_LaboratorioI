/*
Hacer una función que reciba un número entero y determine si el mismo es un número primo de Sophie Germain. Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain, si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo
*/

#include <iostream>
#include <locale>
using namespace std;

bool primoGermain(int num);

int main() {
	setlocale(LC_ALL, "Spanish");
	int numero, primo;

	cout << "Ingrese un numero: ";
	cin >> numero;

    primo = primoGermain(numero);

	if(primo){
        cout << "Es primo de Sophie Germain";
	}
	else{
        cout << "No es primo de Sophie Germain";
	}

   return 0;
}

bool primoGermain(int num){
    int contador=0, contGermain = 0, germain;
    for(int i=1; i <= num; i++){
        if(num%i==0){
            contador++;
        }
    }

    germain = (2*num)+1;

    for(int i=1; i <= germain; i++){
        if(germain%i==0){
            contGermain++;
        }
    }

    if(contador == 2 && contGermain == 2){
        return true;
    }
    else{
        return false;
    }
}
