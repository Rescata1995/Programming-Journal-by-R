// Punteros y paso por referencia

/* Antes de introducir el concepto de "punteros" y "paso por referencia" necesitamos saber dos conceptos puntuales:
Qué es el "parametro de dirección" y qué es el "parametro de indirección o puntero". */

/* Parametro de dirección: tienen la función de indicar la dirección donde vamos a guardar o almacenar cierto valor.
El simbolo de Ampersand "&" que usamos en "scanf" es un buen ejemplo:
lo que hace es, justamente, decirle al valor de entrada que se guarde o almacene en una dirección: esa dirección sería la variable seleccionada con ampersand "&".

Parametro de indirección: Este, contrario al "parametro de dirección" que se representa con un ampersand "&", es representado por un asterisco "*" llamado en C Puntero.
Básicamente lo que hace un puntero es señalar el valor del que tenga la dirección; es decir, el ampersand "&". Ya lo veremos mejor con un ejemplo:
*/

// Intercambia los valores de dos variables con una función

 #include <stdio.h>

 int main () {


   int x, *y; // hemos creado un puntero "y".

   x = 4;
   y = &x; // estamos definiendo la "y" como la dirección de "x".

   printf ("El valor de *y es %i. \n\n", *y);

   /* lo impreso: el valor del puntero "y" es 4. Es decir, es exactamente el mismo valor que yo defini en x. Por qué pasa esto?
   Pues, justamente porque a la "y" la he definido con el valor que hay en la dirección de "x" (y = &x). Y, adicionalmente,
   hemos hecho uso de un puntero en "y" para que apunte o señale, de forma definitiva, al valor que tiene la variable de dirección. Cuál es la variable de dirección? la de "x".

   Entonces, puntero "y" (*y) está señalando al valor de "x"; pues, repetimos, es la variable de dirección para nuestro caso. Los punteros señalan a la variable de dirección.
   Y justamente el puntero "y" (*y) lo que hace es buscar el valor de quién tenga la "dirección"; es decir, quién tenga el ampersand "&"; la "x" es la que la tiene.
   */

   // A qué viene todo este rollo?

   /* Principalmente se hace uso de Punteros para facilitar la comunicación entre funciones. Por poner un ejemplo,
      anteriormente acontecía que solamente podiamos pasar un parametro de una función independiente a la función principal (return parametro1;) o bien, ninguno (con void);
      pues, bien, con el método por referencia ya podríamos pasar tantos parametros como queramos! Veamos este concepto teorico en práctica.
   */

   system ("pause");
   return 0;
 }
