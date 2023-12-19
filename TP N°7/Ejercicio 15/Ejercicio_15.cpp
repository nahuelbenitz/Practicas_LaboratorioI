/*
Publicar en la cafetería del campus virtual la cantidad de números entre el 1 y 99999 que tienen más 3 que 4 pero que al menos tenga un 4 y ningún 5.
*/

#include <iostream>
#include <locale>
#include <cmath>
using namespace std;

void armarVector(int n, int vec[],int tam);
bool validarVector(int vec[], int tam);

int main(void)
{
    const int TAM=5;
    int vec[TAM], cont=0;
    for(int n=1; n<=99999; n++)
    {
        armarVector(n, vec, TAM);
        if(validarVector(vec, TAM))
        {
            cont++;
        }
    }

    cout << "Hay " << cont << " nros que cumplen la condicion" << endl;
    return 0;
}


void armarVector(int n, int vec[],int tam){
    int x=0;
    for(int i=tam-1; i>=0; i--){
        vec[x]=n/(int)pow(10,i);
        n=n%(int)pow(10,i);
        x++;
    }
}


bool validarVector(int vec[], int tam){
    int cont4=0, cont3=0;
    for(int i=0; i<tam; i++){
        if(vec[i]==5){
            return false;
        }
        if(vec[i]==4){
            cont4++;
        }
        if(vec[i]==3){
            cont3++;
        }
    }
    if(cont4==0){
        return false;
    }
    if(cont3>cont4){
        return true;
    }
    return false;
}
