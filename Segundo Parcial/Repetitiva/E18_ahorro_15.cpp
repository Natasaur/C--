#include<iostream>
using namespace std;
int main() {
    int i;
    float capital;
    capital=0;
    for ( i = 1; i <= 15; i++) {
        capital=capital+15000*1.037;
    }
    cout << "Ahorro a 15 años: $" << capital << endl;
    return 0;
}