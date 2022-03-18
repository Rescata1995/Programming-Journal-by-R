#include <stdio.h>
#include <string.h>

int main(int num_p, char *entradas[])
{
    if (num_p == 2)
    {
        FILE *lectura = fopen(entradas[1], "r");

        if (lectura == NULL)
        {
            perror("Entrada invalida. Repita el proceso.\n");
            return 1;
        }

        char caracter;

        while (feof(lectura) == 0)
        {
            caracter = fgetc(lectura);
            printf("%c", caracter);
        }

        fclose(lectura);

        return 0;

        else
        {
            printf("Pase sólo un parametro.");

            return 1;
        }
    }
}
