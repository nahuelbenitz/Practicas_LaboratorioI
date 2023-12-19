/*
Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles.
Se confecciona una serie de registros con el objeto de controlar la asistencia de sus empleados. Hay un primer registro por empleado que contiene:
 - Nro. de Legajo
 - Cantidad de horas teóricas a trabajar por semana
A continuación de este registro, siete registros más, uno por cada uno de los 7 días con los siguientes datos:
 - Hora de entrada (entero)
 - Hora de salida (entero)
El día que falta el empleado se ingresa cero en la hora de entrada y salida respectivamente.
Después de estos siete registros aparece nuevamente un registro de otro empleado seguido por los registros de los días
trabajados por este último y así hasta el último empleado.
Realizar un programa que ingresando los datos indicados determine e informe:
 a) Los nros. de legajo de los empleados que faltaron algún día en la semana.
 b) Para cada empleado indicar con una leyenda aclaratoria si trabajó de más, igual o de menos a las horas teóricas que tiene asignadas en la semana.

*/

#include <iostream>
using namespace std;

int main() {
    int numeroLegajo, horasTeoricas, horaEntrada, horaSalida, ausencias, horasTrabajadas;
    const int empleados = 5, dias = 7;

    for(int i = 1; i <= empleados; i++){
        ausencias = 0;
        horasTrabajadas = 0;

        cout << "Ingrese el numero de legajo: ";
        cin >> numeroLegajo;
        cout << "Ingrese la cantidad de horas teoricas a trabajar por semana: ";
        cin >> horasTeoricas;

        for(int j = 1; j <= dias; j++){
            cout << "Ingrese la hora de entrada del dia " << j << " (0 en caso de inasistencia): ";
            cin >> horaEntrada;
            cout << "Ingrese la hora de salida " << j << " (0 en caso de inasistencia): ";
            cin >> horaSalida;

            if((horaEntrada == 0) && (horaSalida == 0)){
                ausencias++;
            }

            if(horaEntrada > horaSalida){
                horasTrabajadas += (horaEntrada - horaSalida);
            }
            else{
                horasTrabajadas += (horaSalida - horaEntrada);
            }
        }

        if(ausencias != 0){
            cout << "El empleado con legajo " << numeroLegajo << " falto al menos un dia en la semana" << endl;
        }

        if(horasTrabajadas > horasTeoricas){
            cout << endl << "El empleado trabajo de mas" << endl;
        }
        else if(horasTrabajadas == horasTeoricas){
            cout << endl << "El empleado trabajo las horas justas" << endl;
        }
        else{
            cout << endl << "El empleado trabajo menos de lo esperado" << endl;
        }
    }



   return 0;
}
