#include <iostream>
#include<string>
using namespace std;
int main() {
    string nombre;
    int cant;
    float precio,costo;
    cout << "Ingrese la descripción del producto: \n";
    cin >> nombre;
    cout << "Ingrese la cantidad de productos: \n";
    cin >> cant;
    cout << "Ingrese el precio unitario del producto: \n";
    cin >> precio;
    if (cant>50)
    {
        costo=cant*precio*0.85;
        cout << "El costo total con el 15% de descuento es de: $" << costo << endl;
    }else{
        costo=cant*precio;
        cout << "El costo total es de: $" << costo << endl;
    }  
    return 0;
}