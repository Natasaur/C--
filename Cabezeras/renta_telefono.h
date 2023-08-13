#include<iostream>
using namespace std;
void renta_telefono() {
    int tarifa,i;
    cout << "   Año         Tarifa de renta   \n";
	tarifa=27;
	for ( i=2001 ; i<= 2020 ; i++) {
		cout << i << "     " << tarifa << endl;
		tarifa=tarifa*1.04;
	}
    //return 0;
}