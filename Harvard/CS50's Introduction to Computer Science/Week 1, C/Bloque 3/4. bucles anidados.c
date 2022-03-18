// Introducción a bucles anidados

/* Bucles anidados: no es más que ejecutar bucles dentro de un bucle ya existente, de esa forma se evidenciaría un bucle anidado;
   ahora bien, cómo funcionan? Resulta que, apenas se valide la condición del primer bucle, de ser afirmativa: su salida sería
   la ejecución de un segundo bucle (el que está anidado al primero); entonces, como resultado, ese primer bucle arroja o pone
   en funcionamiento el segundo bucle en cuestión (validando las entradas y reflejando las salidas del segundo bucle sobre el primero)
   Así mismo pues, funciona, con los bucles posteriores; terminan ejecutandose todas las iteracciones de los últimos bucles sobre los primeros.
   O, dicho de otra manera, en los bucles el que se mueve siempre o se ejecuta primero es el bucle de adentro; y, el de afuera, se mueve o se
   ejecuta solamente cuando termina dicho bucle de adentro.

   Por lo general, por cada bucle, siempre le tocará crear una variable "contador" independiente.

   De hecho, en teoria, se plantea que su utilidad se refleja cuando queremos que se incrementen numeros de forma independiente justamente,
   Veamos esto mejor con un ejercicio.
*/

// hacer las tablas de multiplicar del uno al 9.

#include <stdio.h>

int main () {

  int i, j; // contadores

  int mult;

  for (i = 1; i <= 9; i ++) { // algo curioso, esto de reducir las operaciones de los operadores aritmeticos como, por ejemplo: "i ++" o "j ++", se le conoce como: "refinar".
    for (j = 1; j <= 10; j ++) {
      mult = i * j;

      /* esto lo que hará es iniciar la tabla de multiplicación del uno, multiplicando el uno a todos los numeros (de uno en uno) hasta el numero 10;
      luego haría lo propio con la tabla del dos y así sucesivamente, hasta llegar a la tabla del 9 (tal cual lo pide así nuestro ejercicio)

      Si se da cuenta primero me ejecuta el segundo bucle sobre el primero (me pone a multiplicar todos los numeros del 1 al 10 del segundo bucle
      sobre el 1 inicial del primer bucle); y, sólo hasta que finaliza el segundo bucle (que llega su incremento hasta el número 10),
      es que procede con el incremento en una unidad del primer bucle; es decir, cuando me hace ahora la tabla del 2,... y así sucesivamente)
      */

      printf ("la multiplicación de %i * %i es: %i. \n", i, j, mult);



    }
      printf ("\n\n"); // salto de linea por cada tabla de multiplicar (por ese se pone sobre el primer bucle pero no dentro del segundo)
  }


  system ("pause");
  return 0;

}


/* bonus track: al principio pensé que pedían solamente la tabla del 9, pues yo procedí a hacer eso inicialmente. Dejaré mi código de la tabla del 9 aquí:

#include <stdio.h>

int main () {

int i; // contador

int mult; // multiplicador del 9

  for (i = 1; i <= 9; i++) {
      mult = i * 9;
      printf ("la multiplicación de %i * 9 es: %i.\n\n", i, mult);
    }

  system ("pause");
  return 0;

}

 */
