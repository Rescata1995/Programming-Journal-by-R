#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int size;

    // counters
    int i, j;

    do
    {
        // inserte tamaño de cuadrado, considere que sólo puede ser de 8 pisos como máximo (1 a 8).
        size = get_int("Defina tamano de cuadrado: ");
    }
    while (size < 1 || size > 8);

    int ast = 1;
    int esp = size - 1;

    for (i = 1; i <= size; i++)
    {
        for (j = 1; j <= esp; j++)
        printf(" ");

        for (j = 1; j <= ast; j++)

        printf("#");

        printf("\n");

        ast = ast + 1;
        esp = esp - 1;
    }
}
