#include<iostream>
#include<string>
using namespace std;
int main(){
    string nombre;
    int tipo,horas;
    float cuota,total;
    cout << "Ingrese el nombre del empleado: \n";
    cin >> nombre;
    cout << "Ingrese el tipo de empleado: \n";
    cin >> tipo;
    cout << "Ingrese las horas trabajadas por el empleado: \n";
    cin >> horas;
    cout << "Ingrese la cuota por hora a pagar: \n";
    cin >> cuota;
    switch (tipo)
    {
    case 1:
        if (horas>40){
            total=40*cuota+(horas-40)*cuota*1.5;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }else{
            total=horas*cuota;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }        
        break;
    case 2:
        if (horas>40){
            total=40*cuota+(horas-40)*cuota*2;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }else{
            total=horas*cuota;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }        
        break;
    case 3:
        if (horas>40){
            total=40*cuota+(horas-40)*cuota*2.5;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }else{
            total=horas*cuota;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }        
        break;
    case 4:
        if (horas>40){
            total=40*cuota+(horas-40)*cuota*3;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }else{
            total=horas*cuota;
            cout << "Empleado: " << nombre << "   " << "Salario: $" << total << endl;
        }        
        break;
    default:
        break;
    }
    return 0;
}
