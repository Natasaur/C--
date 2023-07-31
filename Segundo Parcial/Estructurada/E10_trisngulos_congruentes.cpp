#include<iostream>
using namespace std;
int main(){
    int t1[3],t2[3],a1[3],a2[3];
    int i;
    for ( i = 0; i < 3; i++){ //valores del primer triángulo
        cout << "Ingrese el lado " << i+1 << "del primer triángulo.\n";
        cin >> t1[i];
        cout << "Ingrese el ángulo " << i+1 << "del primer triángulo.\n";
        cin >> a1[i];
    }
    for ( i = 0; i < 3; i++){ //valores del segundo triángulo
        cout << "Ingrese el lado " << i+1 << "del segundo triángulo.\n";
        cin >> t2[i];
        cout << "Ingrese el ángulo " << i+1 << "del segundo triángulo.\n";
        cin >> a2[i];
    }
    if (t1[0]==t2[0] && t1[1]==t2[1] && t1[2]==t2[2] && a1[0]==a2[0] && a1[1]==a2[1] && a1[2]==a2[2]){
        cout << "Los triángulos son congruentes.";
    }else{
        cout << "Los triángulos no son congruentes.";
    }
    return 0;
}
