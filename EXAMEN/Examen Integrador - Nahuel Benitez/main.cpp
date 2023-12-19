#include <iostream>
#include "funciones.h"

using namespace std;

int main()
{
    string infracciones[] = {"Exceso de velocidad","Conducir bajo la influencia de alcohol o drogas","Conducir mientras programa en C++",
                             "Hablar o enviar mensajes de texto mientras se conduce","No usar el cinturon de seguridad","No respetar los semaforos",
                             "Conducir sin licencia","Estacionarse en lugares prohibidos","Conducir conectado a Zoom","Conducir sin luces encendidas"};
    int p2_agentes[300] = {}, p1_horaXinfra[10][2] = {}, p4_tipoXcant[10][12] = {};
    float p3_distritos[111] = {};
    cout  << "----CARGUEMOS LOS DATOS----" << endl;
    cargarDatos(p2_agentes,p3_distritos,p1_horaXinfra,p4_tipoXcant);
    cout << endl << "----PUNTO 1----" << endl;
    Punto1(p1_horaXinfra,infracciones);
    cout << endl << "----PUNTO 2----" << endl;
    Punto2(p2_agentes);
    cout << endl << "----PUNTO 3----" << endl;
    Punto3(p3_distritos);
    cout << endl << "----PUNTO 4----" << endl;
    Punto4(p4_tipoXcant,infracciones);




    return 0;
}
