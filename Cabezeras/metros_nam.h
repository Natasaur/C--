#include<iostream>
using namespace std;
void metros_nam() {
    int n,m,i;
    float cm,plg,pies,yardas;
    cout << "Ingrese el valor inicial: \n";
	cin >> n;
	cout << "Ingrese el valor final: \n";
	cin >> m;
	if ( n<m ) {
		cout << "          Conversiones\n";
		cout << "   Metros    Yardas   Pulgadas   Pies\n";
		for ( i=n ; i <= m ; i++ ) {
			cm=i*100;
			plg=cm/25.4;
			pies=plg/12;
			yardas=pies/3;
			cout << "     " << i << "        " << yardas << "     " << plg << "     " << pies << endl;
		}
	}else{
		cout << "El valor inicial debe ser menor que el final.\n";
	}
    //return 0;
}