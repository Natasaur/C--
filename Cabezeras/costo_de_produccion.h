#include<iostream>
using namespace std;
void costo_de_produccion() {
    int n,i;
    cout << "¿Cuántos días desea ingresar?\n";
	cin >> n;
	float Uni_Pro[n],Cost_Op[n],Cost_Mat[n],Cost_Unit[n];
    float total_uni_pro,total_cost_op,total_cost_mat,total_cost_unit;
	for (i=0 ; i<n ; i++) { //For para ingresar datos
		cout << "Ingrese las unidades producidas del día " << i << endl;
		cin >> Uni_Pro[i];
		cout << "Ingrese el costo de producción para el día " << i << endl;
		cin >> Cost_Op[i];
		cout << "Ingrese el costo de los materiales del día " << i << endl;
		cin >> Cost_Mat[i];
	}
	cout << "                 Costos de Producción\n";
	cout << " Día   Unidades Producidas   Costo Producción   Costo Materiales   Costo Unitario\n";
	for ( i=0 ; i<n ; i++) { //For para cada total
		Cost_Unit[i]=(Cost_Op[i]+Cost_Mat[i])/Uni_Pro[i];
		total_uni_pro=total_uni_pro+Uni_Pro[i];
		total_cost_op=total_cost_op+Cost_Op[i];
		total_cost_mat=total_cost_mat+Cost_Mat[i];
		total_cost_unit=total_cost_unit+(Cost_Op[i]+Cost_Mat[i])/Uni_Pro[i];
		cout << "  " << i << "            " << Uni_Pro[i] << "                  " << Cost_Op[i] << "                 " << Cost_Mat[i] << "                " << Cost_Unit[i] << endl;
	}
	cout << "Total          " << total_uni_pro << "                 " << total_cost_op << "                 " << total_cost_mat << endl;
	cout << "Costo Unitario Promedio: " << total_cost_unit/n << endl;
    //return 0;
}