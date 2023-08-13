#include<iostream>
using namespace std;
void fallas() {
    int i,n,m;
    float num,total,menor_,mayor_;
    float Tipos_Errores[9];
	for ( n=0 ; n<3 ; n++) {//For para los días
		cout << "Día: " << n+1 << endl;
		for ( m=0 ; m<9 ; m++) { //For para los tipos
			cout << "Ingrese las fallas del tipo " << m+1 << " : ";
			cin >> num;
			Tipos_Errores[m]=Tipos_Errores[m]+num;
		}
	}
	mayor_=Tipos_Errores[1];
	for ( i=0 ; i<9 ; i++) {
		total=0;
		total=total+Tipos_Errores[i];
		if (Tipos_Errores[i]>mayor_) {
			mayor_=Tipos_Errores[i];
		}
	}
	cout << "          Reporte Mensual de Fallas\n";
	cout << "Total de Fallas Ocurridas: " << total << endl;
	for ( i=0 ; i<9 ; i++ ) {
		cout << "Total de fallas Tipo " << i+1 << ": " << Tipos_Errores[i] << endl;
	}
	for (i=0;i<9;i++) {
		if (Tipos_Errores[i]==mayor_) {
			cout << "Tipo de Falla que más ocurrió: " << i+1 << endl;
		}
	}
    //return 0;
}