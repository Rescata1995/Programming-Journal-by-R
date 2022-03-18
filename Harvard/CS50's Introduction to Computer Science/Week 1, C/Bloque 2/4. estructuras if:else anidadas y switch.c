// estructuras if/else anidadas (en el caso que tengamos más de dos opciones disponibles a considerar en las condicionales, son ideales) y switch
// Ambas son sentencias de control

/* Realiza un programa en C que lea un numero entre 1 y 4 y devuelva el dia de la semana correspondiente.
Para 1, lunes; para 2, martes; para 3, miercoles; y para 4, jueves. Ejercicio: */


#include <stdio.h>

int main () {
  int num;


  char day;

  printf("inserte un numero entre 1 y 4:  ");
  scanf ("%i", &num);
  printf("el numero que inserto es: %i.\n\n", num);
  printf("entonces,\n\n");

  // en el caso que...
  if (num == 1) {
      day = 'L';
      printf ("Lunes!\n\n"); // otra forma de asertar con el día de la semana sin necesidad de crear una segunda variable (en este caso, la variable del tipo "char": "day")
    }

  // de lo contrario, si...
  else if (num == 2) {
      day = 'M';
      printf ("Martes!\n\n");
    }

  // de lo contrario, si...
  else if (num == 3) {
      day = 'I';
      printf ("Miercoles!\n\n");
    }

  else if (num == 4) {
      day = 'J';
      printf ("Jueves!\n\n");
    }

  else {
    day = 'N'; // "N" = none
    printf ("ha insertado un numero invalidado para identificar los dias de la semana disponibles en cuestion.\n\n\n\n");
    }


  printf ("El día de la semana es: %c.\n\n", day);

  /* Haremos el mismo ejercicio anterior (dentro de un comentario) pero ahora con una estructura Switch;
  Switch es similar a las estructuras anidadas if/else: sólo que es más eficiente, más fácil de leer y más rápido.

  La estructura sintaxis para responder al ejercicio anterior con Switch es la siguiente:

  // en caso que...
  switch(num)
  {
    case 1:
      printf ("Lunes!\n\n");
    break;

    // En caso que (num) sea igual a 1 (case 1): la consola imprime (printf) "Lunes!\n\n"; y break; cierra el código de ser así, deja de ejecutar Switch. El resto, misma lógica

    case 2:
      printf ("Martes!\n\n");
    break;

    // si no coloca "break" y resulta ser validado este caso; entonces, se imprimirán todos los casos siguientes hasta el próximo "break" escrito. Así es para cualquier caso.

    case 3:
      printf ("Miercoles!\n\n");
    break;

    case 4:
      printf ("Jueves!\n\n");
    break;

    default:
      printf ("El numero no es correcto. \n");

    // "default" como la alternativa de "else" en estructuras if/else anidadas. Si no se cumple ningun caso (case) para (num), entonces se ejecuta lo que está dentro de default
  }

  */

  system ("pause");
  return 0;
}

/* Switch aplica la misma lógica excluyente de los bucles encadenados "else if": o es una cosa o es la otra; pero dos cosas no pueden ser
   (incluso aunque objetivamente pudieran serlo según la validez que tiene la condición del caso) */
