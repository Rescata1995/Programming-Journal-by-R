// ampliación estructuras selectivas

/* 2do ejercicio: Realiza un programa que lea tres numeros enteros positivos distintos e imprima el mayor y el menor valor de los tres.
intente que el programa realice el menor numero de comparaciones posible entre los numeros */


#include <stdio.h>

int main () {

  int x, y, z; // hemos definido tres variables
  int max, min; // hemos definido dos variables más aparte

  printf ("Introduce el valor para x: ");
  scanf ("%i", &x);

  printf ("Introduce el valor para y: ");
  scanf ("%i", &y);

  printf ("Introduce el valor para z: ");
  scanf ("%i", &z);

  if (x > y) {
    if (x > z) {
        max = x;
    }
    else {
        max = z;
      }
    }

  else {
    if (y > z) {
        max = y;
    }
    else {
        max = z;
      }
    }

    /* se hace necesaria una estructura selectiva anidada (un if dentro de otro if);
    por lo general, recurrimos a ellas cuando la comparación es entre más de dos variables. */

  printf ("El mayor numero de los tres es: %i.\n\n", max); 


  system("pause");
  return 0;

}
