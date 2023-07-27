#include<iostream>
using namespace std;
/*Elabora un algoritmo que lea la cantidad de dólares a comprar y el tipo de cambio en yenes, pesetas, libras esterlinas y marcos.*/

void convertidor_moneda(){
    float dolar,yenes,pesetas,libras,marcos;
    cout << "Ingrese la cantidad de dólares: \n";
    cin >> dolar;
    yenes=dolar*141.57;
    pesetas=dolar*150.42;
    libras=dolar*0.78;
    marcos=dolar*1.767;
    cout << "Dólar: " << dolar << endl << "Yen: " << yenes << endl << "Peseta: " << pesetas << endl << "Libra: " << libras << endl << "Marco: " << marcos << endl;
    //return 0;
}