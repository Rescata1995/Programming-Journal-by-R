#include <stdio.h>

int main (void)
{
    int scores[3];
    for (int i = 0; i < 3; i++)
    {
        printf("%i.\n", scores[i]);
    }

    return 0;
}

/*  En el anterior planteamiento hemos declarado un Array unidimensional "scores" con tres elementos para ser inicializados (esto sin contar al caracter nulo);
    Sin embargo, si se da cuenta, nunca se inicializaron estos tres elementos en cuestión: scores[0], scores[1] & scores[2]. Dicho esto,
    ¿Qué sucede cuando intentamos trabajar con variables o elementos que nunca inicializamos o asignamos un valor (por ejemplo si quisieramos imprimirlos)?,
    pues se reflejaría como resultado lo que se conoce como: "Valor Basura". La misma PC, indiscriminadamente, situa sobre un espacio de memoria cualquiera
    a esas variables o elementos de matrices que no fueron inicializadas por nosotros; y, según el espacio de memoria donde sean ubicadas, asumirían un valor x.
    Entonces, un "valor basura" es cualquier valor desconocido que estuviera en la memoria,
    de cualquier programa que se estuviera ejecutando en nuestra computadora antes.
    Siendo así, cuando intentamos ir al valor de basura de; por ejemplo, scores[0], scores[1] & scores[2] como una dirección,...
    vamos a una dirección desconocida, lo que probablemente cause una falla de segmentación.

    La computadora nunca va a inicializar variables por usted, si usted no lo hace;
    simplemente las lleva a algún lugar en todo el espacio de memoria de su computadora y les asume algún valor según dicha dirección.

    Sin embargo, hay una excepción a esto. Las variables globales, las que declara por fuera (y al inicio) de todas las funciones;
    si las declara sin ser inicializadas por usted, la misma computadora convencionalmente les asignará un valor de 0 o NULL.
    */
