#include<iostream>
using namespace std;
void caf_select() {
    int flag;
    float celsius,fahrenheit;
    cout << "/----Selecciones una opción a convertir----/\n";
	cout << "1. De Celsius a Fahrenheit\n";
	cout <<  "2. De Fahrenheit a Celsius\n";
	cin >> flag;
	switch (flag) {
		case 1:
			cout << "Ingrese los grados celsius: \n";
			cin >> celsius;
			fahrenheit=9*celsius/5+32;
			cout << "La temperatura en grados fahrenheit es: " << fahrenheit << endl;
            break;
		case 2:
			cout << "Ingrese los grados fahrenheit: \n";
			cin >> fahrenheit;
			celsius=(fahrenheit-32)*5/9;
			cout <<  "La temperatura en grados celsius es: " << celsius  << endl;
            break;
        default:
        cout << "No se ha selecionado alguna de las opciones anteriores.\n";
        break;
	}
    //return 0;
}