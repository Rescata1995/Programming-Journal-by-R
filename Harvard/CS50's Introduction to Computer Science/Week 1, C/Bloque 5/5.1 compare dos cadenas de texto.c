// compare dos cadenas de textos

#include <stdio.h>
#include <string.h> // libreria que nos da herramientas más a fondo para manipular todo lo que tenga que ver con "Strings".

int main () {

  char t1 [5]; // string de 4 elementos máximo
  char t2 [5]; // string de 4 elementos máximo

  printf ("Introduce la primera frase: ");
  fgets (t1, 5, stdin);

  printf ("Introduce la segunda frase: ");
  fflush (stdin); /* Es recomendable ejecutar la función: "fflush(stdin);" para limpiar el "buffer" de la memoria del teclado
                     ("buffer" es el espacio de memoria en el que se almacenan datos de forma temporal);
                     esto por lo general se hace justo antes de meter por teclado, de nuevo, cualquier tipo de información.
                     Especialmente cuando usemos caracteres para utilizar con el scanf y guardar cadenas de caracteres o caracteres: tenemos que hacer esto.
                     tanto scanf como gets o fgets reciben y almacenan datos (son funciones propias de entrada de datos -tecla, Standard Input-);
                     contrario a printf y puts (funciones propias de salida de datos -pantalla, Standard Output-). 
                     Pongalo en práctica siempre. */

  fgets (t2, 5, stdin);

/*

  if (t1 == t2) { // Los strings, exactamente igual a como pasa con los vectores, no se puede comparar de esta forma. PROHIBIDO comparar strings con condicionales.
                  // lo que hace es comparar dos direcciones de memoria, mas no dos strings: por lo que es necesario el uso de funciones auxiliares.
                  // Haremos uso de la libreria <string.h> para ayudarnos con más herramientas para la manipulación de strings.

     printf ("Los dos Strings son iguales. \n");
  }

  else {
     printf ("Los dos Strings NO son iguales. \n");
  }

*/

// Preste atención ahora sí, especialmente la parte del if. Haremos uso de una herramienta de la libreria <string.h>, la cual es: "strcmp".

if (strcmp (t1,t2) == 0) { // Si pasa que "strcmp" nos devuelve un 0, significa que los strings son iguales; "strcmp" lo que hace es comparar
                          // "t1" y "t2", y si resulta que son dos strings iguales, nos devuelve un valor 0. Eso hace "strcmp" de hecho con los strings:
                          // comparar si dos strings son iguales o no; y si son iguales, almacena un valor igual a 0; de lo contrario, no.
                          // ... y estamos haciendo la comparación partiendo de ahí justamente
                          // si t1 y t2 son iguales a 0 (porque son iguales entre sí), entonces, ejecuta esto (if); de lo contrario, esto otro (else)

                          // Compare la lógica de esta linea de códigos con las demás herramientas a disposición que tiene con la libreria <string.h>

   printf ("Los dos Strings son iguales. \n");
 }

else {
   printf ("Los dos Strings NO son iguales. \n");
 }

}
