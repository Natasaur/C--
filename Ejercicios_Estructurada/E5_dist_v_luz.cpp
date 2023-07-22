#include <iostream>
#include <cmath.h>
/*La velocidad de la luz es de 300,000 kilómetros por segundo. Elaborar un algoritmo que
lea un tiempo en segundos e imprima la distancia que recorre en dicho tiempo.*/
float t,v,d;
v=300000;
main(){
    cout << "Ingrese el tiempo transcurrido en segundos: \n";
    cin >> t;
    d=v/t;
    cout << "La distancia recorrida en " << t << " segundos a la velocidad de la luz es de " << d << " metros.";
    
    return 0;
}