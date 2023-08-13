#include<iostream>
#include<string>
using namespace std;
int main() {
    string nombre;
    float sueldo,incremento,n_sueldo;
    int tipo;
    cout << "Ingrese el nombre del empleado: \n";
	cin >> nombre;
	cout << "Ingrese el sueldo del empleado: \n";
	cin >> sueldo;
	cout << "¿Qué tipo de empleado es?\n";
	cout << "Tipo 1\n";
	cout << "Tipo 2\n";
	cout << "Tipo 3\n";
	cout << "Tipo 4\n";
	cout << "Tipo 5\n";
	cin >> tipo;
	switch (tipo) {
		case 1:
			incremento=sueldo*0.05;
			n_sueldo=sueldo+incremento;
			cout << "Empleado: " << nombre << endl;
			cout << "Sueldo        -> " << sueldo << endl;
			cout << "Incremento 5% -> " << incremento << endl;
			cout << "Nuevo Sueldo  -> " << n_sueldo << endl;
            break;
		case 2:
			incremento=sueldo*0.07;
			n_sueldo=sueldo+incremento;
			cout << "Empleado: " << nombre << endl;
			cout << "Sueldo        -> " << sueldo << endl;
			cout << "Incremento 7% -> " << incremento << endl;
			cout << "Nuevo Sueldo  -> " << n_sueldo << endl;
            break;
		case 3:
			incremento=sueldo*0.09;
			n_sueldo=sueldo+incremento;
			cout << "Empleado: " << nombre << endl;
			cout << "Sueldo        -> " << sueldo << endl;
			cout << "Incremento 9% -> " << incremento << endl;
			cout << "Nuevo Sueldo  -> " << n_sueldo << endl;
            break;
		case 4:
			incremento=sueldo*0.12;
			n_sueldo=sueldo+incremento;
			cout << "Empleado: " << nombre << endl;
			cout << "Sueldo        -> " << sueldo << endl;
			cout << "Incremento 12% -> " << incremento << endl;
			cout << "Nuevo Sueldo  -> " << n_sueldo << endl;
            break;
		case 5:
			incremento=sueldo*0.15;
			n_sueldo=sueldo+incremento;
			cout << "Empleado: " << nombre << endl;
			cout << "Sueldo        -> " << sueldo << endl;
			cout << "Incremento 5% -> " << incremento << endl;
			cout << "Nuevo Sueldo  -> " << n_sueldo << endl;
            break;
		default:
			cout << "No es ha seleccionado alguna de las opciones anteriores.\n";
            break;
	}
    return 0;
}