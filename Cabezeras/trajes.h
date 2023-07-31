#include<iostream>
using namespace std;
void trajes(){
    int trajes;
    float precio,total;
    cout << "Ingrese la cantidad de trajes: \n";
    cin >> trajes;
    if (trajes<=0){
        cout << "Debe ingresar una cantidad mayor a cero.";
    }else{
        cout << "Ingrese el precio unitario: \n";
        cin >> precio;
        if (trajes==1){
            total=precio*trajes*0.5;
            cout << "El total con 50% de descuento es de: $" << total << endl;
        }else if (trajes==2){
            total=precio*trajes*0.45;
            cout << "El total con 55% de descuento es de: $" << total << endl;
        }else if (trajes==3){
            total=precio*trajes*0.4;
            cout << "El total con 60% de descuento es de: $" << total << endl;
        }else{
            total=precio*trajes*0.35;
            cout << "El total con 65% de descuento es de: $" << total << endl;
        }
    }
    //return 0;
}