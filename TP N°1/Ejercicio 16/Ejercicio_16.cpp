/*
Hacer un programa para ingresar una letra en mayúsculas en una variable de tipo char y
mostrar cuántas letras de diferencia hay en el alfabeto con respecto a la 'A'.

Ejemplo:
Si el usuario ingresa la letra C. Hay dos letras de diferencia con respecto a la A.

Recomendación:
Tratar de no googlear la solución. Si no sale, dejarlo decantar y probar muchas variantes.

*/

#include <iostream>
using namespace std;

int main() {
    char letra1 = 'A', letra2;
    int posicion;

    cout << "Ingresar la letra (Mayuscula): ";
    cin >> letra2;

    posicion=letra2-letra1;

    cout << "La diferencia de posiciones es de: " << posicion << endl;

    return 0;
}
