#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float m,n,i,f;
    cout << "Ingrese el valor inicial en grados Celsius: \n";
    cin >> n;
    cout << "Ingrese el valor final en grados Celsius: \n";
    cin >> m;
    cout << " Celsius   Fahrenheit\n";
    for (i = n; i <= m; i++) {
        //c=(i-32)*5/9;
        f=9/5*i+32;
        cout << "     " << i << "         " << f << endl;
    }    
    return 0;
}