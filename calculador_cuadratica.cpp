#include <iostream>
#include <cmath>

using namespace std;

int main(){
    /*calculadora de numeros cuadraticos*/
    
    float a, b, c;
    
    cout << "Por favor escriba los terminos de la funcion cuadratica de la forma Ax+Bx+c=0" << endl;
    cout << "Escriba el valor de A: ";
    cin >> a;
    cout << "\n";    
    cout << "Escriba el valor de B: ";
    cin >> b;
    cout << "Escriba el valor de C: ";
    cin >> c;
    
    /*Aqui ponemos el discriminante*/
    float discriminante = pow(b, 2) - 4 * a * c;
    cout << "Tu discriminante es de " << discriminante << endl;
    
    if (discriminante > 0) {
        float x1 = (-b + sqrt(discriminante)) / (2 * a);
        float x2 = (-b - sqrt(discriminante)) / (2 * a);
        cout << "Las soluciones son x1 = " << x1 << " y x2 = " << x2 << endl;
    } else if (discriminante == 0) {
        float x = -b / (2 * a);
        cout << "La solucion es x = " << x << endl;
    } else {
        cout << "No hay soluciones reales." << endl;
        cout << "Pero aqui estan las soluciones imaginarias:" << endl;
        float parte_real=-b/(2*a) ;
        float discriminante_imaginario=-discriminante;
		float parte_imaginaria=sqrt(discriminante_imaginario) / (2 * a);
        cout << "x_1="<<parte_real<<"+"<< parte_imaginaria<< "i"<<endl;
        cout << "x_1="<<parte_real<<"-"<< parte_imaginaria<< "i"<<endl;
    }
    
    return 0;
}
