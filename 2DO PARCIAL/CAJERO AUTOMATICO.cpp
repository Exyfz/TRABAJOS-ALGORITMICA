#include <iostream>

using namespace std;

int main()
{
   int MENU;
   int NIP;
   int DINERO;
   int TRANSFERIR;
   int CONFIRMAR;
   cout << "MENU PRINCIPAL \n\nQUE OPCION DESEA \n1. RETIRAR DINERO \n2. CONSULTAR SALDO \n3. CAMBIAR NIP \n4. TRANSFERIR FONDOS \n5. SALIR" << endl;
   cin >> MENU;

   switch (MENU)
   {
       case 1: // CANTIDAD A RETIRAR
       cout << "INGRESA LA CANTIDAD A RETIRAR: ";
       cin >> DINERO;
       cout << "\nSE A RETIRADO EXITOSAMENTE. ";
       case 2: // SALDO
       cout << "TU SALDO ES:";
       cout << "\n120,000$"; break;
       case 3: //CAMBIAR NIP
       cout << "ELEGISTE CAMBIAR DE NIP ";
       cout << "INGRESE SU NIP ACTUAL: ";
       cin >> NIP;
       cout << "INGRESE SU NIP NUEVO: ";
       cin >> NIP;
       cout << "HAZ CAMBIADO TU NIP"; break;
       case 4: //TRANSFERIR FONDOS
       cout << "INGRESE LA CUENTA A TRANSFERIR: ";
       cin >> TRANSFERIR;
       cout << "INGRESE LA CANTIDAD A TRANSFERIR: ";
       cin >> DINERO;
       cout << "CONFIRME TRANSFERENCIA ";
       cin >> CONFIRMAR;
       cout << "SE A TRANSFERIDO CORRECTAMENTE "; break;
       case 5: // SALIR
       cout << "HAZ SALIDO CORRECTAMENTE "; break;
       default:
       cout << "PROCES TERMINADO. "; break;
   }
}





