#include <iostream>
using namespace std;

int main() {
    // Declaraci�n de variables para las calificaciones de los tres parciales
    float parcial1, parcial2, parcial3, promedio;

    // Solicitar al usuario que ingrese las calificaciones
    cout << "Ingrese la calificaci�n del primer parcial: ";
    cin >> parcial1;

    cout << "Ingrese la calificaci�n del segundo parcial: ";
    cin >> parcial2;

    cout << "Ingrese la calificaci�n del tercer parcial: ";
    cin >> parcial3;

    // Calcular el promedio
    promedio = (parcial1 + parcial2 + parcial3) / 3;

    // Mostrar el promedio
    cout << "El promedio de los parciales es: " << promedio << endl;

    // Determinar si el estudiante aprob� o no
    if (promedio >= 7) {
        cout << "El estudiante ha aprobado." << endl;
    } else {
        cout << "El estudiante ha reprobado." << endl;
    }

    return 0;
}
