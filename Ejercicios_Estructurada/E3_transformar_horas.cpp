#include <iostream>
#include <cstdio.h>
#include <cmath.h>

/*Elaborar un algoritmo que lea la cantidad de horas e imprima su equivalente en minutos, segundos y días.*/

float seg,min,horas,dias;

main()
{
    cout << "Ingrese las horas: \n";
    cin >> horas;

    min=horas/60;
    seg=min/60;
    dias=horas/24;

    cout << endl << "Días: " << dias << "\n" << "Horas: " << horas << "\n" << "Minutos: " << min << "\n" << "Segundos" << seg << "\n";

    return 0;
}