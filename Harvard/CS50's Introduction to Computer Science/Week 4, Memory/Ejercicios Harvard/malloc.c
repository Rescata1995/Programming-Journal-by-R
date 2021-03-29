#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <cs50.h>
#include <stdlib.h>

int main(void)
{
    char *s = get_string("s: ");

    char *t = s;

    t[0] = toupper(t[0]);

    printf("s: %s\n", s);
    printf("t: %s\n", t);

    printf("\n");

/* Podría suponer que, al reemplazar el primer caracter de "t" (t[0]) por un caracter en mayuscula (toupper(t[0])),
   (donde inicialmente "t" replica el contenido textual de "s"),
   no variaría el primer caracter de "s" al suponer que se trata de dos variables completamente distintas al fin y al cabo (tanto "s" como "t")...
   Pero no, esta lógica es errada. Pasa que ese cambio en "t" sí afectaría sobre "s".
   Dicho lo anterior, todos los cambios que se reflejen en "t", absolutamente todos, se verán reflejados en "s", ¿por qué?
   Pues, porque realmente "t" y "s" se corresponden con los mismos bytes; es decir, se ubican en el mismo espacio de memoria del computador.
   En pocas palabras, "t" y "s" son identicos porque así fue definido (*t = s), más allá de que sean dos declaraciones de variables distintas.
   */

/* Existe una manera de replicar el contenido textual de una variable String creando otra variable String completamente independiente
   (a la variable string replicada); de tal manera que, los cambios hechos o que se hagan en alguna de las dos cadenas no influyan sobre la otra?
   Definitivamente, sí. Para eso está la función "malloc" de la biblioteca "stdlib", que representa la asignación de memoria.
   Es decir, con "malloc" podemos decirle a la computadora que, apesar de que estemos replicando el contenido literal de una variable,
   queremos que nos ubique a nuestra nueva variable (la que está haciendo la replica) en un espacio de memoria diferente a la variable replicada;
   pero, además, hay que especificar cuántos bytes de memoria vamos a ocupar en nuestra nueva variable (la variable que hace la replica).
   Pues bien, probemos.
   */

   char *a = get_string("a: ");


   // estamos asignando aquí la misma cantidad de bytes en memoria que asume "a", contando también el caracter nulo (de ahí el: "+ 1"), pero para "b";
   // y, también, en otro espacio de memoria que no comprometa a "a" en absoluto. Sí, estamos dandole el mismo contenido textual del string "a" a "b";
   // pero, en otro espacio de memoria de la computadora para que sean dos strings completamente independientes de sí: "*b = malloc(strlen(a) + 1);".
   char *b = malloc(strlen(a) + 1);


   /* "NULL" representa un valor de puntero que no apunta a ninguna dirección de memoria válida.
      Cuando se inserta un valor "no valido" para el puntero, conviene cerrar el programa con "return 1;"
      NULL puede definirse como una expresión constante equivalente a los valores cero entero, cero entero largo o cero convertido.
   */
   if (t == NULL)
   {
       return 1;
   }


   // Recurrimos a un bucle también para asignar, iterativamente, caracter por caracter, los valores de "a" en "b".
   for (int i = 0, n = strlen(a); i <= n; i++)
   // se coloca "i <= n;" debido a que el bucle está evaluando un string: recuerde, ellos tienen un caracter nulo al final que también debe ser contabilizado.
   {
       b[i] = a[i]; // lo puede expresar con "notación de corchetes"...
    // *(b + i) = *(a + i); ... lo mismo que "aritmetica de punteros".
   }

   // Ahora sí, probemos que efectivamente los cambios en "b" no puedan influir sobre "a". Hagamos un cambio en "b".
   b[0] = toupper(b[0]);

    printf("a: %s\n", a);
    printf("b: %s\n", b);

    return 0;
}
