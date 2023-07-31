#include <iostream>
#include <cmath>
/*Una temperatura en grados centígrados se puede convertir a su equivalente Fahrenheit con una fórmula.
Elaborar un algoritmo que */
using namespace std;
void cent_a_fahren() {
    float fahrenheith,celsius;
    cout << "Ingrese la temperatura en grados celsius: ";
    cin >> celsius;
    fahrenheith=(9/5)*celsius+32;
    cout << "La temperatura en grados Fahrenheith es: " << fahrenheith << endl;
    //return 0;
}