// introducción tardia a caracteres y sus datos de entrada y salida ideales


/* Anteriormente nos habíamos extendido en los datos de entrada y salida en una cadena de caracteres (strings); pues bien, le llegó el turno a los caracteres propiamente.

   El equivalente de "gets" o "fgets", como funciones para almacenar datos de entrada en cadenas de texto o "strings"; para caracteres,
   es la función "getchar". Esta función se encarga de almacenar datos de entrada también, pero solo de caracteres y no cadenas de caracteres.
   Funciona más o menos igual, la única diferencia es que "getchar" sólo recopila un caracter (o incluso número) por entrada, no cadenas. Tal que así:
   */

#include <stdio.h>

int main(void){

  char caracter;

  puts("inserte un caracter: ");
  caracter = getchar();
  // cambia un poco la sinopsis en relación a sus homologos "fgets" o "gets"; pues, acá se llama a la variable de tipo "char" y se iguala a su respectiva función "getchar();".
  // en strings, el almacenamiento de datos de entrada con "fgets" o "gets"; sería así: fgets(caracter, n, stdin);, y gets(caracter);, respectivamente.

  puts("el caracter insertado fue: ");

  // Ahora, también hay una forma propia para imprimir datos de salida en caracteres (y no usar las funciones "puts" o "printf" propias de "strings"); esa función es: putchar

  putchar(caracter);
  // realmente cambia muy poco la sinopsis en relación a su homologo para cadenas de texto o strings: "puts". Se manejan, díria yo, practicamente igual.


  return (0);
}
