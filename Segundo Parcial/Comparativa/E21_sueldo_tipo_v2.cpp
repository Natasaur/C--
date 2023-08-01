#include<iostream>
#include<string>
using namespace std;
int main(){
    string nombre;
    int tipo,horas;
    float sueldo,total;
    cout << "Ingrese el nombre del empleado: \n";
    cin >> nombre;
    cout << "Ingrese el tipo de empleado: \n";
    cin >> tipo;
    cout << "Ingrese el sueldo del empleado: \n";
    cin >> sueldo;
    switch (tipo)
    {
    case 1:
        total=sueldo*1.05;
        cout << "Sueldo con incremento del 5%: $" << total << endl;      
        break;
    case 2:
        total=sueldo*1.07;
        cout << "Sueldo con incremento del 7%: $" << total << endl;        
        break;
    case 3:
        total=sueldo*1.09;
        cout << "Sueldo con incremento del 9%: $" << total << endl;        
        break;
    case 4:
        total=sueldo*1.12;
        cout << "Sueldo con incremento del 12%: $" << total << endl;        
        break;
    case 5:
        total=sueldo*1.15;
        cout << "Sueldo con incremento del 15%: $" << total << endl;        
        break;
    default:
        break;
    }
    return 0;
}