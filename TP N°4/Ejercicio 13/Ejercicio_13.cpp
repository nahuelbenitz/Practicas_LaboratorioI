/*
Publicar en la cafetería del Campus Virtual cuál es el 520º número Simonírico
*/

#include <iostream>
using namespace std;

int main() {
    int i=1, x=0 ;

    while (i<=520){
        x++;
        if(x % 15 == 0 && x % 3 == 0 && x % 6 != 0){
            i++;
        }
    }
    cout << x << endl;

   return 0;
}
