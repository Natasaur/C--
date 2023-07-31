#include<iostream>
//costo_terreno_17_25.h
using namespace std;
int main(){
    float ancho,largo,area,precio,costo_total;
    cout << "Ingrese el largo del terreno: \n";
    cin >> largo;
    cout << "Ingrese el ancho del terreno: \n";
    cin >> ancho;
    cout << "Ingrese el costo por metro cuadrado del terreno: \n";
    cin >> precio;
    area=largo*ancho;
    costo_total=precio*area;
    if (area>1000)
    {
        costo_total=costo_total*0.75;
        cout << "El costo total del terreno con 25% de descuento es: $" << costo_total << "." << endl;
    }else if (area>500)
    {
        costo_total=costo_total*0.83;
        cout << "El costo total del terreno con 17% de descuento es: $" << costo_total << "." << endl;
    }else{
        cout << "El costo total del terreno es de: $" << costo_total << "." << endl;
    }
    return 0;
}