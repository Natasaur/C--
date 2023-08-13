#include<iostream>
using namespace std;
int main() {
    int flag;
    float pesos,yenes,pesetas,marcos;
    cout << "/----Seleccione la moneda a convertir----/\n";
	cout << "1. Pesos\n";
	cout << "2. Yenes\n";
    cout << "3. Pesetas\n";
	cout << "4. Marcos\n";
	cin >> flag;
	switch (flag) {
		case 1:
			cout << "Ingrese la cantidad en pesos: \n";
			cin >> pesos;
			yenes=pesos*8.2;
			pesetas=pesos*8.8497;
			marcos=pesos*0.104;
			cout << "Yenes   -> " << yenes << endl;
			cout << "Pesetas -> " << pesetas << endl;
			cout << "Marcos  -> " << marcos << endl;
            break;
		case 2:
			cout << "Ingrese la cantidad en yenes: \n";
			cin >> yenes;
			pesos=yenes/8.2;
			pesetas=pesos*8.8497;
			marcos=pesos*0.104;
			cout << "Pesos   -> " << pesos << endl;
			cout << "Pesetas -> " << pesetas << endl;
			cout << "Marcos  -> " << marcos << endl;
            break;
		case 3:
			cout << "Ingrese la cantidad en pesetas: \n";
			cin >> pesetas;
			pesos=pesetas/8.8497;
			yenes=pesos*8.2;
			marcos=pesos*0.104;
			cout << "Pesos   -> " << pesos << endl;
			cout << "Yenes   -> " << yenes << endl;
			cout << "Marcos  -> " << marcos << endl;
            break;
		case 4:
			cout << "Ingrese la cantidad en marcos: \n";
			cin >> marcos;
			pesos=marcos/0.104;
			yenes=pesos*8.2;
			pesetas=pesos*8.8497;
			cout << "Yenes   -> " << yenes << endl;
			cout << "Pesetas ->" << pesetas << endl;
			cout << "Pesos   ->" << pesos << endl;
            break;
		default:
			cout << "No se ha selecionado alguna de las opciones anteriores.\n";
            break;
	}
    return 0;
}