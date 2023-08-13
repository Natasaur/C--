#include<iostream>
using namespace std;
float factorial(int top){
    int resultado,cont;
    resultado=1;
    for (cont = 1; cont <= top; cont++){
        resultado=resultado*cont;
    }
    //cout << resultado << endl;
    return resultado;
}