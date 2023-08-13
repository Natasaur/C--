#include<iostream>
using namespace std;
void metros_1an() {
    int n,i;
    float cm,plg,pies,yardas;
    cout << "Ingrese el valor de n: \n";
	cin >> n;
	cout << "          Conversiones\n";
	cout << "   Metros    Yardas   Pulgadas   Pies\n";
	for ( i=1 ; i <= n ; i++ ) {
		cm=i*100;
		plg=cm/25.4;
		pies=plg/12;
		yardas=pies/3;
		cout << "     " << i << "        " << yardas << "     " << plg << "     " << pies << endl;
	}
    //return 0;
}