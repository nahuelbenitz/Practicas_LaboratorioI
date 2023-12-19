/*
Problema 3
La Clínica Tapia Health tiene la información de las últimas consultas realizadas en la sucursal de General Pacheco. Por cada consulta médica se registró:
 -ID de especialidad médica (Entero)
 -Número de consulta médica (Entero)
 -Duración de la consulta en minutos (Entero)
 -Día de la semana (1-Lunes a 7-Domingo)
 -Hora del día (entero de 0 a 23)

La información se encuentra agrupada por especialidad médica pero no está ordenada.
Para indicar el fin de la carga de datos de una especialidad médica se ingresa un número de consulta negativo.
Para indicar el fin de la carga de datos se ingresa un ID de especialidad médica igual a cero.

Se pide calcular e informar:
1 - Por cada especialidad médica, el promedio de duración de consultas expresado en minutos.
2 - Por cada especialidad médica, la consulta más extensa que se haya realizado un Lunes. Indicar la duración, hora del día y número de consulta médica.
3 - El porcentaje de consultas médicas realizadas según el horario:
    -Diurno (entre las 6 y las 13)
    -Tarde (entre las 14 y las 19)
    -Nocturno (entre las 20 y las 5)
4 - Calcular el total facturado por la clínica teniendo en cuenta que cada consulta se cobra $2000. Además se cobra un adicional de $500 si la consulta se extiende de los 30 minutos.
Los fines de semana estos costos sufren un 25% de recargo

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int especialidad, numConsulta, duracionConsulta, dia, hora, mayorLunes, horaLunes, numLunes;
    int cont, acu, totalPor;
    int diurno = 0, tarde = 0, nocturno = 0;
    const int costoConsulta = 2000;
    const int adicionalConsulta = 500;
    const float recargoFinde = 1.25f;
    float promedioConsulta, porDiurno, porTarde, porNoche, costeParcial, costeTotal = 0;

    cout << "Ingrese el id de la especialidad medica: ";
    cin >> especialidad;

    while(especialidad != 0){

        cout << "Ingrese el numero de consulta: ";
        cin >> numConsulta;

        cont = 0;
        acu = 0;
        mayorLunes = 0;

        while(numConsulta >= 0){
            cout << "Ingrese la duracion de la consulta (en minutos): ";
            cin >> duracionConsulta;
            cout << "Ingrese el dia de la consulta: ";
            cin >> dia;
            cout << "Ingrese la hora de la consulta: ";
            cin >> hora;

            cout << endl;

            cont++;
            acu += duracionConsulta;

            if(dia == 1){
                if(mayorLunes == 0){
                    mayorLunes = duracionConsulta;
                    horaLunes = hora;
                    numLunes = numConsulta;
                }
                else{
                    if(duracionConsulta > mayorLunes){
                        mayorLunes = duracionConsulta;
                        horaLunes = hora;
                        numLunes = numConsulta;
                    }
                }
            }

            if(hora > 5 && hora <= 13){
                diurno++;
            }
            else if(hora > 13 && hora <= 19){
                tarde++;
            }
            else{
                nocturno++;
            }

            costeParcial = costoConsulta;
            if(duracionConsulta > 30){
                costeParcial += adicionalConsulta;
            }

            if(dia == 6 || dia == 7){
                costeParcial *= recargoFinde;
            }

            costeTotal += costeParcial;

            cout << "Ingrese el numero de consulta: ";
            cin >> numConsulta;
        }

        cout << endl;
        //A
        promedioConsulta = acu / (float)cont;
        cout << "El promedio de consulta de la especialidad " << especialidad << " es de " <<fixed<<setprecision(2)<< promedioConsulta << endl;

        //B
        cout << "La consulta mas extensa de la especialidad " << especialidad << " realizada el lunes fue la numero " << numLunes << " a las " << horaLunes << " con una duracion de " << mayorLunes << " minutos." << endl;

        cout << "Ingrese el id de la especialidad medica: ";
        cin >> especialidad;
    }

        //C
        totalPor = diurno + tarde + nocturno;
        porDiurno = (diurno * 100) / totalPor;
        porTarde = (tarde * 100) / totalPor;
        porNoche = (nocturno * 100) / totalPor;

        cout << "El porcentaje de consultas en turno diurno fue de " << porDiurno << "%" << endl;
        cout << "El porcentaje de consultas en turno tarde fue de " << porTarde << "%" << endl;
        cout << "El porcentaje de consultas en turno nocturno fue de " << porNoche << "%" << endl;

        //D
        cout << "El total facturado por la clinica es de $" <<fixed<<setprecision(2)<< costeTotal << endl;

   return 0;
}
