#include<iostream>
#include<string>
using namespace std;
int main() {
    int origen,op;
    string marca;
    float costo;
    cout << "Ingrese la marca del auto: \n";
    cin >> marca;
    cout << "Ingrese el costo del auto: \n";
    cin >> costo;
    cout << "Escoja el orígen del auto: " << endl << "1. Alemania" << endl << "2. Japón" << endl << "3. Italia" << endl << "4. USA" << endl;
    cin >> op;
    switch (op) {
    case 1:
        cout << "Impuesto 20%: $" << costo*0.2 << endl << "Precio de Venta: $" << costo*1.2 << endl;
        break;
    case 2:
        cout << "Impuesto 30%: $" << costo*0.3 << endl << "Precio de Venta: $" << costo*1.3 << endl;
        break;
    case 3:
        cout << "Impuesto 15%: $" << costo*0.15 << endl << "Precio de Venta: $" << costo*1.15 << endl;
        break;
    case 4:
        cout << "Impuesto 8%: $" << costo*0.08 << endl << "Precio de Venta: $" << costo*1.08 << endl;
        break;
    default:
        break;
    }
    return 0;
}