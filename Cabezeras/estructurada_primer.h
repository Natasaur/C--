#include<cmath>
#include"INE.h"
#include"area_circulo.h"
#include"calif.h"
#include"cambio_moneda.h"
#include"cent_a_fahren.h"
#include"convertidor_moneda.h"
#include"convertir_pies.h"
#include"costo_terreno.h"
#include"dist_v_luz.h"
#include"E19_fn_trigo.h"
#include"esfera.h"
#include"fn_hiper.h"
#include"fn_trigo_v2.h"
#include"fn_trigo.h"
#include"transformar_horas.h"
#include"utilidad_impuesto.h"
#include"xywz.h"
#include"Y_ecuacion.h"
#include"ywz.h"
#include"zw.h"
#include<iostream>
#include<string>
//#include<stdlib>
using namespace std;

void estructurada_primer(){
    int op;
    op=0;
    do{
        cout << "/---Seleccione una opción---/\n";
        cout << "1. INE\n";
        cout << "2. Costo de un Terreno\n";
        cout << "3. Transformar horas\n";
        cout << "4. Promedio\n";
        cout << "5. Distancia recorrida a la velocidad de la luz\n";
        cout << "6. Ecuación Y\n";
        cout << "7. Convertir de grados Centigrados a Fahrenheit\n";
        cout << "8. Convertir Pies a otras medidas\n";
        cout << "9. Utilidad e impuesto de un producto\n";
        cout << "10. Área de un círculo\n";
        cout << "11. Convertidor de Dólares a Pesos\n";
        cout << "12. Calcular X,Y,W y Z\n";
        cout << "13. Calcular el volúmen y área de una esfera\n";
        cout << "14. Calcular Z y W\n";
        cout << "15. Convertidor de Moneda\n";
        cout << "16. Funciones Trigonométricas Hiperbólicas\n";
        cout << "17. Funciones Trigonométricas Inversas\n";
        cout << "18. Funciones Trigonométricas Inversas V2\n";
        cout << "19. Funciones Trigonométricas\n";
        cout << "20. Calcular Y, W y Z\n";
        cout << "21. Salir\n";

        cin >> op;
        switch (op){
        case 1:
        do{
            INE();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 2:
        do{
            costo_terreno();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 3:
        do{
            transformar_horas();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 4:
        do{
            calif();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 5:
        do{
            dist_v_luz();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 6:
        do{
            Y_ecuacion();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 7:
        do{
            cent_a_fahren();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 8:
        do{
            convertir_pies();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 9:
        do{
            utilidad_impuesto();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 10:
        do{
            area_circulo();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 11:
        do
        {
            cambio_moneda();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 12:
        do
        {
            xywz();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 13:
        do
        {
            esfera();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 14:
        do
        {
            zw();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 15:
        do
        {
            convertidor_moneda();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 16:
        do
        {
            fn_hiper();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 17:
        do
        {
            fn_trigo();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 18:
        do
        {
            fn_trigo_v2();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 19:
        do
        {
            E19_fn_trigo();
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
            op=0;
        } while (op!=2);
            break;
        case 20:
        do
        {
            ywz();
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
            op=0;
        } while (op!=2);
            break;        
        default:
        if (op>=21)
        {
            cout << "Ingresa una de las opciones anteriores.\n";
        }
            break;
        }
    } while (op!=21);
    //return 0;
}