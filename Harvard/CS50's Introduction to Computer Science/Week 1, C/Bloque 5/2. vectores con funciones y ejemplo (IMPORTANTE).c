// Introducir elementos a un vector con una función // trabajando conjuntamente con vectores pero de funciones diferentes (no es necesario paso por metodo de referencia)

#include <stdio.h>

void fun (int a[]);
void imprimir (int x[]);

int main () {

  int v [2];

  fun (v);
  imprimir (v);



  system ("pause");
  return 0;

}

void fun (int a[2]) { /* Esta vez hemos puesto corchetes a la variable "a", porque "a" de la función "fun" trabajará de la mano con la variable
                         "v" de la función principal, y esa variable es un vector.
                         Es opcional señalar acá la cantidad de elementos del vector [2], pero en matrices es obligatario
                         (por lo menos, en su último par de corchetes)... se hace para reservar espacio de memoria; si no se hace, el compilador cae en bug.
                         Ya hablaremos más a fondo sobre matrices en su momento: Apartado 4, bloque 5.
                         */

  /* acá se pone el vector que va a reemplazar los valores o ejecutar esta función dentro del vector de la función principal, según su orden de colocación.
     Es decir, "a" definirá a "v", ya sea en valor o propiamente en una función (en que lo que le pase a "a" le suceda a "v", para que se entienda)
     */

  // Por lo general, para introducir datos en un vector se hace uso de bucles, y este caso no es la excepción. Vamos allá.

  int i; // contador

  for (i = 0; i < 2; i++) { /* La condición del bucle (i < 2) es la que evalua el limite de las posiciones del vector; estas posiciones comienzan desde 0 [0]
                               (por eso también es que se inicializa el contador "i" dentro del bucle for con 0 (i = 0), porque las posiciones del vector empiezan desde 0);
                               Entonces, como han sido 2 elementos o variables definidas para el vector "v" de la función principal por medio del
                               ahora vector "a" de la función "fun", queremos entonces que se incremente el contador (i) hasta menos que 2 (i < 2).
                               Sería desde 0 a 1 (0 y 1); es decir, las posiciones [0] y [1] del vector "v", el cual se compone justamente por sólo 2 elementos.
                               */

      printf ("Introduce un valor para el vector: ");
      scanf ("%i", &a[i]); /* Acá definimos por bucle todos los valores del vector "a", posición * posición desde a[0] hasta a[1].
                              Entonces, qué es lo que pasará cuando llamemos la función "fun" dentro de la función principal "main", tal que así: "fun (v);"
                              pues, que lo que le pase al vector "a" de la función "fun" le pasará a la "v" de la función principal "main".
                              Es decir, el vector "v" de la función "main" va a adquirir los valores del vector "a" de la función "fun". Así de simple.
                              Y, esto, lo hace sin necesidad de hacer el paso por referencia (no se usaron parametros de dirección ni punteros):
                              pasa que para los vectores no es necesario hacer esto (no necesitan hacer paso por referencia).
                              */


  }

}

void imprimir (int x[2]) {

  /* acá se pone el vector que va a reemplazar los valores o ejecutar esta función dentro del vector de la función principal, según su orden de colocación.
     Es decir, "x" definirá a "v", ya sea en valor o propiamente en una función (en que lo que le pase a "x" le suceda a "v", para que se entienda)
     */

  int i;

  for (i = 0; i < 2; i++) {
      printf ("%i, ", x[i]); /* Con la función "imprimir" pasa algo igual que con la función "fun",...
                                qué es lo que pasará cuando llamemos la función "imprimir" dentro de la función principal "main", tal que así: "imprimir (v);"
                                pues, que lo que le pase al, ahora, vector "x" de la función "fun" le pasará también al vector "v" de la función principal "main".

                                y qué hemos decidido que le pasará al vector "x" de la función "imprimir"?; pues, que simplemente se imprimieran sus elementos o variables;
                                como el vector "x" no tiene variables o elementos definidos, simplemente se imprimirían los elementos o variables que ya han sido definidos
                                en el vector "v" de la función "main" a través del vector "a" de la función "fun".
                                */

  }

  printf ("\n\n");

  /* Aclaremos algo: esto mismo que hicimos con esta otra función independiente "imprimir" lo hubieramos podido hacer dento de la misma función "fun",
     tal cual lo hicimos en el anterior ejercicio (apartado 1.1, bloque 5);
     sólo que quisimos crear una función completamente independiente que tuviera el único objetivo de sólo imprimir el vector y sus elementos o variables,
     del vector "v", ya pasadas por tecla en la primera función independiente "fun".

     */
}
