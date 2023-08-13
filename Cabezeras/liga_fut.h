#include<iostream>
#include<string>
using namespace std;
void liga_fut(){
    float i,m,n,peso,edad;
    string nom;
    peso=0;
    edad=0;
    for ( i = 0; i < 3; i++){
        cout << "Ingrese el nombre del jugador: \n";
        cin >> nom;
        cout << "Ingrese el peso del jugador: \n";
        cin >> m;
        peso=peso+m;
        cout << "Ingrese la edad del jugador: \n";
        cin >> n;
        edad=edad+n;
    }
    cout << "     Estadística de Jugadores\n";
    cout << "Equipo   Promedio Peso     Promedio Edad\n";
    cout << "  " << 1 << "           " << peso/3 << "           " << edad/3 << endl;
    //return 0;
}