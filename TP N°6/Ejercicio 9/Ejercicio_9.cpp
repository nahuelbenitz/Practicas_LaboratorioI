/*
Una fábrica tiene 80 empleados, y dispone de un primer lote de registros con la siguiente información:
- Nro. empleado (1 a 80)
- Valor de una hora de trabajo
- Valor de la hora extra de trabajo

A fin de mes se desean calcular los sueldos de los empleados que trabajaron y para ello se cuenta con un segundo lote de
registros con la siguiente información:
- Nro. empleado (1 a 80)
- Día
- Total de horas trabajadas en el día

- Este lote finaliza con un registro con nro. de empleado igual a cero, y sólo figuran los registros de los empleados que trabajaron durante el mes.
- Calcular e informar el sueldo de cada uno de los empleados, teniendo en cuenta que a partir de la 9na hora del día se comienza a pagar como hora extra.
*/

#include <iostream>
using namespace std;

int main() {
    int const NRO_EMPLEADO = 5;
    //Primer Lote
    int empleado;
    float valorHora, valorHoraExtra;

    int vValorxHora[NRO_EMPLEADO]= {};
    int vValorxHoraExtra[NRO_EMPLEADO] = {};

    //Segundo Lote
    int dia, hora, horaExtra,totalHoras;

    //Mostrar El sueldo
    float vSueldo[NRO_EMPLEADO] = {};


    for (int i=0;i<NRO_EMPLEADO; i++)
    {
        cout << "Ingrese #Empleado: ";
        cin >> empleado;
        cout << "Valor por Hora de trabajo: $ ";
        cin >> valorHora;
        cout << "Valor por Hora Extra de trabajo: $ ";
        cin >> valorHoraExtra;
        cout << endl;

        vValorxHora[empleado-1] = valorHora;
        vValorxHoraExtra[empleado-1] = valorHoraExtra;

    }

    cout << "Proceso del valor x hora de trabajo: ";
    cout << endl << endl;

    cout << "Ingrese Nro Empleado: #";
    cin >> empleado;

    while(empleado!=0){

        cout << "Nro de DIA: ";
        cin >> dia;
        cout << "Total de horas trabajadas en el dia: ";
        cin >> totalHoras;

        if(totalHoras<9){
            hora=totalHoras;
            horaExtra=0;
        }
        else{
            hora = 8;
            horaExtra = (totalHoras - hora);
        }

        vSueldo[empleado-1]+= (vValorxHora[empleado-1] * hora) + (vValorxHoraExtra[empleado-1] * horaExtra);


        cout << "Ingrese Nro Empleado: #";
        cin >> empleado;
    }

    cout << endl;

    for (int i=0;i<NRO_EMPLEADO; i++){
        if(vSueldo[i]>0){
            cout << "Sueldo del Empleado " << i+1 << " : $" << vSueldo[i] << endl;
        }
    }

    cout << endl;
   return 0;
}
