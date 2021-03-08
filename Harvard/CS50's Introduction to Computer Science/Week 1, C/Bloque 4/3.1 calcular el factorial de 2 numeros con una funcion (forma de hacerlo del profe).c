// Ejercicio. Calcular el factorial de 2 numeros con una funcion. // Solución del profe

#include <stdio.h>

int factorial (int a);

int main () {

  int x, y, fact1, fact2;

  printf ("inserte su primer valor numerico para calcular factorial: ");
  scanf ("%i", &x);

  printf ("inserte su segundo valor numerico para calcular factorial: ");
  scanf ("%i", &y);

  fact1 = factorial(x); /* se está dando la orden de que la función creada como "factorial" a través de su variable "factor" retorne o se devuelva en esta función "main",
                          especificamente dentro de la variable "x"; es decir, dentro del primer número introducido por teclado.
                          Como no podemos manipular llamados de función "sueltos", hemos decidido encasillarlo en una nueva variable llamada: "fact1".
                          En "fact1" se han transladado las condiciones de la función creada en "factorial" a la variable "x" de la función "main".
                          */

  fact2 = factorial(y); /* se está dando la orden de que la función creada como "factorial" a través de su variable "factor" retorne o se devuelva en esta función "main",
                          pero ahora dentro de la variable "y"; es decir, dentro del segundo número introducido por teclado.
                          Como no podemos manipular llamados de función "sueltos", hemos decidido encasillarlo en una nueva variable llamada: "fact2".
                          En "fact2" se han transladado las condiciones de la función creada en "factorial" a la variable "y" de la función "main".
                          */

  printf ("El factorial de x es: %i. \n\n", fact1); // lo que se imprimirá es la variable "x" de "main" siendo manipulada por la función creada en "factorial"; es decir: fact1
  printf ("El factorial de y es: %i. \n\n", fact2); // lo que se imprimirá es la variable "y" de "main" siendo manipulada por la función creada en "factorial"; es decir: fact2
                                                    // tal cual lo hemos estipulado en los llamados de función: "factorial(x);" & "factorial(y);".



  system ("pause");
  return 0;

}

int factorial (int a) { /* "int a" de la función "factorial" tomará los valores de "x" o "y" dentro de la función "main",
                           la elección de uno u otro realmente depende de la variable de la función "main" que decidamos manipular
                           ("x" o "y") al llamar la función "factorial" dentro de la función "main".
                           */

  int i, factor;

  factor = 1;

  for (i = 1; i <= a; i++) {
      factor = factor * i;

      }

    return factor;

}
