#include <iostream>
using namespace std;

int main(){
    //Declaración de las variables
    int numero1;
    int suma = 0;

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero1;

    while (numero1 >= 0)
    {
        for (int i = 0; i < 1; i++)
    {   
        suma += numero1;
    }

    cout << "Ingrese un numero entero: " << endl;
    cin >> numero1;
    
    }

    cout << "La suma de los numeros positivos es: " << suma << endl;

   return 0; 
}