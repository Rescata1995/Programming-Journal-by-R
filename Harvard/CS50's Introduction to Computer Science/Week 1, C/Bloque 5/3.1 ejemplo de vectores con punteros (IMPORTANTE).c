
/* Trabajando conjuntamente con vectores pero de funciones diferentes; sin embargo, esta vez, sí haremos paso por metodo de referencia;
   Es decir, trabajaremos vectores con punteros a la vez. (lo que habiamos explicado antes que no era necesario hacer en el apartado 2, bloque 5)
   */

   // Ejemplo: Introducir valores numericos en un array mediante Punteros.

#include <stdio.h>

void funcion (int *vec);
void leer (int *vec);

int main () {

  int vec [3];

  funcion (vec); // al llamar la función independiente en la función principal, trabajando con vectores, no se necesita poner el parametro de dirección (&) tampoco.
  leer (vec);    // incluso aunque estemos pasando valores o funciones por método de referencia (como es nuestro caso actual).

  system ("pause");
  return 0;

}

void funcion (int *vec) {

// Recuerde, dentro de la declaración de la función del tipo "void"...
/* acá se ponen las variables que va a reemplazar los valores o ejecutar esta función dentro de las variables de la función principal, según su orden de colocación.
   En consecuencia, es acá donde se colocan las variables punteros (las que van con el asterisco, *).
   Sin embargo, hemos definido esta nueva variable (que realmente es un vector) con el mismo nombre del vector de la función principal "main": "vec".
   Es decir, "*vec" de la función "funcion" definirá a "vec" de la función principal "main",... (en que lo que le pase a "*vec" le suceda a "vec", tal que así).
   Esto se puede porque son variables creadas en funciones diferentes; entonces, ninguna puede influir en el valor de la otra por sí mismas; es así debido a que,
   aunque reciban el mismo nombre por variable, no dejan de ser variables diferentes. Lo mismo pasa con las variables "i" que hacen de contador en cada función diferente.
   */

  int i;

  for (i = 0; i < 3; i++) {

    printf ("Introduce un valor para la posicion %i: ", i + 1); // como i empieza desde 0, pero gramaticalmente uno habla de primera posición o primer elemento (1), queda: i+1.
    scanf ("%i", (vec+i));
    /* Cuando estemos trabajando con scanf (&), dentro de vectores y punteros a la vez, en la funciones independientes no podemos poner: &*(vec+1);
       entonces, sólo se llama al vector de forma limpia y ya: (vec+i). (quizás también sea el mismo tratamiento para las variables y no vectores). No lo hemos podido probar.
       */
    }
}

void leer (int *vec) { // acá pasa lo mismo que pasó con la primera función void. Recuerde...

    int i;

    for (i = 0; i < 3; i++) {
        printf ("%i ", *(vec+i));
    // como acá no tuvimos que pasar por scanf; es decir, no hubo necesidad de hacer uso de un ampersand (&), sí se coloca el puntero (*) al llamar al vector: *(vec+i).

    }
}
