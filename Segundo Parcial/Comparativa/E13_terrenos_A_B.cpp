#include<iostream>
using namespace std;
int main() {
    float lado,costo_a,base,altura,costo_b,total_a,total_b;
    cout << "Ingrese el valor del Lado del Terreno A: \n";
    cin >> lado;
    cout << "Ingrese el costo del Terreno A: \n";
    cin >> costo_a;
    cout << "Ingrese el valor de la base del Terreno B: \n";
    cin << base;
    cout << "Ingrese el valor de la altura del Terreno B: \n";
    cin >> altura;
    cout << "Ingrese el costo del Terreno B: \n";
    cin >> costo_b;
    total_a=lado*lado*costo_a;
    total_b=base*altura*costo_b;
    if (total_a==total_b) {
        cout << "Los terrenos tienen el mismo precio.\n";
    }else if (total_a>total_b) {
        cout << "El costo del terreno A es mayor que el del B.\n";
    }else{
        cout << "El costo del terreno B es menor que el del A.\n";
    }
    return 0;
}