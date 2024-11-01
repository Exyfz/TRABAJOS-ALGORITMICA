#include <iostream>
using namespace std;

int main()
{
    int num;
    int sum = 0;
    int mult = 1;

    cout << "Ingresa un numero (que no sea 0 para continuar, ingresa 0 para terminar):" <<endl;
    while (true)
    {
        cout<< "numero: ";
        cin >> num;
        if (num == 0)
        {
            break;
        }
        sum += num;
        mult *= num;
    }
    cout << "Total de la suma: " << sum << endl;
    cout << "Total de la multiplicacion: " << mult << endl;
    return 0;

}

