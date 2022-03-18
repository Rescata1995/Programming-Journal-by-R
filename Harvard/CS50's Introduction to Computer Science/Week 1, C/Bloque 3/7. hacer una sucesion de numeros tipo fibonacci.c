// Hacer la serie de Fibonacci hasta el términon introducido por teclado.

/* Fibonacci se entiende como una sucesión de números donde el conteo de los mismos se da al sumar los dos últimos números anteriores para dar con el siguiente;
   por ejemplo, la sucesión empieza por: 0, 1; entonces, el siguiente número después de estos dos iniciales se da sumando, justamente, el 0 y el 1 (los iniciales);
   quedando la sucesión de números ahora así: 0, 1, 1; luego, 1 + 1 (los últimos): 2; siendo la sucesión ahora así: 0, 1, 1, 2. Al final: 0, 1, 1, 2, 3, 5, 8, 13,... etc.
   */


#include <stdio.h>

int main () {

  int n; // número introducido por teclado
  int x, y;
  int i; // contador
  int result; // resultado, número 2 de Fibonacci

  printf ("Introduce un numero de terminos para la sucesion de Fibonacci: ");
  scanf ("%i", &n);

  x = 0; // número 0 de Fibonacci
  y = 1; // número 1 de Fibonacci

  // con este par de números comenzaremos la sucesión de números de Fibonacci. Sucesión inicial: 0, 1.

  if (n > 1) {

     printf ("0, 1, ");

  }

  else {
  /* de lo contrario, si "n" es menor o igual que 1, de ser uno (1), estariamos diciendo que sólo nos ejecute el primer número de la sucesión de Fibonacci
     y el primer número es 0 no podriamos entonces imprimir "0, 1, "; pues, sólo nos interesa ejecutar el primer número de la sucesión; el cual es 0.
     */

     printf ("0, ");
  }


  for (i = 1; i <= n; i++) {
      result = x + y; // sería 0 + 1; tal que result = 1; (quedando la sucesión ahora así: 0, 1, 1).
      printf ("%i, ", result);

      /* Esto imprimirá la sucesión de números desde "result"; es decir, desde el tercer número inicial de la sucesión de números.
         Si quisieramos visualizar los dos primeros números de la sucesión de números de Fibonacci (es decir, 0 y 1), como éstos nunca cambian,
         podríamos imprimirlos por fuera del bucle, justo antes de ejecutar el bucle For. Algo así: printf ("0, 1, "); (tal como lo hicimos con las condicionales)
        */

      /* result, como ya se dará cuenta, bajo la explicación inicial que ya hicimos sobre lo qué es Fibonacci:
         vendría siendo el tercer número de la sucesión inicial de Fibonacci
         (y es también el que tendría, dentro del bucle, la función de ser siempre el resultado de la suma de los dos últimos números de la sucesión en cada incremento)
         */

      /* Ahora necesitamos que se cambien los valores; es decir, que el primer número de la sucesión de Fibonacci (0) se convierta en uno (1)
         y el segundo número que era uno (1) se vuelva a convertir en uno (1). Cómo podemos hacer esto? De la sgte manera:
         */
         
      x = y;
      y = result;

  }

  printf ("\n");


  system ("pause");
  return 0;

}
