#include <iostream>
using namespace std;

int main(){
    //Declaración de las variables
    float notas[5] = {4.5,7.9,9.0,8.5,0};
    //cout << "La nota es: " << notas[3] << endl;

    for (int i = 0; i < 5; i++)
    {   cout << "Todas las notas: " << notas[i] << endl;
    }
    

    return 0;
}