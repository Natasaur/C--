#include<iostream>
using namespace std;
void hielo_biguetas_armazones_v2()
{
    int hielo,biguetas,armazones,op;
    float c_hielo,c_biguetas,c_armazones,costo_total;
    op=0;
    cout << "Ingrese la cantidad de Hielo Seco: \n";
    cin >> hielo;
    cout << "Ingrese el costo del Hielo Seco: \n";
    cin >> c_hielo;
    cout << "Ingrese la cantidad de Biguetas: \n";
    cin >> biguetas;
    cout << "Ingrese el costo de las Biguetas: \n";
    cin >> c_biguetas;
    cout << "Ingrese la cantidad de Armazones: \n";
    cin >> armazones;
    cout << "Ingrese el costo de los Armazones: \n";
    cin >> c_armazones;
    cout << "Seleccione un método de pago: \n";
    cout << "1. Contado\n";
    cout << "2. Crédito\n";
    cin >> op;
    switch (op)
    {
        case 1:
        if (hielo>100)
        {
            costo_total=(hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones)*0.93*0.90;
        }else if (hielo>50)
        {
            costo_total=(hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones)*0.93*0.95;
        }else{
            costo_total=(hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones)*0.93;
            cout << "El costo total con el 7% de descuento es de: $" << costo_total << endl;
        }
        break;
        case 2:
        if (hielo>100)
        {
            costo_total=(hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones)*0.9;
        }else if (hielo>50)
        {
            costo_total=(hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones)*0.95;
        }else
        {
            costo_total=hielo*c_hielo*0.8+biguetas*c_biguetas*0.85+armazones*c_armazones;
            cout << "El costo total es de: $" << costo_total << endl;
        }
        break;
    default:
    cout << "No se ha seleccionado alguna de las opciones anteriores.";
        break;
    }
    //return 0;
}