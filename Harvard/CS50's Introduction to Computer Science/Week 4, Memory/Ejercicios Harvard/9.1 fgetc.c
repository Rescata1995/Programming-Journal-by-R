/* Ahora, es válido aclarar que hay otras funciones adicionales propias a la técnica "FILE I/O", esas son:
   fgetc() y su función complementaria fputc(); fread() y su función complementaria fwrite()... son las funciones más usadas de la línea "FILE I/O".

   En la literalidad, "fgetc" traduce: "File get a character"; lo que hace es tomar, de un archivo existente, un siguiente caracter cada vez que se corra el programa,
   suponiendo que el programa ya haya sido ejecutado antes y, en consecuencia, no sea su primera llamada de "fgetc" (porque ya tomó antes un primer caracter).

   Este caracter tomado es almacenado en una variable nueva que nada tiene que ver con el puntero del archivo, ¿cómo así? Veamoslo propiamente en su formula:
   Tenemos que la formula es así: "char ch = fgetc(<file pointer>);". Si hacemos uso de esta formula y la contextualizamos al ejercicio anterior, tendríamos que:
   "char ch = fgetc(phonebook);".

   Entonces esto traduce que, almacenaremos un caracter, tomado de un archivo existente (suponiendo que ya existia "phonebook.csv"), en una variable llamada: "ch";
   archivo existente que fue apuntado, señalado, por el puntero del archivo en cuestión que se llama: "phonebook".
   Es decir, se toma un caracter del archivo existente que está siendo apuntado por "phonebook",
   ese caracter es tomado del archivo existente que fue definido en "fopen" como 1er parametro.
   Esto, el caracter tomado, se guardaría en la variable "ch"; y, cada vez que se ejecute este programa, podríamos tomar el siguiente caracter del archivo apuntado;
   por lo que, en caso que queramos "tomar" todos los caracteres, de golpe, de un archivo existente, conviene bien pensar en la idea de incorporar un bucle en el programa.

   Ahora, en el 2do parametro de "fopen", debe pasarle la funcionalidad "r". Es decir, al archivo existente seleccionado debe pasarle una función para su lectura.
   Esto es así porque no podemos tomar un cáracter, con "fgetc", de un archivo que aún no existe, y que toque escribir inicialmente (w);
   Por el contrario, se puede tomar un caracter de lo que ya se pueda leer (r), lo que ya exista en sí.
   Por eso es que, para la funcionalidad "leer" y para la función "fgetc",
   el puntero del archivo debe apuntar hacia un archivo ya existente y no hacía un archivo que aún no existe o que pretenda crear apenas (escribir, "w" o agregar "a"):
   no puede leer ni tomar nada sobre lo que es un lienzo vacio.

   Ahora, algo importante, si quisieramos leer y escribir desde el mismo archivo; entonces debe abrir dos "punteros del archivo", separados, al mismo archivo.
   uno para leer (r) y así poder, con él, ejecutar la función "fgetc"; y el otro para escribir (w) y así poder, con ese otro, hacer lo que necesite hacer aparte,
   que tenga que ver con escritura, dentro del archivo.

   Ahora, hay funcionalidades, operaciones que queramos realizar dentro de un archivo permanente, que no son mutuamente excluyentes;
   es decir, pueden funcionar conjuntamente ambas dentro un mismo puntero de archivo.
   Si, por ejemplo, pudieramos trabajar conjuntamente la funcionalidad de "leer" y "escribir" dentro de un mismo puntero de archivo;
   el 2do parametro que se le pasaría a la función "fopen" de ese puntero de archivo sería: "r+"; es decir,
   con ese mismo puntero de archivo se podría "leer" y "escribir" sobre un mismo archivo, sin embargo, tiene que ser sobre un archivo existente.
   "w+" hace lo mismo, leer y escribir; pero, lo que hará, sería sobre-escribir sobre el archivo ya existente.

   Lo que viene, un ejercicio a desarrollar...
   Haremos un ejercicio que nos tome, lea e imprima todos los caracteres de un archivo existente (todo su contenido) en la terminal: replicando así al comando "cat" de Linux.
*/

#include <stdio.h>
#include <string.h>

int main(void)
{
  FILE *lectura = fopen("/Users/robertovelasquezdean/r.txt", "r");

  if (lectura == NULL)
  {
    perror("Entrada invalida.\n");
    return 1;
  }

  char caracter;

  /* con la función "feof" queremos comprobar si hemos llegado al final del archivo; es decir, el bucle while se ejecutaría hasta que se tome el último caracter del archivo.
     la función "feof" (End Of File) nos va a regresar un valor igual a 0 mientras (while) haya todavía contenido dentro del archivo al que está apuntando "lectura";
     en este caso puntual, repetimos, "feof" será igual a 0 mientras haya todavía caracteres para tomar; apenas ya no haya más contenido en el archivo, asumirá un valor != 0.
     */

  while ((caracter = fgetc(lectura)) != EOF)
  // mientras la variable "caracter", definida por cada uno de los caracteres del archivo al que apunta "lectura"; es decir, "r.txt", no llegue al final del archivo (!= EOF)
  // haga lo siguiente:
  {
    printf("%c", caracter);
    // la variable "caracter" es la que está tomando todos los caracteres del archivo "r.txt" hasta que llegue al último; luego son imprimidos, iterativamente, uno por uno.
  }
  // Podría hacer un salto de línea, justo después de "%c", en cada iteracción para que se dé cuenta que, efectivamente, la función "fgetc" sólo toma un caracter por ejecución.

  fclose(lectura);

  return 0;
}
