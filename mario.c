#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura, columna;
    do
    {
        altura = get_int("altura: ");
    }
    while (altura < 1 || altura > 8);

    for (int fila = 0; fila < altura; fila++)
    {
        for (int espacio = 0; espacio < altura - fila - 1; espacio++)
        {
            printf(" ");
        }
        for (columna = 0; columna <= fila; columna++)
        {
            printf("#");
        }
        printf("\n");

    }

    return 0;
}