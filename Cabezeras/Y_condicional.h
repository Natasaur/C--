#include<iostream>
#include<cmath>
using namespace std;
void Y_condicional(){
    float x,y;
    cout << "Ingrese el valor de X: \n";
    cin >> x;
    if (x<0)
    {
        y=3*x+6;
        cout << "Y = " << y << endl;
    }else if (x>=0)
    {
        y=pow(x,2)+6;
        cout << "Y = " << y << endl;
    }
    //return 0;
}