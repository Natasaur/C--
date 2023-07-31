#include<iostream>
using namespace std;
int main(){
    int op;
    float f,c,k,r;
    cout << "Seleccione los grados a convertir: " << endl << "1. Fahrenheit" << endl << "2. Celsius" << endl << "3. Kelvin" << endl << "4. Rankine" << endl;
    cin >> op;
    switch (op)
    {
    case 1:
        cout << "Ingrese la temperatura en grados Fahrenheit: \n";
        cin >> f;
        c=(f-32)*5/9;
		k=c+273;
		r=f+460;
        cout << "Fahrenheit: " << f << endl << "Celsius: " << c << endl << "Kelvin: " << k << endl << "Rankine: " << r << endl;
        break;
    case 2:
		cout << "Ingrese la temperatura en grados Celsius: \n";
		cin >> c;
		f=9/5*c+32;
		k=c+273;
        r=f+460;
        cout << "Fahrenheit: " << f << endl << "Celsius: " << c << endl << "Kelvin: " << k << endl << "Rankine: " << r << endl;
        break;
    case 3:
        cout << "Ingrese la temperatura en grados Kelvin: \n";
        cin >> k;
        c=k-273;
        f=9/5*c+32;
        r=f+460;
        cout << "Fahrenheit: " << f << endl << "Celsius: " << c << endl << "Kelvin: " << k << endl << "Rankine: " << r << endl;
        break;
    case 4:
        cout << "Ingrese la temperatura en grados Rankine: \n";
        cin >> r;
        f=r-460;
        c=(f-32)*5/9;
        k=c+273;
        cout << "Fahrenheit: " << f << endl << "Celsius: " << c << endl << "Kelvin: " << k << endl << "Rankine: " << r << endl;
        break;
    default:
        break;
    }
    return 0;
}
