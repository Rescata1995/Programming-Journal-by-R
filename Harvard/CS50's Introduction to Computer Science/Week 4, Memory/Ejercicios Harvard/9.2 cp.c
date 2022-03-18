#include <stdio.h>
#include <string.h>

int main(int num_p, char *entradas[])
{
    if (num_p == 3)
    {
        FILE *lectura = fopen(entradas[1], "r");
        FILE *copia = fopen(entradas[2], "w");

        if (lectura == NULL)
        {
            perror("Entrada invalida.\n");
            return 1;
        }

        char caracter;

        while (feof(lectura) == 0)
        {
            caracter = fgetc(lectura);
            fputc(caracter, copia);
        // la variable "caracter" es la que está tomando todos los caracteres del archivo "r.txt" hasta que llegue al último; luego son imprimidos, iterativamente, uno por uno.
        }

        fclose(lectura);
        fclose(copia);

        return 0;
    }

    else
    {
         printf("Pase sólo dos parametros.");

         return 1;
    }
}
