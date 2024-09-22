/*
programa: nombre y apellido */

#include <conio.h>
#include <stdio.h>
#include <cstdio>

int main()
{
    char nombre[20], apellido[20];

    printf("introduzca su nombre: " );
    scanf("%s", nombre);
    printf("introduzca su apellido:");
    scanf("%s", apellido);
    printf("hola %s %s, buenos dias.", nombre, apellido /*, 161*/);

    getch(); /* pausa */
    return 0;
}
