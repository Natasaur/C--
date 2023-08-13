#include<iostream>
using namespace std;
int main() {
    float f,c,k,r;
    int op;
    op=0;
    cout << "Seleccione que tipo de grados desea convertir: \n";
	cout << "1. Fahrenheit\n";
	cout << "2. Celsius\n";
	cout << "3. Kelvin\n";
	cout << "4. Rankine\n";
	cin >> op;
	switch (op) {
		case 1:
			cout << "Ingrese la temperatura en grados Fahrenheit: \n";
			cin >> f;
			c=(f-32)*5/9;
			k=c+273;
			r=f+460;
			cout << "Celsius: " << c << endl << "Kelvin: " << k << endl << "Rankine: " << r << endl;
            break;
		case 2:
			cout << "Ingrese la temperatura en grados Celsius: \n";
			cin >> c;
			f=9/5*c+32;
			k=c+273;
			r=f+460;
			cout << "Fahrenheit: " << f << endl;
			cout << "Kelvin: " << k << endl;
			cout << "Rankine: " << r << endl;
			break;
		case 3:
			cout << "Ingrese la temperatura en grados Kelvin: \n";
			cin >> k;
			c=k-273;
			f=9/5*c+32;
			r=f+460;
			cout << "Celsius: " << c << endl;
			cout << "Fahrenheit: " << f << endl;
			cout << "Rankine: " << r << endl;
			break;
		case 4:
			cout << "Ingrese la temperatura en grados Rankine: \n";
			cin >> r;
			f=r-460;
			c=(f-32)*5/9;
			k=c+273;
			cout << "Celsius: " << c << endl;
			cout << "Fahrenheit: " << f << endl;
			cout << "Kelvin: " << k << endl;
			break;
		default:
			cout << "No ha seleccionado una de las opciones anteriores.\n";
			break;
	}
    return 0;
}