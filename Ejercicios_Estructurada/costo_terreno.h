#include<iostream>
using namespace std;
void costo_terreno(){
    float largo,ancho,costo,area;
    cout << "Ingrese el largo del terreno en metros cuadrados: \n";
    cin >> largo;
    cout << "Ingrese el ancho del terreno en metros cuadrados: \n";
    cin >> ancho;
    cout << "Ingrese el costo por metro cuadrado del terreno: \n";
    cin >> costo;

    area=largo*ancho;
    costo=area*costo;

    cout << "El costo total del terreno es de $" << costo << "." << endl;
    //break;
    //return 0;
}