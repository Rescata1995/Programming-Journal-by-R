//  Escribe un programa que calcule el factorial de un número n entero positivo, leído por teclado

#include <stdio.h>

int main () {

  int x;
  printf ("Inserte el numero al que le desea extraer el factorial: ");
  scanf ("%i", &x);

  int i; // contador

  int factorial; // el operador matematico a ejecutar en el bucle for para poder realizar un factorial al número insertado por teclado
  factorial = 1;



  for (i = 1; i <= x; i++) {
      factorial = factorial * i; // me multiplicara todos los numeros del incremento entre sí, empezando desde el uno (1) hasta el último número (el insertado por teclado)


  }

  printf ("el factorial de %i es: %i.\n", x, factorial);


  system ("pause");
  return 0;

}

// Introducción al concepto "depurar": sobre cómo saber qué valor tiene en cada momento las variables.

/* La depuración es la forma que tenemos de saber qué valor tiene cada variable en cada momento del programa,
   y además sabemos cómo funcionará internamente el programa y que se ejecutara en cada momento. */
