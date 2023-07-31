#include <iostream>
#include <cmath>
/*La velocidad de la luz es de 300,000 kilómetros por segundo. Elaborar un algoritmo que
lea un tiempo en segundos e imprima la distancia que recorre en dicho tiempo.*/
using namespace std;
void dist_v_luz(){
    float t,v,d;
    v=300000;
    cout << "Ingrese el tiempo transcurrido en segundos: \n";
    cin >> t;
    d=v/t;
    cout << "La distancia recorrida en " << t << " segundos a la velocidad de la luz es de " << d << " metros.\n";
    //return 0;
}