#include<iostream>
using namespace std;
void reporte_n_esc() {
    int n;
    cout << "¿Cuántas escuelas desea ingresar?\n";
	cin >> n;
    string N_Nombres[n];
	string nombre;
	float N_Pob_Actual[n],N_Pob_Estimada[n];
	float pob_act,cre_anu,pob_est,mayor_,menor_;
	int i;
	for ( i=0 ; i<n ; i++) {
		cout << "Ingrese el nombre de la escuela: \n";
		cin >> nombre;
		N_Nombres[i]=nombre;
		cout << "Ingrese su población actual: \n";
		cin >> pob_act;
		N_Pob_Actual[i]=pob_act;
		cout <<  "Ingrese el porcentaje de crecimiento actual: \n";
		cin >> cre_anu;
		pob_est=pob_act*cre_anu*7;
		N_Pob_Estimada[i]=pob_est;				
	}
	cout <<  "          Reporte de Escuelas\n";
	cout << " Nombre de la escuela   Población Actual   Población Estimada Año 2030\n";
	for ( i=0 ; i < n ; i++ ) {
		cout << "         " << N_Nombres[i] << "                " << N_Pob_Actual[i] << "              " << N_Pob_Estimada[i] << endl;
	}
	for ( i=0 ; i < n ; i++ ) {
		if (i==1) {
			menor_=N_Pob_Estimada[i];
		}else if (N_Pob_Estimada[i]>mayor_) {
			mayor_=N_Pob_Estimada[i];
		}else if (N_Pob_Estimada[i]<menor_){
			menor_=N_Pob_Estimada[i];	
		}
	}
	cout << "Total " << n << " Escuelas\n";
	cout << "La escuela mayor será de: " << mayor_ << endl;
	cout << "La escuela menor serád de: " << menor_ << endl;
    //return 0;
}