/*
Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
El n�mero de d�a que se haya registrado la temperatura m�xima. -->Maximo
La amplitud t�rmica de todo el per�odo. -->Diferencia
La cantidad de d�as con neblina. -->Contador
Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� al menos un tercio de los d�as.
De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

#include <iostream>
using namespace std;

int main() {
    const int diaFijo = 15;
    int dia, contadorNiebla = 0, contadorLluvia = 0, contadorSeco = 0;
    float temperatura, milimetros, visibilidad;
    float tempMaxima, tempMinima, amplitud;


    for(int x=1; x <=diaFijo; x++){
        cout << "Buenos dias. Ingrese los datos del dia " << x;
        cout << endl << "Ingrese la temperatura: ";
        cin >> temperatura;
        if(x==1){
            tempMaxima = temperatura;
            tempMinima = temperatura;
        }
        else if(temperatura>tempMaxima){
            tempMaxima = temperatura;
            dia = x;
        }
        else if(temperatura<tempMinima){
            tempMinima = temperatura;
        }
        cout << endl << "Ingrese los milimetros de lluvia (en caso de no haber, ingrese 0): ";
        cin >> milimetros;
        if(milimetros > 0){
            contadorLluvia++;
        }
        else{
            contadorSeco++;
        }
        cout << endl << "Ingrese la visibilidad en km: ";
        cin >> visibilidad;
        cout << endl;
        if(visibilidad < 2){
            contadorNiebla++;
        }

    }

    //Punto 1

    cout << endl << "El dia que registro la temperatura maxima fue el " << dia << " con " << tempMaxima << " grados";

    //Punto 2

    if(tempMaxima>tempMinima){
        amplitud = tempMaxima - tempMinima;
    }
    else{
        amplitud = tempMinima - tempMaxima;
    }

    cout << endl << "La amplitud termica de todo el periodo fue de " << amplitud;

    //Punto 3

    cout << endl << "La cantidad de dias con neblina fue de " << contadorNiebla;

    //Punto 4

    if(contadorLluvia > contadorSeco){
        cout << endl << "Quincena lluviosa";
    }
    else if(contadorLluvia >= (diaFijo/3.0f)){
        cout << endl << "Quincena humeda";
    }
    else{
        cout << endl << "Quincena seca";
    }



    cout << endl;
   return 0;
}
