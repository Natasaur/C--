#include <iostream>
#include <cstring>
#include <cmath>
/*Calcular el promedio de un alumno apartir de ingresas 4 calificaciones, y la calificación final
se obtiene multiplicando las calificaciones 1, 2, 3 y 4 
por los porcentajes 30, 20, 10 y 40 %, respectivamente.*/
using namespace std;
int calif1,calif2,calif3,calif4,suma;
float prom;
string nom;
main(){
    cout << "Ingrese el nombre del alumno: \n";
    cin >> nom;
    cout << "Ingrese la primera calificación: \n";
    cin >> calif1;
    cout << "Ingrese la segunda calificación: \n";
    cin >> calif2;
    cout << "Ingrese la tercera calificación: \n";
    cin >> calif3;
    cout << "Ingrese la cuarta calificación: \n";
    cin >> calif4;

    suma=calif1*0.3+calif2*0.2+calif3*0.1+calif4*0.4;
    prom=suma/4;

    cout << "La calificación final del alumno " << nom << " es de " << prom << ".";

    return 0;
}