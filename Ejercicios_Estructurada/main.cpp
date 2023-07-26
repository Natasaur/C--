#include<cmath>
#include"costo_terreno.h"
#include"dist_v_luz.h"
#include"transformar_horas.h"
#include"calif.h"
#include"Y_ecuacion.h"
#include<iostream>
using namespace std;
int op;
int main()
{
    op=0;
    do
    {
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
        //break;
        cin >> op;
        switch (op)
        {
        case 1:
        do
        {
            //INE();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 2:
        do
        {
            costo_terreno();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 3:
        do
        {
            transformar_horas();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 4:
        do
        {
            calif();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 5:
        do
        {
            dist_v_luz();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        case 6:
        do
        {
            Y_ecuacion();
            op=0;
            cout << "¿Repetir Ejercicio?\n";
            cout << "1. Si 2. No\n";
            cin >> op;
        } while (op!=2);
            break;
        


        
        default:
            break;
        }
    } while (op!=21);
    
    return 0;
}