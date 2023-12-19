/*
Una empresa que fabrica pantalones nos encargó procesar los resultados de una encuesta realizada a la población con
referencia a la predilección de color de los pantalones ('N'=negro, 'A'=azul, 'B'=blanco, 'O'=otros).
Para ello se ingresan los siguiente datos para cada encuesta efectuada:
- Edad del encuestado (entre 1 y 99)
- Color elegido (N, A, B, O)
- Sexo(M o F)

El fin del lote se indica con un registro con edad igual a cero. Se pide determinar e informar:
A- El color más votado entre las mujeres.
B- Por cada década de edad, la cantidad de encuestados.

Década     Edad
0       	     1-9
1     	     10-19
2    	     20-29
…     	      …
9    	     90-99
*/

#include <iostream>
#include <locale>
using namespace std;

int main() {
	setlocale(LC_ALL, "Spanish");

	const int tamano = 10;
	int vEdades[tamano] = {}, edad, cN=0, cA=0, cB=0, cO=0;
	char sexo, color, mayorColor;

	cout << "Ingrese edad (1 a 99): ";
	cin >> edad;

	while(edad != 0){
        cout << "Ingrese color elegido (N, A, B, O): ";
        cin >> color;
        cout << "Ingrese su sexo (M o F): ";
        cin >> sexo;

        if(sexo == 'F'){
            switch(color){
            case 'N':
                cN++;
                break;
            case 'A':
                cA++;
                break;
            case 'B':
                cB++;
                break;
            case 'O':
                cO++;
                break;
            }
        }

        if(edad > 90){
            vEdades[9]++;
        }
        else if(edad > 80){
            vEdades[8]++;
        }
        else if(edad > 70){
            vEdades[7]++;
        }
        else if(edad > 60){
            vEdades[6]++;
        }
        else if(edad > 50){
            vEdades[5]++;
        }
        else if(edad > 40){
            vEdades[4]++;
        }
        else if(edad > 30){
            vEdades[3]++;
        }
        else if(edad > 20){
            vEdades[2]++;
        }
        else if(edad > 10){
            vEdades[1]++;
        }
        else if(edad > 1){
            vEdades[0]++;
        }



        cout << "Ingrese edad (1 a 99): ";
        cin >> edad;
	}

	//A
	if(cN > cA){
        if(cN > cB){
            if(cN > cO){
                mayorColor = 'N';
            }
            else{
                mayorColor = 'O';
            }
        }
        else{
            if(cB > cO){
                mayorColor = 'B';
            }
            else{
                mayorColor = 'O';
            }
        }
	}
	else{
        if(cA > cB){
            if(cA > cO){
                mayorColor = 'A';
            }
            else{
                mayorColor = 'O';
            }
        }
        else{
            if(cB > cO){
                mayorColor = 'B';
            }
            else{
                mayorColor = 'O';
            }
        }
	}

	cout << "El color más elegido por las mujeres es el " << mayorColor << endl;

	//B

	for(int i = 0; i < 10; i++){
        cout << "En la decada " << i << " hay " << vEdades[i] << " encuestados" << endl;
	}



   return 0;
}
