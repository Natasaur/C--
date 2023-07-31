#include<iostream>
#include"estructurada_primer.h"
int main() {
    int op;
    op=0;
    do
    {
        cout << "/---Seleccione una opción---/\n";
        cout << "1. Primer Parcial\n";
        cout << "2. Segundo Parcial\n";
        cout << "3. Salir\n";
        cin >> op;
        switch (op)
        {
         case 1: //------------------Primer Parcial--------------------------------------------//
        do{
            op=0;
            cout << "/---Seleccione una opción---/\n";
            cout << "1. Estructurada\n";
            cout << "2. Salir\n";
            cin >> op;
            switch (op)
            {
            case 1: //------------------------------Estructurada------------------------------//
                estructurada_primer();
                break;
            
            default:
                break;
            }
            
        } while (op!=2);
            break;
        case 2: //------------------------Segundo Parcial-----------------------------------------//
        
        default:
            break;
        }
    } while (op!=3);
    return 0;
}