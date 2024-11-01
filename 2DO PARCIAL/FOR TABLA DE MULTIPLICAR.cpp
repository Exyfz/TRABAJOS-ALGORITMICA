#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "INGRESE NUMERO PARA DETERMINAR SU TABLA DE MULTIPLICAR: " <<endl;
    cin >> num;

    cout << "Tabla de multiplicar del " << num << ":" <<endl;
    for (int i =1; i<=10; i++){
        cout << num << "x" << i << "=" << num * i <<endl;
    }
    return 0;
}
