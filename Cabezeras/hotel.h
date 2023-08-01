#include<iostream>
using namespace std;
void hotel(){
    int dias;
    float precio,total;
    cout << "Ingrese la cantidad de días a hospedarse: \n";
    cin >> dias;
    cout << "Ingrese el precio por noche de la habitación: \n";
    cin >> precio;
    if (dias>=15){
        total=dias*precio*0.8;
        cout << "El costo total con 20% de descuento es de: $" << total << endl;
    }else if (dias>=10){
        total=dias*precio*0.85;
        cout << "El costo total con 15% de descuento es de: $" << total << endl;
    }else if (dias>=45){
        total=dias*precio*0.9;
        cout << "El costo total con 10% de descuento es de: $" << total << endl;
    }else{
        total=dias*precio;
        cout << "El costo total es de: $" << total << endl;
    }
    //return 0;
}