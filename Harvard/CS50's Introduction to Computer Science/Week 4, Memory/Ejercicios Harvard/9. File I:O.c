// Existe una forma de explorar, manipular y escribir código para crear archivos desde C; sí, archivos permamentes en su memoria ROM por medio de "File I/O":
// Término de la técnica que describe la toma de entrada y sálida de archivos. Estos archivos no se borran al dejar de correr su programa, se almacenan en la PC.

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

  FILE *phonebook = fopen("phonebook.csv", "a");

  // La asignación de la función "fopen" no es casual; traduce que, literalmente, estamos dando paso a la config. de un archivo desde C. Toma dos parametros:
  // 1. el nombre que queremos darle al archivo que estamos creando (incluido su formato), y 2. cómo desea crearlo (en qué estilo o con qué permisos, por ej).

  // parametro 1: "phonebook.csv" (nombre asignado al archivo); parametro 2: "a" (significa que se organiza cada registro fila por fila dentro del archivo).

  if (phonebook == NULL)
  {
    return 1; // si algo sale mal en el programa que lo cierre inmediatamente.
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

  fprintf(phonebook, "%s, %s\n", name, phonenumber); // el primer parametro que se debe pasar a la función "fprintf" es el nombre de la variable definida con "FILE".

  // por último, para cerrar el archivo, se debe dejar claro también al final de nuestro programa; tal que así:
  fclose(phonebook); // se le pasa como parametro el nombre de la variable definida con el tipo de dato "FILE".

  return 0;
}

// Usted debe compilar este archivo C y luego, como siempre, se le generará un archivo ejecutable en lenguaje maquina;
// lo ejecuta y, pasado el primer registro, de la primera ejecución del programa, podrá ver que se genera, ahora sí, un archivo permanente;
// en este caso un archivo de formato ".csv". Entonces, toda vez que corra su programa, el programa irá almacenando cada registro elaborado
// en el archivo de tipo ".csv" de forma permanente.
