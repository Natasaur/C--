#include<iostream>
#include"fuerza_N.h"
#include"velocidad_N.h"
#include"INE.h"
using namespace std;
int main(){
    int op;
    do{
        op=0;
        cout << "/----Seleccione un ejercicio----/\n";
        cout << "1. Calcular la Fuerza de Newton\n";
        cout << "2. Calcular la Velocidad de Newton\n";
        cout << "3. Imprimir credencial INE\n";
        cout << "4. Salir\n";
        cin >> op;
        switch (op) {
        case 1:
            do{
                fuerza_N();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 2:
            do{
                velocidad_N();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 3:
            do{
                INE();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        default:
        if (op>4){
                cout << "Ingresa una de las opciones anteriores.\n";
            }
            break;
        }
    } while (op!=4);
    return 0;
}
