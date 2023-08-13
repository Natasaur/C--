#include<iostream>
#include"factorial.h"
#include"tablas_de_multiplicar.h"
#include"fibonacci.h"
#include"sumatoria_1_sobre_n.h"
#include"mayor_menor.h"
#include"triangulo_asteriscos.h"
#include"pares.h"
#include"promedio_mayor_y_menor.h"
#include"potencias.h"
#include"cuadrado_impares.h"
#include"tabla_fac.h"
#include"tabla_caf.h"
//#include"fn_trigo_v2.h"
#include"raices.h"
#include"liga_fut.h"
#include"amortizacion.h"
#include"ahorro_10.h"
#include"ahorro_15.h"
#include"renta_telefono.h"
#include"pob_est.h"
#include"metros_1an.h"
#include"metros_nam.h"
#include"pies_nam.h"
#include"reporte_12_esc.h"
#include"reporte_n_esc.h"
#include"costo_de_produccion.h"
#include"costo_produccion_8.h"
#include"control_calidad.h"
#include"fallas.h"

using namespace std;
void repetitiva(){
    int op;
    do{
        op=0;
        cout << "/-----Seleccione una opción-----/\n";
        cout << "1. Factorial\n";
        cout << "2. Tablas de Multiplicar\n";
        cout << "3. Serie de Fibonacci\n";
        cout << "4. Sumatoria de 1/n\n";
        cout << "5. Mayor y menor\n";
        cout << "6. Triángulo de asteriscos\n";
        cout << "7. Cadena de números pares\n";
        cout << "8. Total, promedio, mayor y menor de n números\n";
        cout << "9. Potencias\n";
        cout << "10. Cuadrado de números impares del 1 al 15\n";
        cout << "11. Tabla de Fahrenheit a Celsius\n";
        cout << "12. Tabla de Celsius a Fahrenheit\n";
        cout << "13. Secante, Cosecante y Tangente\n";
        cout << "14. Raices únicas, complejas o reales\n";
        cout << "15. Liga Mexicana del Pacífico\n";
        cout << "16. Tabla de Amortización\n";
        cout << "17. Ahorro a 10 años\n";
        cout << "18. Ahorro a 15 años\n";
        cout << "19. Teléfonos México a 2020\n";
        cout << "20. Población estudiantil\n";
        cout << "21. Fibonacci\n";
        cout << "22. Tabla de Conversión de medidas de metros de 1 a n\n";
        cout << "23. Tabla de Conversión de medidas de n a m\n";
        cout << "24. Tabla de Conversión de medidas de pies de n a m\n";
        cout << "25. Reporte de 12 escuelas\n";
        cout << "26. Reporte de n escuelas\n";
        cout << "27. Costos de Producción\n";
        cout << "28. Costos de Producción de 8 plantas\n";
        cout << "29. Control de Calidad 5 plantas\n";
        cout << "30. Tipos de Fallas\n";
        cout << "31. Inversiones\n";
        cout << "32. Trabajador productivo\n";
        cout << "33. Salir\n";
        cin >> op;
        switch (op) {
        case 1:
            do{
                int top;
                top=0;
                cout << "Ingrese el número a calcular el factorial: \n";
                cin >> top;
                cout << factorial(top) << endl;
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 2:
            do{
                tablas_de_multiplicar();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 3:
            do{
                fibonacci();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 4:
            do{
                sumatoria_1_sobre_n();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 5:
            do{
                mayor_menor();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 6:
            do{
                triangulo_asteriscos();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 7:
            do{
                pares();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 8:
            do{
                promedio_mayor_y_menor();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 9:
            do{
                potencias();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 10:
            do{
                cuadrado_impares();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 11:
            do{
                tabla_fac();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 12:
            do{
                tabla_caf();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 13:
            do{
                fn_trigo_v2();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 14:
            do{
                raices();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 15:
            do{
                liga_fut();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 16:
            do{
                amortizacion();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 17:
            do{
                ahorro_10();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 18:
            do{
                ahorro_15();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 19:
            do{
                renta_telefono();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 20:
            do{
                pob_est();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 21:
            do{
                fibonacci();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 22:
            do{
                metros_1an();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 23:
            do{
                metros_nam();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 24:
            do{
                pies_nam();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 25:
            do{
                reporte_12_esc();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 26:
            do{
                reporte_n_esc();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 27:
            do{
                costo_de_produccion();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 28:
            do{
                costo_produccion_8();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 29:
            do{
                control_calidad();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 30:
            do{
                fallas();
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 31:
            do{
                
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        case 32:
            do{
                
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        default:
        if (op>33){
                cout << "Ingresa una de las opciones anteriores.\n";
            }
            break;
        }
    } while (op!=33);
    //return 0;
}