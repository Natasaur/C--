#include<iostream>
#include"newton.h"
#include"WZXF.h"
//#include"hielo_biguetas_armazones.h"
//#include"hielo_biguetas_armazones_v2.h"
//#include"sueldo_tipo.h"
//#include"meses.h"
#include"FCKR.h"
//#include"autos.h"
#include"tipos_empleados.h"
#include"moneda_select.h"
#include"caf_select.h"
//#include"g_o_r_fn_hiper.h"

using namespace std;
void selectiva(){
    int op;
    //float angulo;
    do{
        op=0;
        system("cls");
        cout << "/-----Seleccione una opción-----/\n";
        cout << "1. Ley de Newton\n";
        cout << "2. Calcular W,Z,X o F\n";
        cout << "3. Hielo Seco, Biguetas y Armazones\n";
        cout << "4. Hielo Seco, Biguetas y Armazones con descuento adicional\n";
        cout << "5. Sueldo de un empleado\n";
        cout << "6. Meses (Estructura Selectiva)\n";
        cout << "7. Convertidor de Temperatura\n";
        cout << "8. Ecuaciones Trigonométricas\n";
        cout << "9. Automóviles\n";
        cout << "10. Sueldo de tipos de empleados\n";
        cout << "11. Convertidor de moneda\n";
        cout << "12. Celsius a Fahrenheit\n";
        cout << "13. Salir\n";
        cin >> op;
        switch (op) {
        case 1:
            do{
                system("cls");
                newton();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 2:
            do{
                system("cls");
                WZXF();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 3:
            do{
                system("cls");
                hielo_biguetas_armazones();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 4:
            do{
                system("cls");
                hielo_biguetas_armazones_v2();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 5:
            do{
                system("cls");
                sueldo_tipo();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 6:
            do{
                system("cls");
                meses();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 7:
            do{
                system("cls");
                FCKR();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 8:
            do{
                system("cls");
                g_o_r_fn_hiper();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 9:
            do{
                system("cls");
                autos();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 10:
            do{
                system("cls");
                tipos_empleados();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 11:
            do{
                system("cls");
                moneda_select();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 12:
            do{
                system("cls");
                caf_select();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        default:
        if (op>13){
            system("cls");
            cout << "Ingresa una de las opciones anteriores.\n";
            }
            break;
        }
    } while (op!=13);
    //return 0;
}