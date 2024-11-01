#include <iostream>

using namespace std;

int main()
{
    //pedir los numeros al usuario
   float valor1, valor2, resultado;
   char operacion;
    cout<<"¿Cual es el primer número? ";
    cin>>valor1;
    cout<<"¿cual es el segundo numero? ";
    cin>>valor2;
    //definir la operacion a realizar
    cout<<"¿Cual es la operacion que se hara? (+,-,*,/): ";
    cin>>operacion;
    //realizar la operacion basada en los datos entregados por el usuario
{
if (operacion == '+'){ //formula para la suma
    resultado=valor1+valor2;}

    else if (operacion == '-'){ // formula para la resta
    resultado=valor1-valor2;}

    else if (operacion =='*'){ //formula para multiplicacion
resultado=valor1*valor2;}

else if (operacion == '/') { //formula para la division
   resultado=valor1/valor2; }
   //mostrar el resultado
cout<<"Tu resultado es: "<<resultado<<endl;

    return 0;
}
}
