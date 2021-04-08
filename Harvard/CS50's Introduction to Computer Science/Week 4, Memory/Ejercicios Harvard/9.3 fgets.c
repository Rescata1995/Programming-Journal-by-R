// una manera más totalizadora de la función "fgetc"; pues, "fgets" toma toda una línea de código, o una cadena de texto, en vez de un solo caracter. Ambas para leer.

#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *lectura = fopen("/Users/robertovelasquezdean/rstring.txt", "r");

  /* como nos interesa esta vez leer (y de una vez tomar) toda una cadena de texto, y no sólo un caracter; debemos definir, ante todo,
     una matriz char donde se deje claro cuántos caracteres deseamos tomar por oración (o cadena de texto) del archivo al que apunta "lectura";
     esto para posteriormente escribir lo que lea, de ese archivo al que apunta "lectura", en el Array de caracteres (la matriz char en cuestión).

     Por ejemplo, vamos a definir que nuestro Array de caracteres sólo pueda ocupar, como mucho, 20 caracteres por oración;
     es decir, por cada línea de código del archivo apuntado en últimas; ese archivo apuntado, en este caso, se llama: "rstring.txt".
     "20" sería el límite de caracteres máximos que puede leer y tomar, nuestro array char (un string), por cada línea de código del archivo apuntado.

     Varias consideraciones. el Array char va a dejar de funcionar si:

     1. Se supera el límite de caracteres establecidos por definición para ser considerados; en este caso, si encuentra una oración o una línea de código,
     en el archivo apuntado, con más de 20 caracteres,... sólo lee los 20 primeros: los demás caracteres los omite.

     2. Se considera como oración o string lo que esté dentro de una misma línea de código; si hay evidencia de un salto de línea, la lectura de dicha oración finaliza ahí.
     */

  char oracion[20];

  if (lectura == NULL)
  {
    perror("Entrada invalida.\n");

    return 1;
  }

     /* 1ero. va el buffer (donde se guardará la info leida y tomada; es decir, la oración recopilada por cada línea de código del archivo apuntado),
        2do. va la Q de caracteres para cada oración (la Q de caracteres que quieres recopilar por cada línea de código del archivo apuntado)
      y 3ro. va el file pointer (el que apunta al archivo de dónde se extraerá la info, la que será leída y tomada; es decir, de dónde se extrae cada línea de código).
       */

  while (fgets(oracion, 20, lectura) != NULL)
  // establecemos la sentencia while para que, la anterior operación, se repita multiples veces mientras (while) "lectura" contenga información y no llegue a su fin (!= NULL);
  // es decir, lo que hará esta condición es que leerá todas las líneas de código de "rstring.txt" a su fin, las tomará y las exportará a "oracion"... para luego ser impresas.

  {
    printf("%s", oracion);
  }
  // Si hace un salto de línea, justo después de "%s"; se da cuenta que, por cada iteracción, efectivamente, la función "fgets" sólo toma una linea de código por ejecución.


  fclose(lectura);

  return 0;
}
