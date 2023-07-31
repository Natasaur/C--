#include<iostream>
using namespace std;
void vocal_consonante(){
    char letra;
    cout << "Ingrese una letra: \n";
    cin >> letra;
    if (letra=='a' || letra=='A' || letra=='i' || letra=='I' || letra=='u' || letra=='U' || letra=='e' || letra=='E' || letra=='o' || letra=='O') {
        cout << letra << " es una vocal.\n";
    }else{
        cout << letra << " es una consonante.\n";
    }
    //return 0;
}