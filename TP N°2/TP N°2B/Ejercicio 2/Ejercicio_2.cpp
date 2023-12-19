/*
Hacer un programa en el que se ingresen la edad y altura de 5 personas. Luego, calcular e informar:

1. La cantidad de personas mayores a 30 años que midan más de 1.8 metros.
2. El promedio de altura de las personas mayores a 30 años.
3. La cantidad de personas con altura entre 1.7 y 1.8 (ambos inclusive)
4. La cantidad de personas cuya edad sea de 20, 30 o 40 años.

Anotación:

*/

#include <iostream>
#include <iomanip>
using namespace std;

int main() {
   int edad1, edad2, edad3, edad4, edad5;
   int contEdadJusta = 0, contAltEdad = 0, contEdad = 0, acuMayor = 0, contMedio = 0;
   int altura1, altura2, altura3, altura4, altura5;
   float promedio;

//Ingreso de datos

   cout << "Ingrese la primera edad: ";
   cin >> edad1;
   cout << "Ingrese la primera altura (cm): ";
   cin >> altura1;
   cout << "Ingrese la segunda edad: ";
   cin >> edad2;
   cout << "Ingrese la segunda altura (cm): ";
   cin >> altura2;
   cout << "Ingrese la tercera edad: ";
   cin >> edad3;
   cout << "Ingrese la tercera altura (cm): ";
   cin >> altura3;
   cout << "Ingrese la cuarta edad: ";
   cin >> edad4;
   cout << "Ingrese la cuarta altura (cm): ";
   cin >> altura4;
   cout << "Ingrese la quinta edad: ";
   cin >> edad5;
   cout << "Ingrese la quinta altura (cm): ";
   cin >> altura5;

   cout << endl;

//Punto 1

   if(edad1 > 30 && altura1 > 180){
    contAltEdad++;
   }
   if(edad2 > 30 && altura2 > 180){
    contAltEdad++;
   }
   if(edad3 > 30 && altura3 > 180){
    contAltEdad++;
   }
   if(edad4 > 30 && altura4 > 180){
    contAltEdad++;
   }
   if(edad5 > 30 && altura5 > 180){
    contAltEdad++;
   }

   cout << "La cantidad de personas mayores a 30 anios y con altura superior a 1.8 es de: " << contAltEdad;
   cout << endl;

//Punto 2

   if(edad1 > 30){
    contEdad++;
    acuMayor += altura1;
   }
   if(edad2 > 30){
    contEdad++;
    acuMayor += altura2;
   }
   if(edad3 > 30){
    contEdad++;
    acuMayor += altura3;
   }
   if(edad4 > 30){
    contEdad++;
    acuMayor += altura4;
   }
   if(edad5 > 30){
    contEdad++;
    acuMayor += altura5;
   }

   promedio = acuMayor / float(contEdad);

   cout << "El promedio de altura de las personas mayores a 30 anios es de " <<fixed<<setprecision(2)<<promedio << " cm";
   cout << endl;

//Punto 3

   if(altura1 >= 170 && altura1 <= 180){
    contMedio++;
   }
   if(altura2 >= 170 && altura2 <= 180){
    contMedio++;
   }
   if(altura3 >= 170 && altura3 <= 180){
    contMedio++;
   }
   if(altura4 >= 170 && altura4 <= 180){
    contMedio++;
   }
   if(altura5 >= 170 && altura5 <= 180){
    contMedio++;
   }

   cout << "La cantidad de personas entre 1.7 y 1.8 inclusive es de " << contMedio;
   cout <<endl;

//Punto 4

   if(edad1 == 20 || edad1 == 30 || edad1 == 40){
    contEdadJusta++;
   }
   if(edad2 == 20 || edad2 == 30 || edad2 == 40){
    contEdadJusta++;
   }
   if(edad3 == 20 || edad3 == 30 || edad3 == 40){
    contEdadJusta++;
   }
   if(edad4 == 20 || edad4 == 30 || edad4 == 40){
    contEdadJusta++;
   }
   if(edad5 == 20 || edad5 == 30 || edad5 == 40){
    contEdadJusta++;
   }

   cout << "La cantidad de personas cuya edad sea de 20, 30 o 40 años es de " << contEdadJusta;
   cout << endl;

   return 0;
}
