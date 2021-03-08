// Introducción a vectores con punteros (Sí, aclaremos algo, sí se pueden trabajar vectores y punteros a la vez: sólo que no es necesario).

// Existe otra forma de llamar a los elementos o variables de un vector, es por medio de "punteros". (Sin necesidad de llamarlos a través del número de sus posiciones direct.)

#include <stdio.h>

int main () {

  int i;
  int vec[] = {1, 2, 3};

  for (i = 0; i < 3; i++) {
      printf ("%i, ", *(vec+i));
      /* Si se da cuenta cambió la estructura a la hora de imprimir los elementos del vector, antes era así: "vec[i]".
         Ahora el llamado se ha hecho por medio de "punteros", quedando así: "*(vec+i)". Si por ejemplo,
         ahora quisieramos imprimir solamente al primer (1er) elemento del vector "vec", sería así: (vec+0), y no vec[0].
         En el ejercicio del siguiente apartado lo trabajaremos de esta forma.

         */

  }

  system ("pause");
  return 0;

}
