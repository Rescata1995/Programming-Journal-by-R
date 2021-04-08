// Es exactamente lo contrario de "fread", exactamente. Es decir, ahora es el buffer el que le manda información al puntero del archivo: del resto igual.

#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  /* Lo que sucederá es que escribiremos 40 bytes de info. sobre el archivo apuntado por "destino"; es decir, sobre el archivo que pasemos como 1er parametro en "fopen",
     sea un archivo existente o no; esa información, la que se escribirá sobre ese archivo apuntado, parte de una matriz que ya debe estar cargada de información: "objetivo".
     La matriz "int objetivo [10];", el buffer, es justamente la que tiene los 40 bytes por sus 10 enteros declarados, donde cada uno cuenta con 4 bytes de memoria.
     */

  // En resumen, estaremos pasando los 40 bytes de la matriz "objetivo" al archivo apuntado por "destino", el 1er parametro de "fopen", para ser almacenados ahí.

  int objetivo[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}; // buffer1

  FILE *destino = fopen("destino.txt", "wb"); // file pointer

  if (destino == NULL)
  {
    printf("Error: cannot open file");

    return 1;
  }

  fwrite(objetivo, sizeof(int), 10, destino);

  // Lo que se guarda en "destino.txt" es la codificación en forma de bytes de la información que tiene el Array "objetivo".

  /* Sin embargo, no necesariamente debemos tener la información, la que fue inicializada en "objetivo", en la parte de la memoria "stack" (por medio de un Array declarado);
     podríamos también tener esa información en la parte de la memoria "head", por medio de otro puntero que haga uso de la función "malloc" (siendo éste el nuevo buffer).
     Veamos un ejemplo.
     */

  // le pediremos al "head" que nos dé un espacio de memoria dinamica libre para almacenar un total de 80 valores "double" a los cuales está apuntando el puntero "objetivo2".
  // Estos valores que se van a almacenar en la ubicación a la que apunta "destino" (el mismo Array) provienen, ahora, del nuevo buffer que estamos empleando: "objetivo2".

  double *objetivo2 = malloc(sizeof(double) * 80); // buffer2, asignamos memoria dinámica del "head", exactamente 640 bytes (80 * 8 bytes x double).
  memcpy(objetivo, objetivo2); // función de la cabecera string.h para copiar una variable matriz (inicial) en otra matriz (final).

  /* Lo que pasará es que, la llamada de "fwrite", esta vez, recopilará 640 bytes de información provenientes de la dirección a la que apunta "objetivo2"
     (esa ubicación estará definida por una replica de valores de la matriz "objetivo); y, dicha información, la va a sobre-escribir en el espacio al que apunta "destino".
    */

  fwrite(objetivo2, sizeof(double), 80, destino);

  free(objetivo2);

  /* Ahora, puntualmente, también podríamos tratar a "fwrite" como una llamada a "fputc"; pues, en este caso, sólo intentamos poner un carácter del archivo en otro.
     Y, lo dicho, como sólo vamos a contener un valor (un caracter solamente), no necesitamos hacer uso de un Array.

     La novedad de esto es que, cuando sólo tenemos una variable, necesitamos pasar la dirección de esa variable; porque, si bien recuerda, el primer argumento para "fwrite"
     es un puntero a la ubicación y memoria donde queremos almacenar la información.

     Sin embargo, una variable caracter (char) no es una matriz ni mucho menos un puntero, por lo que sí se hace uso de parametros de dirección (&) para indicar que...
     es ahí en esa dirección (con fwrite), en esa variable "char", donde queremos ir para tomar ese byte de información, correspondiente a un "char", y escribirlo en "destino".

     Veamos esto.
     */

  char c = get_char("ponga un caracter: ");
  fwrite(&c, sizeof(char), 1, destino);

  fclose(destino);

  return 0;
}
