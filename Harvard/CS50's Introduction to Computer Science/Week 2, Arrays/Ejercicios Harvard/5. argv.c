#include <stdio.h>
#include <cs50.h>

int main (int argc, string argv[])
{
    if (argc == 2) // enumera la cantidad de argumentos, pasados por la línea de comandos, antes de ser ejecutado un programa en cuestión.
    {
        printf("Hello %s.\n", argv[1]);
        /* donde argv[0] sería el programa en sí, nuestro primer argumento (de tipo "string") al ser ejecutado este ejecutable (es decir: ./argv);
           entonces, cualquiera que sea la palabra (string), que escribamos al lado del ejecutable "argv" antes de ser ejecutado:
           pasaría a ser nuestro 2do argumento (nuestra 2da "string") identificado también como: argv[1], por qué se identifica así?
           Pues, porque es el segundo elemento, argumento o cadena de texto en últimas pasada por la línea de comandos. Si suponemos que
           esa cadena de texto sería mi nombre: "Roberto", entonces, la línea de comando, antes de ser ejecutada, quedaría algo así:
           "./argv Roberto". Y, bajo los parametros establecidos en nuestro programa (incluida su sentencia de control If),
           lo que me imprimiría sería lo siguiente: "Hello, Roberto.", porque justamente hemos llamado dentro de la función "printf"
           la cadena de texto: argv[1], que sería el equivalente a nuestro segundo argumento pasado por la línea de comandos; es decir, "Roberto".

           Pero, no se le olvide tener en cuenta que, si le hubiera pasado más o menos argumentos a la línea de comandos, entonces sólo se
           imprimiria la oración "Hello World." (porque así lo hemos establecido en la estructura condicional de la sentencia de control If).
           */
    }
    else
    {
        printf("Hello World.\n");
    }
}

/*  Basicamente lo que hemos estado haciendo siempre es pasarle los valores, por medio de la línea de comandos, a las cadenas de texto de la matriz
    (de cadenas de texto también) que hemos decidido que se llamará "argv", pero puede tomar cualquier nombre.
    Es simplemente inicializar una variable (en este caso ese tipo de variable es de un tipo de dato propio a una matriz (array) de cadenas de texto),
    sólo que por medio de la línea de comandos, justo antes de ser ejecutado un programa en cuestión.
    */
