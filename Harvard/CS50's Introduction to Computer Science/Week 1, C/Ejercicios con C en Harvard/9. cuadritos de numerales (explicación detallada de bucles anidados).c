#include <stdio.h>

int main(void)
{
    int size;

    // counters
    int i, j;

    do
    {
        // inserte tamaño de cuadrado, considere que sólo puede ser de 8 pisos como máximo (1 a 8).
        printf("Defina tamano de cuadrado: ");
        scanf("%i", &size);
    }
    while (size < 1 || size > 8);

    /*
    nota: Bien debe recordar que, en los bucles, el que se mueve siempre es el de adentro (en nuestro caso, el bucle que corresponde al contador "j");
    y, el de afuera (en nuestro caso, el bucle que corresponde al contador "i") sólo se mueve cuando termina justamente el bucle de adentro, el de "j".

    Dicho lo anterior, la lógica del ejercicio para que corra, tiene que ver con que; mientras se cumpla la condición del primer bucle (contador "i"),
    su salida no sería un "printf", por ejemplo; sino, la ejecución del bucle que está dentro de él (el bucle del contador "j"): esto es lo que está
    dentro del dominio del primer bucle for (el del contador "i"), es por esa razón que se ejecuta ese código (el código de ejecutar "un segundo bucle").

    Entonces, ahora sí, mientras las condiciones del bucle de "j" sean validadas, se ejecutará el código que está dentro del dominio de él, los corchetes "{}".
    Qué es lo que está dentro de los corchetes {}?, la orden de ejecutar una función "printf" que, especificamente, muestre por pantalla un númeral "#".

    Como ya dijimos que..., "en los bucles, el que se mueve siempre es el de adentro (en nuestro caso, el bucle que corresponde al contador 'j');
    y, el de afuera (en nuestro caso, el bucle que corresponde al contador 'i') sólo se mueve cuando termina justamente el bucle de adentro, el de 'j'".

    Entonces, bajo esa misma lógica, para que se ejecute de nuevo el bucle de afuera, primero debe acabarse el bucle de adentro.
    Y qué nos dice el bucle de adentro? Pues, que nos imprima un numeral (#) hasta que el contador "j", que comienza por valer igual a 0 (j = 0),
    al incrementarse (i++), deje de ser menor que la variable "size", que si bien recuerda es inicializada por tecla;
    es decir, mientras "j" sea menor que "size" (j < size), usted me imprimirá un numeral (#).

    Entonces, si por ejemplo, hemos definido por teclado que queremos que "size" sea igual a 5... Lo que sucederá es que se van a imprimir,
    inicialmente, 5 numerales (#####, porque así lo hemos definido en nuestra condición por cada iteracción que haga nuestro segundo bucle);
    luego de ejecutarse por completo dicho bucle, el programa sale del bucle, mira si hay código restante por ejecutar, y si es el caso,
    lo ejecuta antes de volver a ejecutar una segunda validez inicial del primer bucle, que si resulta ser válido, vuelve y ejecuta lo que está dentro del dominio.

    Si se da cuenta, antes de ir a ejecutar nuestro primer bucle de nuevo, sí hay un código restante luego del segundo bucle y que debe ser ejecutado;
    y es la impresión de un salto de linea "printf("\n");". Qué hará el programa entonces? Hará un salto de línea luego de haber impreso mis 5 númerales;
    luego de eso, si no hay más código restante, es que pasará a ejecutar nuevamente nuestro primer bucle:
    validar una sola vez su condición para volver a ejecutar lo que está dentro de su dominio,
    como lo que está dentro de su dominio es la misma ejecución del segundo bloque (y por esta razón es que se cumple nuestra recordación inicial -nota-),
    entonces vuelve y me imprime 5 númerales más; pero, no se le olvide, en una segunda línea (por debajo de los primeros 5 impresos,
    recuerde el salto de línea que habíamos hecho).
    */

    for (i = 0; i < size; i++)
    {
        // printf("hola");
        for (j = 0; j < size; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}

// Explicado lo anterior, qué pasaría si le quita la caja de comentarios al "printf("hola");" del primer bucle? Debe saberlo, incluso, sin ejecutar dicho código.
