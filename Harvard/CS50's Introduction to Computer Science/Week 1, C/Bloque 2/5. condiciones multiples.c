// condiciones multiples

/* Ejercicio: Hacer un programa que diga si un número insertado por teclado se encuentra o no entre 1 & 10 */

#include <stdio.h>

int main () {

  int num;

  printf("Inserte un numero: ");
  scanf ("%i", &num);
  printf("El numero insertado es: %i.\n\n", num);
  printf("Quiere decir que, \n\n");

  if (num >= 1 && num <= 10) {
    printf ("Su numero insertado esta entre 1 y 10.\n\n");
  }

  else {
    printf ("Su numero insertado no esta entre 1 y 10.\n\n");
  }

  /* condición multiple (cuando necesitamos validar más de una condición dentro de una misma linea de código condicional).
  En nuestro ejemplo, hemos hecho uso de una instrucción condicional && ("y") para validar más de una condición;
  "&&" quiere decir que, deseamos que se cumplan necesariamente todas las condiciones en cuestión (todas);
  en este caso que, "num" sea mayor o igual que 1 Y que "num" sea menor o igual que 10 (num >= 1 && num <= 10);

  Ahora bien, también tenemos la instrucción condicional || ("ó") para validar más de una condición también;
  sin embargo, "||" quiere decir que, sólo es necesario que se cumpla una de todas las condiciones en cuestión
  (sólo basta con una); si una condición es valida, toda la linea de código condicional será validada.

  Tanto "&&" como "||" son operadores lógicos (expresiones booleanas lógicas); en cambio,
  ">", "<", ">=", "<=" son operadores relacionales. Al igual que: "==" y "!=".

  También existe otro operador lógico no tan popular que es: !x, donde x es una variable;
  "!" lo que hace es: invertir el valor de su operando.
    Si x es "true", lo hace "false"; si x es "false", lo hace "true".
  */



  system ("pause");
  return 0;

}
