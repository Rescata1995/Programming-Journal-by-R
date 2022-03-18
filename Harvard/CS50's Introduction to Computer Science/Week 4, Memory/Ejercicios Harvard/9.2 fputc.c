/* Habíamos dicho que la función complementaria a "fgetc" es "fputc"; pues bien, esto sigue siendo así. Es decir, si la funcionalidad de "fgetc" es "r" (lectura),
   la funcionalidad de "fputc" es "w" o "a" (escritura); esto es así porque con "fputc", tal como se intuye por su nombre, en la literalidad significa "File put a character";
   lo que hace es poner (escribir), de un archivo idealmente inexistente, un sólo caracter. Luego de poner "ese primer caracter" de un archivo ya puede poner otros:
   ya sea sobre-escribiendo sobre lo existente, suprimiendo lo anteriormente escrito (función "w"); o adicionando texto a lo ya escrito, sin suprimirlo (función "a").

   Si por ejemplo, usted declara una función "fputc" para que trabaje con la funcionalidad "r", esto sería un "sin sentido" en sí mismo; pues, la estructura lógica
   nos plantea que, no podemos escribir con "fputc", que es eso lo que hace, si "no le damos el permiso" a "fputc" de que escriba con la funcionalidad "w" o "a".
   Evidentemente si hace lo anterior el sistema se quedará "colgado" y sufrirá por este pequeño error. Dicho lo anterior, por eso...

   Nos referimos a "archivos idealmente inexistentes" porque, como vamos a escribir; lo que interesa es, justamente lo contrario que con "fgetc", que el lienzo esté vacio.
   Es decir, como la idea es poner caracteres y no tomarlos; entonces, no precisamente tenemos que trabajar con archivos existentes, sino con archivos listos para crear.
   En caso que queramos empezar, con el archivo en cuestión, desde un punto de partida 0.

   Ahora bien, también podríamos apuntar a un archivo ya existente, al que no nos interesa hacerle cambio alguno; y hacer una copia exacta de dicho archivo
   al volver a escribir todo su contenido textual en uno nuevo (en un nuevo archivo): replicando así el comando "cp" de Linux. Esto lo haremos.

   La llamada de esta función es la siguiente: fputc('A', lectura),... en caso que queramos seguir trabajando, ahora, con el ejemplo anterior.
   Lo que hará está función, en este caso, es escribir o agregar el caracter 'A' al archivo que está apuntando el puntero "lectura"; es decir, que está apuntando a: "r.txt".
   Esto es básicamente todo; sin embargo, el uso extendido de esta función tiene mucho que ver con lo que hace el comando "cp" de Linux y eso es lo que haremos ahora.

   Entonces, como necesitamos de dos archivos, uno al que podamos copiarle (o tomar de él sus caracteres por medio de la función "fgetc"; y,
   como no necesitamos escribir nada, sino leer lo que ya tiene para poder tomar así sus caracteres, y no ponerlos; la funcionalidad que se ocupa es "r", lectura y no "w");
   entonces, luego de tomado todo el contenido textual de ese archivo 1, queremos que, en vez de imprimirlo todo por pantalla (tal como hicimos en el anterior ejercicio),
   replicando a la función "cat" de Linux; más bien, tomemos esos caracteres y los pongamos (con la nueva función "fputc") en un nuevo archivo 2 (escribiendo sobre él),
   de tal manera que hagamos una copia exacta del archivo 1 en un archivo 2; replicando así, ahora, al comando "cp" de linux.
   Entonces, para mandar el contenido textual de un archivo 1 a 2, usted aquí puede deducir que necesita apuntar a un nuevo archivo (pues ya no está trabajando con uno);
   como requiere de un nuevo archivo, necesita entonces, también, de un nuevo puntero que pueda "apuntar" a él; ahora, en ese nuevo puntero,
   usted en el parametro 1 de su función "fopen" debe indicar el nombre que quiera darle a su copia de archivo 1, el nombre al archivo 2 en últimas
   (y su previa ruta si lo amerita el caso también); y, en el parametro 2, debe indicar qué funcionalidad quiere darle a ese puntero...
   Podrá imaginar que, como en este archivo 2 necesitamos pegar (escribir) la copia que tenemos de archivo 1, la funcionalidad que se pasa ahora es "w" (escritura) y no "r".

   Veamoslo en un ejercicio.
   */

#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *lectura = fopen("/Users/robertovelasquezdean/r.txt", "r");

  FILE *copia = fopen("/Users/robertovelasquezdean/r_copy.txt", "w");

  if (lectura == NULL)
  {
  perror("Entrada invalida.\n");
  return 1;
  }

  char caracter;

  while ((caracter = fgetc(lectura)) != EOF)
  // mientras la variable "caracter", definida por cada uno de los caracteres del archivo al que apunta "lectura"; es decir, "r.txt", no llegue al final del archivo (!= EOF)
  // haga lo siguiente:
  {
    fputc(caracter, copia);
    // la variable "caracter" es la que está tomando todos los caracteres del archivo "r.txt", hasta que llegue al último; para luego ponerlos, uno a uno e iterativamente,
    // sobre el puntero "copia"; es decir, para exportar todos los caracteres de "r.txt", de a uno en uno, al archivo "r_copy.txt".
  }

  fclose(lectura);
  fclose(copia);

return 0;
}
