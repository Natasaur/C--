#include<iostream>
#include"estructurada_primer.h"
#include"comparativa.h"
#include"estructurada.h"
#include"repetitiva.h"
int main() {
    int op;
    op=0;
    do{
        cout << "/---Seleccione una opción---/\n";
        cout << "1. Primer Parcial\n";
        cout << "2. Segundo Parcial\n";
        cout << "3. Salir\n";
        cin >> op;
        switch (op){
            case 1:/*-------------------------------Primer Parcial-----------------------------*/
                do{
                    op=0;
                    cout << "/---Seleccione una opción---/\n";
                    cout << "1. Estructurada\n";
                    cout << "2. Salir\n";
                    cin >> op;
                    switch (op){
                        case 1:
                            estructurada_primer();
                            break;
                        default:
                            if (op>2){
                                cout << "Ingrese una opción de la lista.\n";
                            }
                            break;
                    }
                } while (op!=2);
                break;
            case 2:/*----------------------Segundo Parcial----------------------------------------*/
                do{
                    op=0;
                    cout << "/---Seleccione una opción---/\n";
                    cout << "1. Estructurada\n";
                    cout << "2. Comparativa\n";
                    cout << "3. Repetitiva\n";
                    cout << "4. Selectiva\n";
                    cout << "5. Salir\n";
                    cin >> op;
                    switch (op){
                        case 1:
                            estructurada();
                            break;
                        case 2:
                            comparativa();
                            break;
                        case 3:
                            repetitiva();
                            break;
                        case 4:

                            break;
                        default:
                            break;
                    }
                } while (op!=5);
                break;
            default:
                break;
        }
    } while (op!=3);
    return 0;
}