#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
  char *a = get_string("a: ");

  char *b = malloc(strlen(a) + 1);

  /* "NULL" representa un valor de puntero que no apunta a ninguna dirección de memoria válida.
     Cuando se inserta un valor "no valido" para el puntero, conviene cerrar el programa con "return 1;"
     NULL puede definirse como una expresión constante equivalente a los valores cero entero, cero entero largo o cero convertido.
  */

  if (b == NULL)
  {
      return 1;
  }

  /* Esta nueva función nos facilita todo, copia literalmente todo el contenido textual de una variable string en otra (sin necesidad de hacer bucles).
     Lo interesante de esta función es que ya se encuentra complementada inicialmente por la función "malloc"; es decir,
     se hará una copia, sí, pero será una copia totalmente independiente a la variable string original.
     Entonces, en nuestro caso puntual, será la variable string "b" (destino) la que copiará a la variable string "a" (fuente).
     */
     
  strcpy(b, a);

  // Ahora sí, probemos que efectivamente los cambios en "b" no puedan influir sobre "a". Hagamos un cambio en "b".
  b[0] = toupper(b[0]);

   printf("a: %s\n", a);
   printf("b: %s\n", b);

   /* llamamos la función "free", antes de finalizar el programa, para liberar la memoria que habíamos ocupado con "malloc" en la variable "b". Es una buena práctica que,
      lo que se generé como salida en la función "malloc", se pase como entrada en la función "free" al cierre de su programa para liberar esa memoria inmediatamente.
      Entonces, esos bytes extra de memoria que habíamos ocupado en "b" ahora quedarán libres, al finalizar el programa, para poder ser ocupados en otra cosa.
      */
   free(b);
   // Lo contrario de "malloc", que toma bytes de memoria; es "free", que los libera (a su sistema operativo). Así se evita también sobrecargar la RAM y no saturar a la PC.
   // Consejo: siempre que use Malloc debe usar Free para liberar esa memoria.


   return 0;
}
