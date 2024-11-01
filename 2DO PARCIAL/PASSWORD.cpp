#include <iostream>

using namespace std;

int main()
{
   int num, password=2266;
   do{
    cout<<"Password: ";
    cin>>num;
    if(num!=password)
            cout<<"clave incorrecta" <<endl;
   }
   while(num!=password);
   cout<<"clave correcta";
   return 0;
}
