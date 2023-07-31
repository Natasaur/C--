#include<iostream>
using namespace std;
int main() {
    int a,b,c;
    cout << "Ingresa el valor de A: \n";
    cin >> a;
    cout << "Ingresa el valor de B: \n";
    cin >> b;
    cout << "Ingresa el valor de C: \n";
    cin >> c;
    if (a+b+c>180){
        cout << "Los ángulos introducidos no corresponden a los de un triángulo.";
    }else{
        if (a==90 || b==90 || c==90){
        cout << "Triángulo Rectángulo\n";
        }else if (a<90 && b<90 && c<90){
            cout << "Triángulo Acutángulo\n";
            if (a==60 && b==60 && c==60){
                cout << "Y Equilátero\n";
            }
        }else if ((a>90 && a<180) || (b>90 && b<180) || (c>90 && c<180)){
            cout << "Triángulo Obtusángulo\n";
        }
    }
    return 0;
}