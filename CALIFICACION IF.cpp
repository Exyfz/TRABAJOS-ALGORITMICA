#include <stdio.h>
#include <conio.h>

int main()
{
    float promedio;
    printf("ingresa promedio: ");
    scanf("%f",&promedio);
    if (promedio>6)
    {
      printf("Aprobado");
    }
    else
    {
        printf("Reprobaste");
    }
    getch();
}

