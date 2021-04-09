// una manera más totalizadora de la función "fputc"; pues, "fputs" toma toda una línea de código, o una cadena de texto, en vez de un solo caracter. Ambas para escribir.

#include <stdio.h>
#include <string.h>

int main(void)
{
  /* como nos interesa esta vez leer (y de una vez tomar) toda una cadena de texto, y no sólo un caracter; debemos definir, ante todo,
     una matriz char donde se deje claro cuántos caracteres deseamos tomar por oración (o, en últimas, por cada línea de código) del archivo al que apunta "lectura";
     esto para posteriormente escribir lo que lea (las líneas de código de ese archivo al que apunta "lectura") en el Array de caracteres declarado.

     Por ejemplo, vamos a definir que nuestro Array de caracteres sólo pueda ocupar, como mucho, 20 caracteres por oración;
     es decir, por cada línea de código del archivo apuntado en últimas. Ese archivo apuntado, en este caso, se llama: "rstring.txt".
     "20" sería el límite de caracteres máximos que puede leer y tomar, nuestro array char (un string), por cada línea de código del archivo apuntado: "rstring.txt".

     Varias consideraciones. El Array char va a dejar de funcionar si:

     1. Se supera el límite de caracteres establecidos por definición para ser considerados; en este caso, si encuentra una oración o una línea de código,
     en el archivo apuntado, con más de 20 caracteres,... sólo lee los 20 caracteres primeros, los demás caracteres los omite.

     2. Se considera como oración o string lo que esté dentro de una misma línea de código; si hay evidencia de un salto de línea, la lectura de dicha "oración" finaliza ahí.
     */

  FILE *lectura = fopen("/Users/robertovelasquezdean/rstring.txt", "r");

  FILE *copia = fopen("/Users/robertovelasquezdean/rstring_copy.txt", "w");

  char oracion[20];

  if (lectura == NULL)
  {
    perror("Entrada invalida.\n");
    return 1;
  }

  /* 1ro. va el buffer (donde se guardará la info leida y tomada; es decir, la oración recopilada por cada línea de código del archivo apuntado),
     2do. va la Q de caracteres para cada oración (la Q de caracteres que quieres recopilar por cada línea de código del archivo apuntado)
   y 3ro. va el file pointer (el que apunta al archivo de dónde se extraerá la info, la que será leída y tomada; es decir, de dónde se extrae cada línea de código).
    */

  while (fgets(oracion, 20, lectura) != NULL)
  // establecemos la sentencia while para que, la anterior operación, se repita multiples veces mientras (while) "lectura" contenga información y no llegue a su fin (!= NULL);
  // es decir, lo que hará esta condición es que leerá todas las líneas de código de "rstring.txt" a su fin, las tomará y las exportará a "oracion"... para ponerlas en "copia".

  {
    fputs(oracion, copia);
    // la variable "oracion" es la que está tomando todos las líneas del archivo "rstring.txt", hasta que llegue al último; para luego ponerlos, uno a uno e iterativamente,
    // sobre el puntero "copia"; es decir, para exportar todas las líneas de código (oraciones) de "rstring.txt", de a uno en uno, al archivo "rstring_copy.txt".
  }

  fclose(lectura);
  fclose(copia);

  return 0;
}
