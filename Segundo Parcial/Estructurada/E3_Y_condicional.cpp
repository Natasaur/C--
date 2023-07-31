#include<iostream>
#include<cmath>
using namespace std;
int main(){
    float x,y;
    cout << "Ingrese el valor de X: \n";
    cin >> x;
    if (x<0)
    {
        y=3*x+6;
        cout << "Y = " << y << endl;
    }else if (x>=0)
    {
        y=x^2+6;
        cout << "Y = " << y << endl;
    }
    
    return 0;
}