#include<iostream>
#include<cmath>
using namespace std;
void g_o_r_fn_hiper(){
    float ang,sin_h,cos_h,tan_h,secante;
    int op;
    cout << "Seleccione una opción: " << endl << "1. Grados" << endl << "2. Radianes" << endl;
    cin >> op;
    switch (op){
    case 1:
        cout << "Ingrese el valor del ángulo: \n";
        cin >> ang;
        ang=ang*2*M_PI/180;
        sin_h=(pow(M_E,ang)-pow(M_E,-ang))/2;
        cos_h=(pow(M_E,ang)+pow(M_E,-ang))/2;
        tan_h=sin_h/cos_h;
        secante=1/cos(ang);
        cout << "Seno Hiperbólico: " << sin_h << endl;
        cout << "Coseno Hiperbólico: " << cos_h << endl;
        cout << "Tangente Hiperbólica: " << tan_h << endl;
        cout << "Secante: " << secante << endl;
        break;
    case 2:
        cout << "Ingrese el valor del ángulo: \n";
        cin >> ang;
        //ang=ang*2*M_PI/180;
        sin_h=(pow(M_E,ang)-pow(M_E,-ang))/2;
        cos_h=(pow(M_E,ang)+pow(M_E,-ang))/2;
        tan_h=sin_h/cos_h;
        secante=1/cos(ang);
        cout << "Seno Hiperbólico: " << sin_h << endl;
        cout << "Coseno Hiperbólico: " << cos_h << endl;
        cout << "Tangente Hiperbólica: " << tan_h << endl;
        cout << "Secante: " << secante << endl;
        break;
    default:
        break;
    }
    //return 0;
}