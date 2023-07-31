#include<iostream>
#include<string>
using namespace std;
int main() {
    string nombre;
    float promedio;
    int tipo;
    cout << "Ingrese el nombre del alumno: \n";
    cin >> nombre;
    cout << "Ingrese el promedio: \n";
    cin >> promedio;
    cout << "Ingrese el tipo de bachillerato: \n";
    cin >> tipo;
    if (promedio>90) {
        cout << "El alumno " << nombre << " ha sido Aceptado.\n";
    }else if (tipo==1 && promedio>=80 && promedio<=90) {
        cout << "El alumno " << nombre << " ha sido Aceptado.\n";
    }else{
        cout << "El alumno " << nombre << " ha sido Rechazado.\n";
    }
    return 0;
}