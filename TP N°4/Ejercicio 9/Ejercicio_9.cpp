/*
Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
A. La nota promedio entre todos los estudiantes.  // Acumulador y contador
B. El legajo del estudiante con menor nota.  // busqueda del menor
C. La cantidad de exámenes rendidos para la materia 10.  // busqueda
D. El porcentaje de aprobados y no aprobados.  // porcentaje

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int legajo, codMateria, acuNotas = 0, conEstudiantes = 0, notaMenor, legajoMenor, materiaDiez = 0, aprobados = 0, desaprobados = 0;
    float nota, porApro, porDesapro, notaPromedio;
    bool primero = true;

    cout << "Ingrese el numero de legajo: ";
    cin >> legajo;

    while (legajo < 30000){
        cout << "Ingrese el codigo de materia: ";
        cin >> codMateria;

        cout << "Ingrese la nota: ";
        cin >> nota;

        //A
        acuNotas += nota;
        conEstudiantes++;

        //B
        if(primero){
            notaMenor = nota;
            legajoMenor = legajo;
            primero = false;
        }
        else{
            if(nota < notaMenor){
                notaMenor = nota;
                legajoMenor = legajo;
            }
        }

        //C
        if(codMateria == 10){
            materiaDiez++;
        }

        //D
        (nota >= 6) ? aprobados++ : desaprobados++;

        cout << "Ingrese el numero de legajo: ";
        cin >> legajo;
    }

    notaPromedio = acuNotas / conEstudiantes;

    cout << endl << endl;

    cout << "La nota promedio es de: " << notaPromedio;
    cout << endl;

    cout << "El legajo del estudiante con menor nota es el: " << legajoMenor;
    cout << endl;

    cout << "La cantidad de examenes rendidos para la materia 10 es de: " << materiaDiez;
    cout << endl;

    porApro = (aprobados * 100) / (float)conEstudiantes;
    porDesapro = (desaprobados * 100) / (float)conEstudiantes;

    cout << "El porcentaje de aprobados es de: %" <<fixed<<setprecision(2)<< porApro << endl;
    cout << "El porcentaje de desaprobados es de: %" <<fixed<<setprecision(2)<< porDesapro << endl;
    cout << endl;

   return 0;
}
