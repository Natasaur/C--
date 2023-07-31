#include <iostream>
#include <cmath>

/*Elaborar un algoritmo que lea la cantidad de horas e imprima su equivalente en minutos, segundos y días.*/


using namespace std;

void transformar_horas()
{
    float seg,minutos,horas,dias;
    cout << "Ingrese las horas: \n";
    cin >> horas;

    minutos=horas*60;
    seg=minutos*60;
    dias=horas/24;


    cout << "\n";
    cout << "Días: " << dias << "\n" << "Horas: " << horas << "\n" << "Minutos: " << minutos << "\n" << "Segundos: " << seg << "\n";

    //return 0;
}