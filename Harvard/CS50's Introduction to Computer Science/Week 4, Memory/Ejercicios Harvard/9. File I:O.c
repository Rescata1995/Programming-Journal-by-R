// Existe una forma de explorar, manipular y escribir código para crear archivos desde C; sí, archivos con datos permamentes en su memoria ROM por medio de "File I/O":
// Término asignado a la técnica que describe la toma de entrada y sálida de archivos. Estos archivos no se borran al dejar de correr su programa, se almacenan en la PC.

/* Probemos lo anterior con la creación de un programa que, cada vez que se ejecute, nos almacene nombre y número de una persona; tal que,
   lo estuvieramos registrando en una especie de directorio telefonico. Es decir, se guardarán los datos por persona, cada vez ejecutado el programa,
   en un archivo permanente dentro de la PC que se irá actualizando, con cada registro de persona hecho, toda vez que se corra el programa en C.

   No es que una memoria temporal tome los datos al correr el programa y luego los libere al cerrarlo, no! El programa realmente tendrá la facultad de ir almacenando,
   en un archivo permanente, todos los datos que le sean suministrado cada vez que el programa sea ejecutado (actualizando y almacenando información constantemente).
   Tal que así, veamos:
   */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void)
{
  /* Para crear un archivo desde C se declara por medio de un tipo de dato llamado, justamente, "FILE" (así, en mayusculas);
     y, luego, se apunta hacia el nombre que le asignamos, a nuestra variable de interés, que trabajará en función a FILE.
     En este caso la llamamos "phonebook" para que sea representativa a la función del programa en sí, lo que hace.
  */

  FILE *phonebook = fopen("phonebook.csv", "a"); // *phonebook en este caso es lo que se llama el "file pointer" (el puntero de archivo).

  // La asignación de la función "fopen" no es casual; traduce que estamos habilitando el manejo del flujo de datos de un archivo desde C. Toma dos (2) parametros:
  // 1. el nombre que queremos darle al archivo que estamos creando (incluido su formato); pero, ojo, también podría pasarsele el nombre de un archivo ya creado
  // (Digamos, por si desea manipular uno que ya tenga); y, en este caso, idealmente no se pasa solo el nombre del archivo, sino la ruta completa de dónde se encuentra.
  // Dicho esto, entonces, con FILE no necesariamente en todos los casos se crean nuevos archivos, sino que también se pueden manipular los existentes.
  // y 2. una operación que queremos realizar en él, modo de apertura, cómo deseo crearlo (si es un archivo nuevo) o, en general, cómo deseo manipularlo (con qué funciones).

  /* parametro 1: "phonebook.csv" (nombre asignado al archivo); parametro 2: "a". "a" significa: "agregar"; en este caso, como estamos frente un archivo tipo
     "hoja de calculo" (ya luego explicaremos porqué) significa que el archivo adiciona, por cada vez que se ejecute el programa, un nuevo contenido textual
     que se le sea pasado como entrada, sin borrar el contenido actual que ya tenía. Ahora, como el archivo es de formato ".csv"; es decir, es una hoja de calculo...
     el registro de la información se organiza por celdas; entonces, toda nueva entrada de contenido se genera sobre una última fila adicionada dentro del archivo.
     Es decir, se adiciona la información fila a fila cada vez que se agregue, por cada ejecución del programa, un nuevo contenido textual.

     En su conjunto, la función "a" lo que hace realmente es ir al final de un archivo, en caso que ya haya sido creado antes (si ya contiene un texto o información),
     y luego comenzará a escribir desde allí. Ojo, no sobreescribe nunca sobre lo que ya estaba escrito inicialmente; sólo agrega más información, además de la inicial,
     toda vez que sea ejecutado el programa.

     Ahora, sí existe una función que sí elimina o sobreescribe sobre un contenido inicial de un archivo (en caso que ya contenga información
     o un texto); cada vez que sea ejecutado el programa, toma la escritura nueva como entrada y la superpone, no desde donde se dejó el contenido del archivo,
     sino desde el principio del archivo en sí mismo: eliminando el registro previo y sustituyendolo por el nuevo contenido textual,
     el que entra cada vez que se ponga en marcha o se ejecute el programa en cuestión, esto lo hace la funcionalidad: "w".

     En parametro 2 también podría ir la "r" que significa "archivo sobre el que puede leer" o la "w" que significa "archivo sobre el que puede escribir".
     */

  if (phonebook == NULL)
  {
    // Nueva función "perror", para cuando queramos hacer impresiones (print) del error detectado en un programa. Este error será definido como "error de tipo 1"
    // (por el valor que va a devolver "return"); sin embargo, a sus errores también puede asignarles un mensaje que nos notifique sobre el error en cuestión.
    // Ese mensaje se asigna con "perror".
    perror("Error en la apertura del programa");

    /* si algo sale mal en el programa que lo cierre inmediatamente o, en definitva, que lo cierre si el puntero no apunta hacía ningún lado deseado de la memoria.
       (para los casos en los que no se inicialice el puntero definido con FILE o se inicialice con una ruta inexistente, se le pase un parametro 1 errado a "fopen");
       */
    return 1;

  }

  char *name = get_string("Name: ");
  char *phonenumber = get_string("Phonenumber: ");

  /* Aquí se pone más interesante:
     Resulta que si deseo guardar este "nombre" y "número" (los que sean pasados por tecla) a ese archivo de formato tipo .csv permanentemente (".csv" = hoja de calculo);
     debo hacer uso de una "extensión" de la función "printf" llamada: "fprintf". "fprintf" lo que hará, justamente, será guardar de forma permanente la información
     que le suministremos dentro de su función (tal como si la fueramos a imprimir, sólo que en este caso no se imprime nada, sino que se guarda en un archivo permanente).
     Puntualmente lo que guardará este programa será un "name" y un "phonenumber" pasados por tecla; y que, posteriormente, serían almacenados en un archivo destino
     (en este caso: "FILE *phonebook") que está siendo diseñado y configurado en este mismo programa a base de un nombre y unas especificaciones sobre al archivo en cuestión
     (definidos en los parametros de "fopen").
     */

  fprintf(phonebook, "%s, %s\n", name, phonenumber);
  // el primer parametro que se debe pasar a la función "fprintf" es el nombre de la variable definida con "FILE", el puntero del archivo.

  // por último, para cerrar el archivo (o ese flujo de datos), se debe dejar claro también al final de nuestro programa; tal que así:
  fclose(phonebook);
  // se le pasa como parametro el nombre de la variable definida con el tipo de dato "FILE"; es decir, se le pasa al puntero del archivo.

  // Luego de cerrar con "fclose" no se pueden colocar más funciones de la línea de "FILE I/O"; y, de paso, con él se libera memoria dinámica que fue tomada por "FILE".

  return 0;
}

/* Para este ejercicio puntual, usted debe compilar este archivo C y luego, como siempre, se le generará un archivo ejecutable en lenguaje maquina;
   lo ejecuta y, pasado el primer registro, de la primera ejecución del programa, podrá ver que se genera, ahora sí, un archivo permanente;
   en este caso un archivo de formato ".csv". Entonces, toda vez que corra su programa, el programa irá almacenando cada registro elaborado
   en el archivo de tipo ".csv" de forma permanente. */
