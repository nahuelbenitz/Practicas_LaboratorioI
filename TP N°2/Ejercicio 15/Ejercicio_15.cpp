/*
Hacer un programa para ingresar por teclado las cuatro notas de los ex�menes obtenidas por un alumno
y luego emitir uno solo de los cartel de acuerdo a las siguientes condiciones:
- �Promociona�, si obtuvo en los cuatro ex�menes nota 7 o m�s.
- �Rinde examen final�, si obtuvo nota 4 o m�s en por lo menos tres ex�menes.
- �Recupera Parciales�, si obtuvo nota 4 o m�s en por lo menos uno de los ex�menes.
- �Recursa la materia�, si no aprob� ning�n examen parcial

Anotaci�n:
    4 iguales > 7
    3 con >= 4
    1 con >= 4
    0

*/

#include <iostream>
using namespace std;

int main() {
    int nota1, nota2, nota3, nota4, contProm = 0, contFin = 0;
    string estado;

    cout << "Ingrese la primer nota: ";
    cin >> nota1;
    cout << "Ingrese la segunda nota: ";
    cin >> nota2;
    cout << "Ingrese la tercer nota: ";
    cin >> nota3;
    cout << "Ingrese la cuarta nota: ";
    cin >> nota4;

    cout << endl;

    if(nota1 >= 7 && nota2 >= 7 && nota3 >= 7 && nota4 >= 7){
        estado = "Promociona";
    }
    else if((nota1 >= 4 && nota2 >= 4 && nota3 >= 4) || (nota1 >= 4 && nota2 >= 4 && nota4 >= 4) || (nota1 >= 4 && nota3 >= 4 && nota4 >= 4) || (nota2 >= 4 && nota3 >= 4 && nota4 >= 4)){
        estado = "Rinde examen final";
    }
    else if(nota1 >= 4 || nota2 >= 4 || nota3 >= 4 || nota4 >= 4){
        estado = "Recupera parciales";
    }
    else{
        estado = "Recursa la materia";
    }



    cout << "El estado del alumno es: " << estado;

    cout << endl;

   return 0;
}
