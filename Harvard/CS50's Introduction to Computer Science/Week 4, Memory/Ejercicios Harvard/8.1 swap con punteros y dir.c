// Intercambia los valores de dos variables con una función // trabajando conjuntamente con variables pero de funciones diferentes (paso por metodo de referencia)

#include <stdio.h>

void cambio(int *a, int *b, int *c);

int main(void)
{
    int x, y, z;

    x = 5;
    y = 10;
    z = 20;

    printf ("El valor actual de x es %i y el valor actual de y es %i. \n", x, y);
    printf ("El valor de z es %i. \n\n", z);

    cambio (&x, &y, &z); // llamado de la función "cambio" para definir los nuevos valores para las variables de la función "main", por medio de parametros de dirección.
                         // Y, según, las condiciones que se dicten en la función "cambio" (lo que hace la función en sí, para lo que fue creada).

    printf ("Ahora el valor de x será %i y el valor de y pasaría a ser %i. \n", x, y);
    printf ("El valor de z ahora es %i y no 20, su valor inicial. \n\n", z);

    return 0;
}

void cambio(int *a, int *b, int *c)
{
    /* acá se ponen las variables que van a reemplazar los valores o ejecutar esta función dentro de las variables de la función principal, según su orden de colocación.
    Es decir, "a" definirá a "x", "b" a "y" e "c" a "z"... ya sea en valor o propiamente en una función (en que lo que le pase a "a" le suceda a "x", por ejemplo);
    en consecuencia, es acá donde se colocan las variables punteros (las que van con el asterisco, *).
    */

    int aux; // aux para darle el valor de x a y e el valor de y a x dentro de la función "main" al ser llamada esta función "cambio" allá, por medio de punteros.

    aux = *a;
    *a = *b;
    *b = aux;

    *c = 100; // ahora z tendrá un valor de 100 dentro de la función "main" al ser llamada esta función "cambio" allá, por medio de punteros.
}

/* Lo que ha pasado es que, ahora, el par de tres variables comparten el mismo espacio de memoria (aunque estén en funciones diferentes);
es decir, están conectadas entre sí por medio de un metodo de referencia (hemos decidido que "a" esté conectada con "x", "b" con "y" y "c" con "z");
entonces, lo que le pase a una variable tal de la función independiente (cambio) le pasará a su variable equivalente dentro de la otra función (la función "main").
Esto, recuerde, sólo será así si hace uso de punteros y parametros de dirección,... y si así se declaran como parametros en la función personalizada.

Más allá de esta novedad, si se da cuenta, el concepto relacionado a: "cómo una función personalizada puede afectar sobre las variables de otra" es el mismo. Simplemente
queremos que la "función" (para lo que fue hecha, sus condiciones) desarrollada en la función "cambio" afecte sobre las variables, pasadas como parametros, de la función "main"
(se pasan como parametros al ser llamada la función "cambio" en la función "main"); pero tomando, como parametros guias, a los parametros propios de la función "cambio".

Continuando...
La relación lógica entre las variables de una función personalizada (en este caso, "cambio") con relación a la función "main" es más o menos así:
a apunta (a*) a la dirección de x (&x); por tanto, a* asume el valor que tenga &x (mientras a*, recuerde, no haya sido inicializada con ningún valor antes).
Lo mismo acontece con las demás variables.

Lo favorable de trabajar con parametros de dirección y punteros es que no nos condicionamos a un sólo valor retornado
elaborado en una función independiente que quiera influir, sólamente desde esa única variable, a la función principal.
(No hay limites, anteriormente no podiamos retornar ni devolver más de un valor desde "return" en la función independiente.
No habia, por ejemplo, esto: "return j, i;". No se podía.
Era sólo un valor retornado, generalmente representado en una sola variable, el que podía afectar a la función "main" al llamar a su función independiente;
pues, la función independiente sólo podía devolver a una variable en cuestión. Por ejemplo, "return j;" y listo!)

Podemos hacer uso de cuántos parametros de cambio deseemos, y no necesariamente deben estar relacionados entre sí,
(como se vio reflejado en la diferencia del tratamiento que hubo entre los parametros "a" y "b" en comparación a la variable "c" de la función "cambio"),
sobre cada variable en especifica de la función principal "main" al ser llamada,
dentro de esta función principal, la función independiente en cuestión. Además que el código lo hace más sencillo.
*/
