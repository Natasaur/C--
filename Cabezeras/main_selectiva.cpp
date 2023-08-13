#include<iostream>


using namespace std;
int main(){
    int op;
    do{
        op=0;
        cout << "/-----Seleccione una opción-----/\n";
        cout << "1. Ley de Newton"
        cout << "2. Calcular W,Z,X o F"
        cout << "3. Hielo Seco, Biguetas y Armazones"
        cout << "4. Hielo Seco, Biguetas y Armazones con descuento adicional"
        cout << "5. Sueldo de un empleado"
        cout << "6. Meses (Estructura Selectiva)"
        cout << "7. Convertidor de Temperatura"
        cout << "8. Ecuaciones Trigonométricas"
        cout << "9. Automóviles"
        cout << "10. Sueldo de tipos de empleados"
        cout << "11. Convertidor de moneda"
        cout << "12. Celsius a Fahrenheit"
        cout << "30. Salir"
        cin >> op;
        switch (op) {
        case 1:
            do{
                
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 2:
            do{
                
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break;
        case 3:
            do{
                
                op=0;
                cout << "¿Repetir Ejercicio?\n";
                cout << "1. Si 2. No\n";
                cin >> op;
            } while (op!=2);
            break; 
        default:
        if (op>4){
                cout << "Ingresa una de las opciones anteriores.\n";
            }
            break;
        }
    } while (op!=4);
    return 0;
}