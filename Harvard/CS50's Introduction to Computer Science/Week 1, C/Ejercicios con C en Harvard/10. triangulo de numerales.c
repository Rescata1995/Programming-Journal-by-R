#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int altura;

    // counters
    int i, j;

    int aux;

    do
    {
        // inserte altura de escalera, considere que sólo puede ser de 8 pisos como máximo (1 a 8).
        altura = get_int("Defina altura de escalera: ");
    }
    while (altura < 1 || altura > 8);

    for (i = 0; i < altura; i++)
    {
        for (j = 0; j <= i; j++)
        {
            printf("#");
        }
        printf("\n");
    }

}
