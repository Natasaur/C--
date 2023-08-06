#include<iostream>
using namespace std;
void sumatoria_1_sobre_n() {
    float acum,n,i;
	cout << "Ingrese el valor de n: \n";
	cin >> n;
	acum=0;
	if (n<=0) {
		cout << "El valor tiene que ser mayor a cero.\n";
    }else {
		for (i = 1 ; i <= n ; i++) {
			if (i==n){
				acum=acum+1/i;
				cout << "1/" << i << " = " << acum << endl;
			}else if (i==1){
				cout << "1 + ";
				acum=acum+1/i;
			}else{
				cout << "1/" << i << " + ";
				acum=acum+1/i;
			}
		}
	}
    //return 0;
}