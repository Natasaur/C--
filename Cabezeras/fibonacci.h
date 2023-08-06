#include<iostream>
/*Realiza un programa que siga la secuencia de fibonacci
0 1 1 2 3 5 8 ....*/
using namespace std;
void fibonacci(){
    int n,i,ultimo,penultimo,suma;
    cout << "Ingrese el número de iteraciónes: \n";
    cin >> n;
    ultimo=1;
    penultimo=0;
    cout << endl << penultimo << endl << ultimo << endl;
    for (i = 0; i < n; i++){
        suma=penultimo+ultimo;
        cout << suma << endl;
        penultimo=ultimo;
        ultimo=suma;
    }
    //return 0;
}
