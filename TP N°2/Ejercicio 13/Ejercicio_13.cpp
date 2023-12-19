/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día,
mes y año como 3 datos individuales. Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales.
Calcular luego la edad en años de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya
que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18
ya que le faltan 2 días para cumplir los 19 años.

*/

#include <iostream>
using namespace std;

int main() {
    int diaNac, mesNac, anioNac, diaHoy, mesHoy, anioHoy, dia, mes, anio;

    cout << "Ingrese su fecha de nacimiento" << endl;
    cout << "Ingrese el dia (dd): ";
    cin >> diaNac;
    cout << "Ingrese el mes (mm): ";
    cin >> mesNac;
    cout << "Ingrese el anio (aaaa): ";
    cin >> anioNac;

    cout << endl;

    cout << "A continuacion, ingrese la fecha de hoy" << endl;
    cout << "Ingrese el dia (dd): ";
    cin >> diaHoy;
    cout << "Ingrese el mes (mm): ";
    cin >> mesHoy;
    cout << "Ingrese el anio (aaaa): ";
    cin >> anioHoy;

    cout << endl;

    dia = diaHoy - diaNac;
    mes = mesHoy - mesNac;
    anio = anioHoy - anioNac;

    if(mes > 0){
        cout << "La persona tiene " << anio << " anios";
    }
    else{
        if(mes == 0){
            if(dia >= 0){
                cout << "La persona tiene " << anio << " anios";
            }
            else{
                cout << "La persona tiene " << (anio - 1) << " anios";
            }
        }
    }

   return 0;
}
