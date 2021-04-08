/* Es una versión generica de "fgetc" que nos permite obtener cualquier cantidad de información.
   "fread" nace quizas por una necesidad que no cubría, de la manera más eficientemente, "fgetc":
   resulta que puede ser un poco ineficaz si obtenemos caracteres de uno en uno, iterando a través del archivo un caracter a la vez.

   No sería mejor obtener 100, 500 caracteres (los que nos interese al fin), de un sólo golpe, a la vez? Pues bien, "fread" y su función complementaria "fwrite" lo permiten:
   es así porque ya estaremos en la facultad de poder leer una cantidad arbitraria (y deseada) de información de un archivo y la almacenaremos en algún lugar temporalmente.
   Quiere decir entonces que, es viable almacenar toda la información recopilada haciendo uso de matrices y no de una única variable,
   ya no es sólo un valor tomado al ejecutar el código (aunque se terminen, al final, tomandose todos los valores con un bucle), no;
   sino que, estamos almacenando varios valores al mismo tiempo; y que, como no es sólo uno, sino varios; por eso se hace necesario hacer uso de matrices:
   para darle más de un espacio (que deben ser correspondientes, recuerde, a un mismo tipo de dato y clasificación) a más de un valor posible.
   Usted sabe que dentro de una variable no se asume más de un valor; y, si eso quisiera, debe almacenarlos entonces en una matriz (que deben ser de un mismo tipo de dato).

   Continuemos...
   Puntualmente pasamos 4 argumentos para la función "fread"; en su orden: 1. la matriz (toda matriz es un puntero) donde se guardará toda la información obtenida (buffer),
   2. qué tan grande será cada unidad de información, el tipo de dato (size), 3. cuántas unidades de información deseamos adquirir (cuántos valores de ese tipo de dato),
   4. un puntero que apunte a la ubicación donde obtendremos la información de nuestro interés, que apunte a un archivo al que queramos leer (file pointer).

   Veamos esto con un ejemplo.
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void)
{
  // declaración de una matriz de 10 enteros, ocuparemos de la parte de la memoria "stack" 40 bytes propios de 10 enteros (4 bytes por int)
  int destino[10]; // buffer1

  /* Lo que sucederá es que leeremos 40 bytes de información del archivo apuntado por "objetivo" y serán almacenados en un lugar de la memoria donde hayamos reservado 40 bytes;
     ese lugar hemos decidido que sea la matriz declarada "destino", la cual es capaz de contener 10 unidades de 4 bytes. Entonces, en total, puede contener 40 bytes de info.
     */
  // En resumen, estaremos leyendo 40 bytes del archivo apuntado por "objetivo" para almacenarlos en el array "destino".

  FILE *objetivo = fopen("objetivo.c", "r"); // file pointer

  fread(destino, sizeof(int), 10, objetivo);

  // Lo que se guarda en "destino" es la codificación en forma de bytes del texto que hay en "objetivo.c"

  /* Sin embargo, no necesariamente tenemos que almacenar la información, que fue recopilada de "objetivo", en la parte de la memoria "stack" (por medio de un Array declarado);
     podríamos también almacenar esa información en la parte de la memoria "head", por medio de otro puntero que haga uso de la función "malloc" (siendo éste el nuevo buffer).
     Veamos un ejemplo.
     */

  // le pediremos al "head" que nos dé un espacio de memoria dinamica libre para almacenar un total de 80 valores "double" a los cuales está apuntando el puntero "destino2".
  // Estos valores que se van a almacenar en la ubicación a la que apunta "destino2" (otro Array) provienen, recuerde, del mismo file pointer que estamos empleando: "objetivo".

  double *destino2 = malloc(sizeof(double) * 80); // buffer2, asignamos memoria dinámica del "head", exactamente 640 bytes (80 * 8 bytes x double).

  /* Lo que pasará es que, la llamada de "fread", esta vez, recopilará 640 bytes de información provenientes del archivo al que apunta "objetivo"
     (el cuál está leyendo para tomar de sí sus valores); y, dicha información, la va a almacenar, ahora, en otro espacio al que apunta "destino2".
    */

  fread(destino2, sizeof(double), 80, objetivo);

  free(destino2);

  /* Ahora, puntualmente, también podríamos tratar a "fread" como una llamada a "fgetc"; pues, en este caso, sólo intentamos obtener un carácter del archivo.
     Y, lo dicho, como sólo vamos a contener un valor (un caracter solamente), no necesitamos hacer uso de un Array.

     La novedad de esto es que, cuando sólo tenemos una variable, necesitamos pasar la dirección de esa variable; porque, si bien recuerda, el primer argumento para "fread"
     es un puntero a la ubicación y memoria donde queremos almacenar la información; pues, recordemos el nombre de una matriz o una matriz en sí misma (Array) es un puntero,
     y es por esa razón que no necesitamos hacer algo como "una matriz con un ampersand"; por ejemplo, no necesitamos hacer en los previos casos: "&destino" o "&destino2".

     Sin embargo, una variable caracter (char) no es una matriz ni mucho menos un puntero, por lo que sí se hace uso de parametros de dirección (&) para indicar que...
     es ahí en esa dirección, en esa variable "char", donde queremos ir para almacenar ese byte de información, correspondiente a un "char", que proviene de "objetivo".

     Veamos esto.
     */

  char c;
  fread(&c, sizeof(char), 1, objetivo);

  fclose(objetivo);

  return 0;
}
