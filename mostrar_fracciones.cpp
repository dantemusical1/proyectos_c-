#include <iostream>
#include <vector>
#include <conio.h>

using namespace std;

void menuInicio();

int main() {
    menuInicio();
    return 0;
}

void menuInicio() {
    /* Calculadora de fracciones */
    cout << "Indique el numero de fracciones que va a utilizar" << endl;

    int num_fracciones;
    cin >> num_fracciones;

    cout << "Su numero de fracciones es " << num_fracciones << "?" << endl;
    cout << "\t a) si \n \t b) no" << endl;

    char opcion;
    cin >> opcion;

    switch (opcion) {
        case 'a': {
            vector<int> fracciones(2 * num_fracciones);
            cout << "Ingrese los valores de las fracciones (a, b, c, d, ...):" << endl;

            for (int i = 0; i < 2 * num_fracciones; ++i) {
                if (i % 2 == 0) {
                    cout << "Ingrese el numerador nro " << (i / 2) + 1 << ": ";
                } else {
                    cout << "Ingrese el denominador nro " << (i / 2) + 1 << ": ";
                }
                cin >> fracciones[i];
            }

            cout << "Las fracciones son:" << endl;
            for (int i = 0; i < 2 * num_fracciones; i += 2) {
                cout << fracciones[i] << "/" << fracciones[i + 1] << "; ";
            }
            cout << endl;
            break;
        }
        case 'b':
            cout << "Volver al menu de inicio" << endl;
            menuInicio();
            break;
        default:
            cout << "La opcion no es valida, por favor ingrese un valor ya sea a o b" << endl;
            menuInicio();
            break;
    }
}
