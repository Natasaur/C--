#include<iostream>
//costo_terreno_10.h
/*Elabore un algortimo para calcular el costo de un terreno.
Si mide mas de 400 m^2, se le hace un descuento de 10%.*/
using namespace std;
void costo_terreno_10(){
    float ancho,largo,area,precio,costo_total;
    cout << "Ingrese el largo del terreno: \n";
    cin >> largo;
    cout << "Ingrese el ancho del terreno: \n";
    cin >> ancho;
    cout << "Ingrese el costo por metro cuadrado del terreno: \n";
    cin >> precio;
    area=largo*ancho;
    costo_total=precio*area;
    if (area>400)
    {
        costo_total=costo_total*0.9;
        cout << "El costo total del terreno con 10% de descuento es: $" << costo_total << "." << endl;
    }else{
        cout << "El costo total del terreno es de: $" << costo_total << "." << endl;
    }
    //return 0;
}