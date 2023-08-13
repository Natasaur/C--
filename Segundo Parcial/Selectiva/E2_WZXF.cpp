#include<iostream>
using namespace std;
int main() {
    float a,b,c,d,e,f,y,x,w,z,t,r;
    int op;
    op=0;
    cout << "/----Seleccione una opción----/\n";
	cout << "1. Calcular W\n";
	cout << "2. Calcular Z\n";
	cout << "3. Calcular x\n";
	cout << "4. Calcular F\n";
	cin >> op;
    switch (op){
        case 1:
			cout << "Ingrese el valor de A: \n";
			cin >> a;
			cout << "Ingrese el valor de B: \n";
			cin >> b;
			cout << "Ingrese el valor de C: \n";
			cin >> c;
			cout << "Ingrese el valor de D: \n";
			cin >> d;
			w=a*c/d+b/c;
			cout << "W es " << w << endl;
            break;
		case 2:
			cout << "Ingrese el valor de T: \n";
			cin >> t;
			cout << "Ingrese el valor de R: \n";
			cin >> r;
			cout << "Ingrese el valor de y: \n";
			cin >> y;
			z=(t*(y-2)+r)/5;
			cout << "z es " << z << endl;
            break;
		case 3:
			cout << "Ingrese el valor de A: \n";
			cin >> a;
			cout << "Ingrese el valor de B: \n";
			cin >> b;
			cout << "Ingrese el valor de C: \n";
			cin >> c;
			cout << "Ingrese el valor de D: \n";
			cin >> d;
			cout << "Ingrese el valor de E: \n";
			cin >> e;
			cout << "Ingrese el valor de F: \n";
			cin >> f;
			x=(c*e-b*f)/(a*e-b*d);
			cout << "x es " << x << endl;
            break;
		case 4:
			cout << "Ingrese el valor de C: \n";
			cin >> c;
			f=9/5*c+32;
			cout << "F es " << f << endl;
            break;
        default :
            cout << "No se ha seleccionado ninguna de las opciones disponibles.\n";
            break;
	}
    return 0;
}