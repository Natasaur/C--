#include<iostream>
#include<string>
using namespace std;
void control_calidad() {
    int n,m,i,j;
    m=0;
	n=0;
	string Plantas[5];
	Plantas[0]="Hermosillo";
	Plantas[1]="Guamúchil";
	Plantas[2]="Tijuana";
	Plantas[3]="Culiacán";
	Plantas[4]="México";
	float Cant_Pro[7],Cant_Def[7],Total_Pro[5],Total_Def[5];
    float producidas,defectuosas;
	for ( i=0 ; i<5 ; i++) { //For para la planta
		cout << "Planta " << i+1 << ": " << Plantas[i] << endl;
		for ( j=0 ; j<7 ; j++) { //For para los días Hasta 7
			cout << "Día " << j+1 << ": Cantidad producida: ";
			cin >> Cant_Pro[j];
			cout << "       Cantidad de defectuosas: ";
			cin >> Cant_Def[j];
			m=m+Cant_Pro[j]; //Total de producción por planta
			n=n+Cant_Def[j]; //Total de defectuosas por planta
			Total_Pro[i]=m;
			Total_Def[i]=n;
		}
		producidas=producidas+Total_Pro[i]; //Total de todas las unidades producidas
		defectuosas=defectuosas+Total_Def[i]; //Total de todas las unidades defectuosas
	}
	cout << "        Reporte de Control de Calidad\n";
	cout << "  Planta   Unidades Producidas   Unidades Defectuosas   % Defectuosas\n";
	for ( i=0 ; i<5 ; i++) {
		cout << " " << Plantas[i] << "       " << Total_Pro[i] << "                  " << Total_Def[i] << "             " << (Cant_Def[i]/Cant_Pro[i])*100 << endl;
	}
	cout <<  "Total                                    " << defectuosas << "             " << defectuosas/producidas << endl;
    //return 0;
}