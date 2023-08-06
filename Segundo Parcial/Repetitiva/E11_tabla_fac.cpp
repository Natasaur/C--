#include<iostream>
#include<cmath>
using namespace std;
int main() {
    float m,n,i,c;
    cout << "Ingrese el valor inicial en grados Fahrenheit: \n";
    cin >> n;
    cout << "Ingrese el valor final en grados Fahrenheit: \n";
    cin >> m;
    cout << " Fahrenheit   Celsius\n";
    for (i = n; i <= m; i++) {
        c=(i-32)*5/9;
        cout << "     " << i << "         " << c << endl;
    }    
    return 0;
}