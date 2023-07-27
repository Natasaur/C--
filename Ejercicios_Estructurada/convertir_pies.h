#include<iostream>
#include<cmath>
using namespace std;
/*Elabore un algoritmo que lea el número de pies y calcule e imprima si equivalente en yardas, plg, centimetros y metros.*/

void convertir_pies()
{
    float pies,yardas,plg,centi,metros;
    cout << "Ingrese el valor en pies: ";
    cin >> pies;
    plg=pies*12;
    yardas=pies/3;
    centi=plg*2.54;
    metros=centi*100;
    cout << "Pies: " << pies << endl << "Yardas: " << yardas << endl << "Pulgadas: " << plg << endl << "Centímetros: " << centi << endl << "Metros: " << metros << endl;
    //return 0;
}
