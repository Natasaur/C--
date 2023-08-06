#include<iostream>
#include<cmath>
using namespace std;
int main() {
    int i;
    for ( i = 1; i < 16; i++) {
        if (i%2!=0) {
            cout << i << " ^ 2 = " << pow(i,2) << endl;
        }        
    }
    return 0;
}