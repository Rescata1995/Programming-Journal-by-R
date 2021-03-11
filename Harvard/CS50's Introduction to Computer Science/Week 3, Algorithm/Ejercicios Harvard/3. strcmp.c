/* Este ejercicio consiste en comprobar qué información tenemos o no a partir de una base de datos de nombres registrados; es decir, pasar por tecla
   (pero pasarlo como argumento de la línea de comandos también) un nombre para verificar la existencia del mismo en nuestra base de datos.
   EL programa debe funcionar de tal manera que, si el usuario no se pasa exactamente un argumento adicional en nuestra línea de comando,
   antes de ejecutar propiamente el programa, nos mande un mensaje de error.

   Si en efecto pasa solamente un argumento en la línea de comando, el programa puede responder a eso de dos formas:
   1. Que nos confirme que efectivamente sí se encuentra registrado el nombre, pasado por tecla, en nuestra base de datos;
   y, 2. Que, en caso que el nombre pasado por tecla no esté en nuestra base de datos registrado, el programa también lo deje claro.

   La base de datos quedará creada en una variable global de tipo Array de cadena de texto (string), donde estarán todos nuestros nombres registrados.
   */

#include <stdio.h>
#include <cs50.h>
#include <string.h>

string NAMES[] = {"Juancho", "Danna", "Gustavo", "Duque", "Roberto", "Marilyn", "Carolina", "Nando"};

int main(int parametros, string name[])
{
    if (parametros == 2)
    {
        for (int i = 0; i < 8; i++) // no es posible llamar a la función "strlen", porque "strlen" no tiene la facultad de medir la longitud de matrices, sino solo de strings.
        {
            if (strcmp(NAMES[i], name[1]) == 0)
            {
                printf("In fact, your name is in our database. Success!\n");
                return 0;
            }
            /* En caso que, hubieramos optado por colocar una sentencia "else" aquí, que nos planteará la idea de que "... por el contrario (else),
               si el nombre pasado por tecla no es igual a ninguno de los nombres registrados en nuestro Array, haga tal cosa"...
               hubieramos cortado, anticipadamente, la marcha del bucle antes de que, incluso, se comparen todos los nombres propiamente del Array.
               Es así porque, en la primera iteracción en el que el bucle hubiera confirmado que, el nombre pasado por tecla, no es igual
               al primer nombre diferente que se hubiera encontrado dentro del Array de String... el programa se hubiera acabado ahí.
               El "else" tiene un efecto finalizador dentro del bucle apenas vea que su sentencia sea valida (que el nombre pasado por tecla
               no sea igual al primero diferente del Array con el que se tropiece); dejando así de comprobar, entonces, los demás nombres restantes.
               Lo anterior hubiera hecho de nuestro programa, un programa defectuoso;
               pues, no hubiera sido capaz de iterar sobre todos los elementos restantes de nuestra "base de datos" creada en nuestro Array.

               Por eso es que sería necesario crear otro bucle aparte que evalue puntualmente qué queremos que haga el programa para
               que cuando, el nombre pasado por tecla, no sea igual a ningún nombre de nuestro listado de nombres de nuestro Array.
               Es lo que hacemos a continuación.
               */
        }

        for (int i = 0; i < 8; i++)
        {
            if (parametros == 2 && strcmp(NAMES[i], name[1]) != 0)
            {
                printf("Too bad, your name is not in our database yet.\n");
                return 0;
            }
            /* Explicado todo lo anterior,
            esté muy pendiente de ahora en adelante cómo se plantea trabajar ante condiciones de tipo "if/else" que estén dentro de dominios de bucles
            */
        }
    }

    else
    {
        printf("Mission Failed. Try to prove by inserting only one name as a command line argument.\n");
        return 1;
    }
}
