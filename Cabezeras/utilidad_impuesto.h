#include<iostream>
using namespace std;
/*Elaborar un algoritmo que lea el artículo y su costo; la utilidad es del 150% y el impuesto del 15%; Calcular e imprimir el artículo, utilidad, impuesto y precio de venta.*/

void utilidad_impuesto()
{
    string desc;
    float costo,utilidad,impuesto,costo_final;
    cout << "Ingrese el nombre del artículo: ";
    cin >> desc;
    cout << "Ingrese el costo del artículo: ";
    cin >> costo;
    utilidad=costo*1.5;
    impuesto=costo*0.15;
    costo_final=impuesto+utilidad;
    cout << "Artículo: " << desc << endl << "Utilidad: " << utilidad << endl << "Impuesto: " << impuesto << endl << "Precio de venta: " << costo_final << endl;
}