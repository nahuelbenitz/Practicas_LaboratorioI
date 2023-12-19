/*
Un comercio vende tres marcas de alfajores distintas A, B y C. Hacer un programa para ingresar
por teclado la cantidad de alfajores vendidos de cada una de las tres marcas y luego se informe
el porcentaje de ventas para cada una de ellas.

Ejemplo. Si se ingresa 100, 25 y 75 como cantidades vendidas entonces el programa calculará
e informará A: 50%, B: 12,50% y C: 37,50%.
*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A, B, C, totalVendido;
    float porcentajeA, porcentajeB, porcentajeC;

    cout << "Ingrese las ventas de A: ";
    cin >> A;
    cout << "Ingrese las ventas de B: ";
    cin >> B;
    cout << "Ingrese las ventas de C: ";
    cin >> C;

    totalVendido = A + B + C;

    porcentajeA = (A * 100) / totalVendido;
    porcentajeB = (B * 100) / totalVendido;
    porcentajeC = (C * 100) / totalVendido;

    cout << endl << "Los porcentajes de ventas son:";
    cout << endl << "A: " <<fixed<<setprecision(2)<<porcentajeA << "%";
    cout << endl << "B: " <<fixed<<setprecision(2)<<porcentajeB << "%";
    cout << endl << "C: " <<fixed<<setprecision(2)<<porcentajeC << "%";

   return 0;
}
