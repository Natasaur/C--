#include <iostream>
/*Elaborar un algoritmo que calcule e imprima el costo de un terreno teniendo 
como datos la anchura y la longitud en metros, y el costo del metro cuadrado*/
using namespace std;

float largo,ancho,costo,area;

main(){
    cout << "Ingrese el largo del terreno en metros cuadrados: \n";
    cin >> largo;
    cout << "Ingrese el ancho del terreno en metros cuadrados: \n";
    cin >> ancho;
    cout << "Ingrese el costo por metro cuadrado del terreno: \n";
    cin >> costo;

    area=largo*ancho;
    costo=area*costo;

    cout << "El costo total del terreno es de $" << costo << ".";

    return 0;
}