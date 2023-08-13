#include<iostream>
using namespace std;
int main() {
    int i;
    float capital;
    capital=0;
    for ( i = 1; i <= 10; i++) {
        capital=capital+3000*1.03;
    }
    cout << "Ahorro a 10 años: $" << capital << endl;
    return 0;
}