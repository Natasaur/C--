#include<iostream>
#include<string>
#include<iostream>
using namespace std;

string nombre,apellido_p,apellido_m,ciudad,curp;
char calle[100];
char colonia[100];
char deleg[100];
int num,cp,año_reg;

int main()
{
    calle[100]={0};
    colonia[100]={0};
    deleg[100]={0};
    cout << "Ingrese el nombre: ";
    cin >> nombre;
    cout << "Ingrese el apellido paterno: ";
    cin >> apellido_p;
    cout << "Ingrese el apellido materno: ";
    cin >> apellido_m;
    cout << "Ingrese la calle: ";
    cin.getline(calle,100);
    cout << "Ingrese el número del domicilio: ";
    cin >> num;
    cout << "Ingrese la colonia: ";
    cin.getline(colonia,100);
    cout << "Ingrese el código postal: ";
    cin >> cp;
    cout << "Ingrese la delegación: ";
    cin.getline(deleg,100);
    cout << "Ingrese la ciudad: ";
    cin >> ciudad;
    cout << "Ingrese el CURP: ";
    cin >> curp;
    cout << "Ingrese el año de registro: ";
    cin >> año_reg;

    cout << endl << "NOMBRE \n" << apellido_p << "\n" << apellido_m << "\n" << nombre << "\n";
    cout << "DOMICILIO \n" << "C " << calle << " " << num << "\n";
    cout << "COL\n" << colonia << " " << cp << "\n";
    
    
    //cin.get();
    return 0;
}
