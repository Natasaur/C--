#include<iostream>
#include<cmath>
#include"factorial.h"
using namespace std;

int sucesion_1(int a){
    int i,n,m;
    float res;
    res=0;
    cout << "Ingrese el valor de n: \n";
    cin >> n;
    for (i = 1 ; i <= a; i++) {
        if (i==1) {
            cout << i << "! + ";
            res=res+factorial(i);
        }else if (i==2) {
            cout << i << "!/" << i+1 << "n^2 + ";
            res=res+(factorial(i)/(i+1)*pow(n,2));
        }else if (i==a){
            cout << 2*(i-1) << "!/" << i*2 << "n^2\n";
            m=2*(i-1);
            res=res+(factorial(m)/(i*2)*pow(n,2));
            cout << "Resultado = " << res << endl;
        }else{
            cout << 2*(i-1) << "!/" << i*2 << "n^2 + ";
            m=2*(i-1);
            res=res+((factorial(m))/(i*2)*pow(n,2));
        }
    }
    return 0;
}

/*
float factorial(int top){
    int res,cont;
    res=1;
    for (cont = 1; cont <= top; cont++){
        res=res*cont;
    }
    cout << res << endl;
    return res;
}*/

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
    int op,n,a;
    do{
        op=0;
        cout << "/------Selecciones una opción------/\n";
        cout << "1. Pares o Impares\n";
        cout << "2. Serie de Fibonacci\n";
        cout << "3. Suceción\n";
        //cout << "4. Factorial\n";
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
                    a=0;
                    cout << "Ingrese el número de iteraciones: \n";
                    cin >> a;
                    sucesion_1(a);
                    op=0;
                    cout << "¿Desea repetir el ejercicio?\n" << "1. Si\n" << "2. No\n";
                    cin >> op;
                } while (op!=2);
            break;
            /*
            case 4:
                do{
                    a=0;
                    cout << "Ingrese el valor de n: \n";
                    cin >> n;
                    cout << factorial(n) << endl;
                    op=0;
                    cout << "¿Desea repetir el ejercicio?\n" << "1. Si\n" << "2. No\n";
                    cin >> op;
                } while (op!=2);
            break;
            */
            default:
            break;
        }  
    } while (op!=4);
    return 0;
}
