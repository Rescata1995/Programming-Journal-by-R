/* Estructuras selectivas (uso de condicionales en C):

Mecanismo o herramienta, en programación, que nos permite ejecutar ciertas lineas de código o no según el cumplimiento de unas condiciones especificas */
// ejemplo.

#include <stdio.h>

int main () {
  int x;
  x = 5; // esto es una asignación, cuando igualamos con un único signo "igual"; es decir, ya estamos dando por definido que x es igual a 5 (x = 5)

  if (x == 5) /* dentro del parentesis (), junto a la condicional if, se coloca lo que se debe cumplir para que se ejecute el código que estará dentro de los corchetes {};
              el signo "igual" dentro de if o en cualquier condicional debe colocarse dos veces o tres; pues, no estamos asignando nada, estamos haciendo una comparación
              (evaluar si realmente se cumple esa condición o no: en caso que se cumple, se ejecuta lo que esté dentro de los corchetes; de lo contrario, no);
              entonces, la condición que se debe cumplir es: "si x es igual a 5" (x == 5), entonces, si es igual, proceda a ejecutar el sgte código dentro de los corchetes:
              {...}. Veamoslo.  */

              {

  printf ("El valor de x es 5.\n");
  }

  else { // else significa "sino", sino se cumple la condicional "if", entonces ejecute lo que está dentro de los corchetes del "else".
  printf ("El valor de x NO es igual a 5.\n");

  }

  // ejercicio:
  /* declare una variable entera con nombre de "Y" y pida que sea iniciada con un valor entre 1 y 10 que usted solicite por teclado al usuario;
  el usuario debe poner el número equivalente a X; si adivina, obtendrá una felicitación; de lo contrario, le diremos que lo vuelva a intentar
  */

  int y;
  printf("Acierte el número x dandole valor a y. ");
  scanf("%i", &y);

  printf("el valor de y que acaba de introducir es igual a: %i\n", y);

  if (y == x){
    printf("Es correcto, el valor de y es equivalente al valor de x\n\n");
  }

  else {
    printf("No es correcto, el valor de y no es equivalente al valor de x\n\n");
  }

  // como en el anterior modelo es que se hacen juegos del tipo "Ahorcado", etc.

  system ("pause");
  return 0;

}


/* Existen otros signos comparativos dentro de las condicionales, no solo "igual que" (==).
También hay "mayor que" (>), "mayor o igual que" (>=), "menor que" (<), "menor o igual que" (<=) y "distinto a" (!=). */
