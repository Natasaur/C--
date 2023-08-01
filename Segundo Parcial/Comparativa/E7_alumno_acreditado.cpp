#include<iostream>
#include<string>
#include<array>
using namespace std;
int main()
{
    string nombre;
    int calif[3];
    int n,i;
    float promedio;
    n=sizeof(calif)/sizeof(calif[0]);
    promedio=0;
    for ( i = 0; i < n; i++){
        cout << "Ingrese la calificación de la materia " << i+1 << ": \n";
        cin >> calif[i];
        promedio=promedio+calif[i];
    }
    promedio=promedio/n;
    if (promedio>=70){
        cout << "La calificación final es " << promedio << endl << "Alumno Acreditado\n";
    }else{
        cout << "La calificación final es " << promedio << endl << "Alumno No Acreditado\n";
    }
    return 0;
}
