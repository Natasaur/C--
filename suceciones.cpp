#include<iostream>
using namespace std;

int sucesion_1(int n){
    int i;
    for (i = 1 ; i <= n; i++) {
        if (i==1) {
            cout << i << "! + ";
        }else if (i==2) {
            cout << i << "!/" << i+1 << "n^2 + ";            
        }else if (i==n){
            cout << 2*(i-1) << "!/" << i*2 << "n^2\n";            
        }else{
            cout << 2*(i-1) << "!/" << i*2 << "n^2 + ";
        }
    }
    return 0;
}

int fibonacci(int n){
    int i,ultimo,penultimo,suma;
    ultimo=1;
    penultimo=0;
    cout << endl << penultimo << endl << ultimo << endl;
    for (i = 0; i < n; i++){
        suma=penultimo+ultimo;
        cout << suma << endl;
        penultimo=ultimo;
        ultimo=suma;
    }
    return 0;
}

int pares_impares(int n){
    int i;
    for ( i = 1; i <= n; i++) {
        if (i%2==0) {
            cout << i << " es par.\n";
        }else{
            cout << i << " es impar.\n";
        }
    }
    return 0;
}

int main(){
    int op,n;
    do{
        op=0;
        cout << "/------Selecciones una opción------/\n";
        cout << "1. Pares o Impares\n";
        cout << "2. Serie de Fibonacci\n";
        cout << "3. Suceción\n";
        cout << "4. Salir\n";
        cin >> op;
        switch (op){
            case 1:
                do{
                    n=0;
                    cout << "¿Hasta que valor desea la suceción? \n";
                    cin >> n;
                    pares_impares(n);
                    op=0;
                    cout << "¿Desea repetir el ejercicio?\n" << "1. Si\n" << "2. No\n";
                    cin >> op;
                } while (op!=2);
            break;
            case 2:
                do{
                    n=0;
                    cout << "Ingrese el número de iteraciones: \n";
                    cin >> n;
                    fibonacci(n);
                    op=0;
                    cout << "¿Desea repetir el ejercicio?\n" << "1. Si\n" << "2. No\n";
                    cin >> op;
                } while (op!=2);
            break;
            case 3:
                do{
                    n=0;
                    cout << "Ingrese el número de iteraciones: \n";
                    cin >> n;
                    sucesion_1(n);
                    op=0;
                    cout << "¿Desea repetir el ejercicio?\n" << "1. Si\n" << "2. No\n";
                    cin >> op;
                } while (op!=2);
            break;
            default:
            break;
        }  
    } while (op!=4);
    return 0;
}
