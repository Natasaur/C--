#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
void INE()
{
    string nombre,apellido_p,apellido_m,curp;
    int num,cp,año_reg;
    char calle[100];
    char colonia[100];
    char deleg[100];
    char ciudad[100];
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido paterno: ";
    cin >> apellido_p;
    cout << "Ingrese el apellido materno: ";
    cin >> apellido_m;
    cin.get();
    cout << "Ingrese la calle: ";
    cin.getline(calle,100);
    cout << "Ingrese el número del domicilio: ";
    cin >> num;
    cin.get();
    cout << "Ingrese la colonia: ";
    cin.getline(colonia,100);
    cout << "Ingrese el código postal: ";
    cin >> cp;
    cin.get();
    cout << "Ingrese la delegación: ";
    cin.getline(deleg,100);
    cin.get();
    cout << "Ingrese la ciudad: ";
    cin.getline(ciudad,100);
    cout << "Ingrese el CURP: ";
    cin >> curp;
    cout << "Ingrese el año de registro: ";
    cin >> año_reg;
    cout << "\nNOMBRE \n" << apellido_p << "\n" << apellido_m << "\n" << nombre << "\n";
    cout << "DOMICILIO \n" << "C " << calle << " " << num << "\n";
    cout << "DELEGACION " << deleg << endl;
    cout << "COL " << colonia << " CP " << cp << "\n";
}