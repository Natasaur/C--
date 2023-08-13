#include<iostream>
//#include<cmath>
using namespace std;
int main() {
    float i,saldo,int_anual,meses,sald_ins,cuota_f,mensualidad,interes,total_sald_ins,total_cuota_f,total_interes,total_mensualidad;
    cout << "        Tabla de Amortización\n";
	cout << "Saldo: ";
	cin >> saldo;
	cout << "Interés anual: ";
	cin >> int_anual;
	cout << "Número de meses: ";
	cin >> meses;
	int_anual=int_anual/100;
	for ( i=1 ; i <= meses ; i++ ){
		cuota_f=saldo/meses;
		sald_ins=sald_ins+cuota_f;
		interes=sald_ins*int_anual;
		mensualidad=saldo/meses+sald_ins*int_anual;
		total_sald_ins=total_sald_ins+sald_ins;
		total_cuota_f=total_cuota_f+cuota_f;
		total_interes=total_interes+interes;
		total_mensualidad=total_mensualidad+mensualidad;
		if ( i==1 ) {
			cout << "  Meses     Saldo Insoluto     Cuota Fija     Interes      Mensualidad\n";
			cout << "    " << i << "            " << sald_ins << "              " << cuota_f << "          " << interes << "          " << mensualidad << endl;
		}else{
		cout << "    " << i << "            " << sald_ins << "              " << cuota_f << "          " << interes << "          " << mensualidad << endl;
        }
	}
	cout << "  Totales      " << total_sald_ins << "          " << total_cuota_f << "       " << total_interes << "       " << total_mensualidad << endl;
    return 0;
}