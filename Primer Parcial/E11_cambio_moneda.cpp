#include<iostream>
/*Elaborar un algoritmo que lea la  cantidad de dólares a comprar y el tipo de cambio en pesos. Calcular e imprimir la cantidad a pagar en pesos por la cantidad de dólares indicada.*/
using namespace std;
float dolar,peso;
int main(){
    cout << "Ingrese la cantidad de dólares a convertir: \n";
    cin >> dolar;
    peso=dolar*17.24;
    cout << dolar << " dólares son " << peso << " pesos.";
    return 0;
}