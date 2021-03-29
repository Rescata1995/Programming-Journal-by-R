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

/* Existe una manera de replicar el contenido textual de una variable String creando otra variable String completamente independiente que la replique;
   de tal manera que, los cambios hechos o que se hagan en alguna de las dos cadenas de texto no influyan sobre la otra. Sin embargo, es preciso decir que...
   si bien lo anterior se logra con una función, debe ser complementada inicialmente con otra (porque queremos que las variables se hagan independientes entre sí):
   Entonces, para lograr esa finalidad, se hace necesario introducir a la función "malloc" de la biblioteca "stdlib", que representa la asignación de memoria.
   Sí, la función "malloc" consiste en asignar memoria, más nada; pero, requiere como entrada sólo un número:
   la cantidad de bytes de memoria que deseas solicitarle a la computadora.

   Es necesario este paso inicial, porque hay que asignarle un espacio de memoria independiente a la nueva variable (en este caso de tipo string)
   que desea replicar a la variable string inicial (para que ambas sean independientes entre sí y los cambios en una no afecten en la otra).
   Es decir, con "malloc" podemos decirle a la computadora que, independientemente de que vayamos a replicar el contenido literal de una variable, primero
   queremos que nos ubique a nuestra nueva variable (la que posiblemente hará la replica) en un espacio de memoria diferente a la variable potencialmente replicada;
   pero, además, se debe especificar cuántos bytes de memoria vamos a ocupar en nuestra nueva variable (la variable que hará la replica)... bien debe imaginar,
   entonces, que la cantidad de bytes de memoria requeridos deben ser congruentes con la cantidad de bytes de memoria que ocupa la variable inicial
   (que resulta ser una cadena de texto -se sugiere por esto hacer uso de la función "strlen" de la biblioteca string). Pues bien, probemos.
   */

   char *a = get_string("a: ");


   // estaremos asignando aquí la misma cantidad de bytes en memoria que asume "a", contando también el caracter nulo (de ahí el: "+ 1"), pero en "b";
   // y, ojo, aquí lo importante, esta asignación de bytes en "b" la hace en otro espacio de memoria que no comprometa a "a" en absoluto.
   // Aún no estamos dandole el mismo contenido textual de "a" hacia "b", no (no hemos copiado nada aún);
   // pero, sí que ya estará asignada la cantidad de bytes requeridos para que, en otro espacio de memoria de la computadora, pueda ser replicado "a" por "b".
   // Eso es lo que la función "malloc" nos permite hacer.
   // Esto con qué finalidad al fin? Para que, cuando realmente se haga una copia del contenido textual, sean dos strings completamente independientes de sí.
   char *b = malloc(strlen(a) + 1);
   // se pone "+ 1" porque la función "strlen" no cuenta el caracter nulo que tienen todas las cadenas de texto y toca asumirlo (incorporarlo) manualmente.


   /* "NULL" representa un valor de puntero que no apunta a ninguna dirección de memoria válida.
      Cuando se inserta un valor "no valido" para el puntero, conviene cerrar el programa con "return 1;"
      NULL puede definirse como una expresión constante equivalente a los valores cero entero, cero entero largo o cero convertido.
   */
   if (b == NULL)
   {
       return 1;
   }


   // Recurrimos a un bucle también para asignar, iterativamente, caracter por caracter, los valores de "a" en "b". Aquí hacemos una copia de "a" en "b";
   // Sin embargo, existe una función que se encarga justamente de hacer esto: copias entre variables sin necesidad de hacer paso por bucle. Lo veremos más adelante.
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
