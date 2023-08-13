#include<iostream>
using namespace std;
void pies_nam() {
    int op,m,n,i;
    float yardas,plg,metros,pies;
    op=0;
    cout << "¿Qué desea convertir?\n";
	cout << "1. Pies\n";
	cout << "2. Pulgadas\n";
	cout << "3. Yardas\n";
	cin >> op;
	switch (op) {
		case 1: 
			cout << "Ingrese el valor inicial: \n";
			cin >> n;
			cout << "Ingrese el valor final: \n";
			cin >> m;
			if ( n<m ) {
				cout << "          Conversiones\n";
				cout << "   Pies    Yardas   Pulgadas   Metros\n";
				for ( i=n ; i <= m ; i++ ) {
					yardas=i/3;
					plg=i*12;
					metros=plg*2.54*100;
					cout << "     " << i << "        " << yardas << "     " << plg << "     " << metros << endl;
				}
			}else{
				cout << "El valor inicial debe ser menor que el final.\n";
			}
            break;
		case 2:
			cout << "Ingrese el valor inicial: \n";
			cin >> n;
			cout << "Ingrese el valor final: \n";
			cin >> m;
			if (n<m) {
				cout << "          Conversiones\n";
				cout << "   Pulgadas    Yardas   Pies   Metros\n";
				for ( i=n ; i <= m ; i++ ) {
					metros=i*2.54*100;
					pies=i/12;
					yardas=pies/3;
					cout << "     " << i << "        " << yardas << "     " << plg << "     " << pies << endl;
				}
            }else{
				cout << "El valor inicial debe ser menor que el final.\n";
			}
            break;
		case 3:
			cout << "Ingrese el valor inicial: \n";
			cin >> n;
			cout << "Ingrese el valor final: \n";
			cin >> m;
			if (n<m) {
				cout << "          Conversiones\n";
				cout << "   Yardas    Pulgadas   Pies   Metros\n";
				for ( i=n ; i <= m ; i++ ) {
					pies=i*3;
					plg=pies*12;
					metros=plg*2.54*100;
					cout << "     " << i << "        " << yardas << "     " << plg << "     " << pies << endl;
				}
			}else{
				cout << "El valor inicial debe ser menor que el final.\n";
			}
            break;
        default:
            cout << "No se ha seleccionado una opción de la lista.\n";
            break;
	}
    //return 0;
}