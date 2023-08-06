#include<iostream>
#include<string>
using namespace std;
int main() {
    string nom;
    int mayor,menor,i,n;
    int Cal[4];
    float prom;
    n=0;
    cout << "Ingrese el nombre del alumno: \n";
    cin >> nom;
    for ( i = 0; i < 4; i++){
        cout << "Ingrese la calificación de la materia " << i+1 << endl;
        cin >> Cal[i];
        n=n+Cal[i];
    }    
    prom=n/4;
    for ( i = 0; i < 4; i++) {
        if (i==0){
            menor=Cal[i];
            mayor=Cal[i];
        }else if (Cal[i]>mayor){
            mayor=Cal[i];
        }else if (Cal[i]<menor){
            menor=Cal[i];
        }
    }
    cout << "Nombre: " << nom << endl << "Promedio: " << prom << endl << "Calificación más alta: " << mayor << endl << "Calificación más baja: " << menor << endl;
    return 0;
}