#include<iostream>
#include<string>
using namespace std;
void reporte_12_esc(){
	string Nombres[12];
	string nombre;
	float Pob_Actual[12],Pob_Estimada[12];
	float pob_act,cre_anu,pob_est,mayor_,menor_;
	int i;
	for ( i=0 ; i < 3 ; i++) {
		cout << "Ingrese el nombre de la escuela: \n";
		cin >> nombre;
		Nombres[i]=nombre;
		cout << "Ingrese su población actual: \n";
		cin >> pob_act;
		Pob_Actual[i]=pob_act;
		cout << "Ingrese el porcentaje de crecimiento actual: \n";
		cin >> cre_anu;
		pob_est=pob_act*cre_anu*7;
		Pob_Estimada[i]=pob_est;			
	}
	cout << "          Reporte de Escuelas\n";
	cout << " Nombre de la escuela   Población Actual   Población Estimada Año 2030\n";
	for ( i=0 ; i < 3 ; i++) {
		cout << "         " << Nombres[i] << "                " << Pob_Actual[i] << "              " << Pob_Estimada[i] << endl;
	}
	for ( i=0 ; i < 3 ; i++ ) {
		if (i==1) {
			menor_=Pob_Estimada[i];
		}else if (Pob_Estimada[i]>mayor_) {
			mayor_=Pob_Estimada[i];
		}else if (Pob_Estimada[i]<menor_){
			menor_=Pob_Estimada[i];	
		}
	}
	cout << "Total 12 Escuelas\n";
	cout << "La escuela mayor será de: " << mayor_ << endl;
	cout << "La escuela menor serád de: " << menor_ << endl;
    //return 0;
}