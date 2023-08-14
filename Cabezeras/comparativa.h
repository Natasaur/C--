#include<iostream>
#include"costo_terreno_10.h"
#include"costo_terreno_17_25.h"
#include"Y_condicional.h"
#include"precio_articulo.h"
#include"hielo_biguetas_armazones.h"
#include"hielo_biguetas_armazones_v2.h"
#include"alumno_acreditado.h"
#include"triangulos.h"
#include"trajes.h"
#include"triangulos_congruentes.h"
#include"trapecio.h"
#include"sueldo_tipo.h"
#include"terrenos_A_B.h"
#include"meses.h"
#include"hotel.h"
#include"convertidor_temperatura.h"
#include"g_o_r_fn_hiper.h"
#include"aspirante.h"
#include"autos.h"
#include"sist_ec_lin.h"
#include"sueldo_tipo_v2.h"
#include"vocal_consonante.h"
#include"fn_trigo_select.h"
using namespace std;
void comparativa(){
    int op;
    do{
        op=0;
        system("cls");
        cout << "/----Seleccione un ejercicio----/\n";
        cout << "1. Costo de un terreno con 10 % de descuento\n";
        cout << "2. Costo de un terreno con 17 o 25 % de descuento\n";
        cout << "3. Calcular el valor de Y\n";
        cout << "4. Precio de un artículo\n";
        cout << "5. Hielo Seco, Biguetas y Armazones\n";
        cout << "6. Hielo Seco, Biguetas y Armazones con descuento\n";
        cout << "7. Determinar si un alumno está acreditado o no\n";
        cout << "8. Tipos de triángulos\n";
        cout << "9. Tienda de Trajes\n";
        cout << "10. Triángulos Congruentes\n";
        cout << "11. Trapecio Isóceles\n";
        cout << "12. Sueldo de un trabajador por su tipo y horas trabajadas\n";
        cout << "13. Comparar los terrenos A y B\n";
        cout << "14. Meses\n";
        cout << "15. Hotel Guamuchil\n";
        cout << "16. Convertidor de Temperatura\n";
        cout << "17. Funciones Hiperbólicas con grados o radianes\n";
        cout << "18. Aspirante seleccionado\n";
        cout << "19. Precio de un automóvil\n";
        cout << "20. Sistema de Ecuaciones Lineales\n";
        cout << "21. Sueldo de un empleado según su tipo\n";
        cout << "22. Determinar si una letra es Vocal o Consonante\n";
        cout << "23. Funciones Trigonométricas con grados o radianes\n";
        cout << "24. Salir\n";
        cin >> op;
        switch (op) {
        case 1:
            do{
                system("cls");
                costo_terreno_10();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 2:
            do{
                system("cls");
                costo_terreno_17_25();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 3:
            do{
                system("cls");
                Y_condicional();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 4:
            do{
                system("cls");
                precio_articulo();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 5:
            do{
                system("cls");
                hielo_biguetas_armazones();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 6:
            do{
                system("cls");
                hielo_biguetas_armazones_v2();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 7:
            do{
                system("cls");
                alumno_acreditado();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 8:
            do{
                system("cls");
                triangulos();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 9:
            do{
                system("cls");
                trajes();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 10:
            do{
                system("cls");
                triangulos_congruentes();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 11:
            do{
                system("cls");
                trapecio();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 12:
            do{
                system("cls");
                sueldo_tipo();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 13:
            do{
                system("cls");
                terrenos_A_B();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 14:
            do{
                system("cls");
                meses();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 15:
            do{
                system("cls");
                hotel();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 16:
            do{
                system("cls");
                convertidor_temperatura();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 17:
            do{
                system("cls");
                g_o_r_fn_hiper();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 18:
            do{
                system("cls");
                aspirante();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 19:
            do{
                system("cls");
                autos();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 20:
            do{
                system("cls");
                sist_ec_lin();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 21:
            do{
                system("cls");
                sueldo_tipo_v2();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 22:
            do{
                system("cls");
                vocal_consonante();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 23:
            do{
                system("cls");
                fn_trigo_select();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;    
        default:
        if (op>24){
            system("cls");
            cout << "Ingresa una de las opciones anteriores.\n";
            }
            break;
        }
    } while (op!=24);
    //return 0;
}