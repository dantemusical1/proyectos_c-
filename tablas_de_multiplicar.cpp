#include <iostream>
#include <cmath>
#include <limits>

using namespace std;

void mostrarTabla(int num) {
    cout << "Muy bien, la tabla de multiplicar del " << num << " es:" << endl;
    for (int k = 1; k <= 10; ++k) {
        int producto = num * k;
        cout << num << " * " << k << " = " << producto << endl;
    }
}

int main() {
    char opcion;
    do {
        int num;
        cout << "Bien, aquí estamos en la aplicación de tablas de multiplicar." << endl;
        cout << "Por favor, inserte el numero de la tabla de multiplicar que desea saber: ";
        
        while (!(cin >> num)) {
            cout << "Entrada no valida. Por favor, inserte un número: ";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        }

        mostrarTabla(num);

        cout << "¿Desea obtener otra tabla de multiplicar? (s/n): ";
        cin >> opcion;
    } while (opcion == 's' || opcion == 'S');

    cout << "Gracias por usar la aplicacion de tablas de multiplicar. Hasta luego" << endl;
    return 0;
}
