#include <iostream>
using namespace std;

// Prototipos de funciones
void menuPrincipal();
void menuBebidas();



// Contadores de bebidas

int contadorCerveza = 0;
int contadorVino = 0;       /*En todo programa es importante inicializar las
                                variantes numericas en cero a fin de limpialas*/
int contadorRefresco = 0;



int main() {
    menuPrincipal();
    return 0;
}

void menuPrincipal() {
    int opcion;

    cout << "Bienvenido a la taberna de Moe. ¿Qué deseas hacer?\n";
    cout << "1. Pedir bebidas\n";
    cout << "2. Salir\n";
    cout << "Elige una opción: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            menuBebidas();
            break;
        case 2:
            cout << "Gracias por visitar la taberna de Moe. ¡Hasta luego!\n";
            break;
        default:
            cout << "Opción no válida. Intenta de nuevo.\n";
            menuPrincipal(); // Volver al menú principal
            break;
    }
}

void menuBebidas() {

    int opcion;


    cout << "\nMenú de Bebidas:\n";

    cout << "1. Cerveza\n";

    cout << "2. Vino\n";

    cout << "3. Refresco\n";

    cout << "4. Volver al menú principal\n";

    cout << "Elige una opción: ";

    cin >> opcion;


    switch (opcion) {

        case 1:

            cout << "Has pedido una cerveza.\n";

            contadorCerveza++;

            break;

        case 2:

            cout << "Has pedido un vino.\n";

            contadorVino++;

            break;

        case 3:

            cout << "Has pedido un refresco.\n";

            contadorRefresco++;

            break;

        case 4:

            menuPrincipal(); // Volver al menú principal

            return; // Salir de la función actual

        default:

            cout << "Opción no válida. Intenta de nuevo.\n";

            menuBebidas(); // Volver al menú de bebidas

            break;

    }


    // Preguntar si desea pedir otra bebida

    char otraBebida;

    cout << "¿Deseas pedir otra bebida? (s/n): ";

    cin >> otraBebida;


    if (otraBebida == 's' || otraBebida == 'S') {

        menuBebidas(); // Volver al menú de bebidas

    } else {

        // Calcular total a pagar

        double total_a_pagar = (contadorCerveza * 5.0) + (contadorVino * 7.0) + (contadorRefresco * 2.0);



        // Mostrar resumen

        cout << "\nGracias por haber asistido al bar de Moe. Usted ha consumido:\n";

        cout << contadorCerveza << " cervezas\n";

        cout << contadorVino << " vinos\n";

        cout << contadorRefresco << " refrescos\n";

        cout << "Por tanto, su cuenta es de: $" << total_a_pagar << "\n";


        // Preguntar si le alcanza el dinero

        char dineroSuficiente;

        cout << "¿Te alcanza el dinero? (s/n): ";

        cin >> dineroSuficiente;


        if (dineroSuficiente == 's' || dineroSuficiente == 'S') {

            cout << "Gracias, vuelva pronto.\n";

        } else {

            cout << "¡Te disparo y mueres!\n";

        }

    }

}
