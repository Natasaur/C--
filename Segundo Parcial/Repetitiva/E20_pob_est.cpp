#include<iostream>
using namespace std;
int main() {
    float pob_act,cre_anu,year,year_est,i,pob_est;
    cout << "Ingrese la población actual de la escuela: \n";
	cin >> pob_act;
	cout << "Ingrese la tasa de crecimiento esperada: \n";
	cin >> cre_anu;
	cout << "Ingrese el año actual: \n";
	cin >> year;
	cout << "Ingrese el año estimado: \n";
	cin >> year_est;
	pob_est=pob_act;
	for ( i=year ; i <= year_est-1 ; i++) {
		pob_est=pob_est*cre_anu;
	}
	cout << "Población estimada de " << pob_est << " en " << year_est << endl;
    return 0;
}