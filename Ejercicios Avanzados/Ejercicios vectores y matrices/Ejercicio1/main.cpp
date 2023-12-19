/*
Cargar las notas del primer parcial de los 78 estudiantes de un curso. Luego de cargar todas las notas:
- Pedir un n�mero y mostrar por pantalla la nota registrada. Por ejemplo, se ingresa 10 para mostrar el d�cimo examen.
- Listar cu�ntos estudiantes obtuvieron una nota mayor al promedio.
*/
#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    int notasEstudiantes[78], nota;
    cargarNotas(notasEstudiantes);

    cout << "Ingrese la nota a buscar: ";
    cin >> nota;

    buscarNota(notasEstudiantes, nota);

    listarEstudiante(notasEstudiantes);

    return 0;
}
