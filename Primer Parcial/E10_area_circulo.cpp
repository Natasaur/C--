#include<iostream>
#include<cmath>
using namespace std;
/*Crear un algoritmo que lea el radio de un círculo y calcule el área.*/
float r,a;
int main()
{
    cout << "Ingrese el radio del círculo: ";
    cin >> r;
    a=M_PI*pow(r,2);
    cout << "El área del círculo es: " << a;
    
    return 0;
}