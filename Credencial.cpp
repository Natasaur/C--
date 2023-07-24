#include<iostream>
#include<string.h>
using namespace std;

string nombre,apellido_p,apellido_m,ciudad,curp;
char calle[20],colonia[20],deleg[20];
int num,cp,año_reg;

int main()
{
    //nombre="Natalia";
    cout << "Ingrese el nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese el apellido paterno: " << endl;
    cin >> apellido_p;
    cout << "Ingrese el apellido materno: " << endl;
    cin >> apellido_m;
    cout << "Ingrese la calle: ";
    getline(cin,calle);
    cout << "Ingrese el número del domicilio: " << endl;
    cin >> num;
    cout << "Ingrese la colonia: " << endl;
    cin.getline(colonia,20);
    cout << "Ingrese el código postal: " << endl;
    cin >> cp;
    cout << "Ingrese la delegación: " << endl;
    cin.getline(deleg,20);
    cout << "Ingrese la ciudad: " << endl;
    cin >> ciudad;
    cout << "Ingrese el CURP: " << endl;
    cin >> curp;
    cout << "Ingrese el año de registro: " << endl;
    cin >> año_reg;

    cout << endl << "NOMBRE \n" << apellido_p << "\n" << apellido_m << "\n" << nombre << "\n";
    cout << "DOMICILIO \n" << "C " << calle << " " << num << "\n";
    cout << "COL\n" << colonia << " " << cp << "\n";
    
    
    //cin.get();
    return 0;
}
