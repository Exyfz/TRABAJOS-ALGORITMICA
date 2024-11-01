#include <iostream>

using namespace std;

//FUNCION CALCULAR EL FACTORIAL DE UN NUMERO
int calcularFactorial(int numero)
{
    int factorial = 1;
    for (int i = 1; i <= numero; i++)
    {
        factorial *= i;
    }
    return factorial;
}

//FUNCION PARA MOSTRAR LA TABLA DE MULTIPLICAR DE UN NUMERO
void mostrarTablaMultiplicar(int numero)
{
    int i = 1;
    do
    {
        cout << numero << "*" << i << "=" << numero * i << endl;
        i++;
    }
    while (i <= 10);
}

int main()
{
    int opcion, numero;
    while (true)
    {
        cout << "===== MENU =====" << endl;
        cout << "1. Calcular factorial y tabla de multiplicar" << endl;
        cout << "2. Salir" << endl;
        cout << "Elige una opcion: ";
        cin >> opcion;

        switch (opcion)
        {
        case 1:
            {
                do
                {
                    cout << "Ingresa un numero entero positivo: ";
                    cin >> numero;
                    if (numero < 0)
                    {
                        cout << "Por favor, ingresa un numero positivo." << endl;
                    }
                }
                while (numero < 0);

                int factorial = calcularFactorial(numero);
                cout << "El factorial de " << numero << " es: " << factorial << endl;
                cout << "Tabla de multiplicar del " << numero << ":" << endl;
                mostrarTablaMultiplicar(numero);
                break;
            }
        case 2:
            cout << "Saliendo del programa..." << endl;
            return 0;

        default:
            cout << "Opcion no valida. Intenta de nuevo." << endl;
            break;
        }
    }
    return 0;
}
