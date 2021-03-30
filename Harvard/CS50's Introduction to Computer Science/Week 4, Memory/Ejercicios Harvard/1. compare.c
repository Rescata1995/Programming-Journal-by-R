#include <stdio.h>
#include <cs50.h>

int main (void)
{
    int i = get_int("i: ");
    int j = get_int("j: ");

    if (i == j)
    {
        printf("Same\n");
    }

    else
    {
        printf("Different\n");
    }

    // esto funcionará correctamente bajo lo esperado; sin embargo, si comparamos entre dos cadenas de texto;
    // las dos cadenas de texto, incluso aunque sean objetivamente iguales, siempre será "diferentes" para la computadora. Por qué?

    printf("\n");

    char *cadena1 = get_string("cadena1: ");
    char *cadena2 = get_string("cadena2: ");


    if (cadena1 == cadena2)
    {
        printf("Same\n");
    }

    else
    {
        printf("Different\n");
    }

    /* Si lo ha probado, sabrá que tengo razón: esto pasa porque no estamos comparando los caracteres propiamente de cada cadena;
       sino, las direcciones de cada una de las cadenas de texto, que sí resultan ser diferentes en efecto. Por ejemplo,
       "cadena1" se encuentra en un espacio de la memoria de la pc diferente a "cadena2". (y eso es lo que se está comparando realmente):
       No sucede esa misma comparación, por ejemplo, con los números enteros...
       porque es la cadena de texto (string) la que realmente se define como una "direccion de su primer caracter". Entonces,
       en Strings no se compara realmente la literalidad de la escritura de ambas cadenas de texto, no, sino la dirección en la que se encuentra,
       cada cadena de texto, dentro del espacio de memoria del computador y la "cadena1" no puede sobreescribirse sobre la ubicación de "cadena2"
       (no son los mismos bytes para cada string)... En resumen, quizás por esto, las cadenas de texto no se comparen con operadores relacionales;
       sino, con la función "strcmp" de la biblioteca "string" que aplica otra modalidad lógica, a partir de comparar el código ASCII de cada caracter
       (en cada string), para concluir si hay igualdad o desigualdad literal entre la escritura de las dos cadenas de textos en cuestión.
      */

    printf("\n");

    // comprobemos que sí es cierto que "cadena1" se encuentra en un lugar diferente, de la memoria, que "cadena2".

    printf ("la ubi en memoria de 'cadena1' es: %p; mientras que, la ubi en memoria de 'cadena2' es: %p.\n", &cadena1, &cadena2);

    return 0;
}
