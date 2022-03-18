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
        for (int i = 0; i < 8; i++)
        {
            if (strcmp(NAMES[i], name[1]) == 0)
            {
                printf("In fact, your name is in our database. Success!\n");
                return 0;
            }
        }

        printf("Too bad, your name is not in our database yet.\n");
        return 1;

        /*
        Aquí hay algo notablemente perceptible a los ojos, una realidad que quizás lo podría hacer preguntar lo siguiente:
        Por qué se declaró una sentencia for para evaluar cuando dos palabras sean iguales, pero no se hizo lo mismo en el caso contrario;
        es decir, cuando fueran las palabras completamente diferentes, algo así como: else if (strcmp(NAMES[i], name[1]) != 0)

        Sucede que, para evitar que la frase: "Too bad, your name is not in our database yet" se imprimiera toda vez que la condición sea valida;
        es decir, cada vez que el bucle revisara, nombre por nombre en cada iteración, que el nombre pasado por tecla
        no es equivalente (!=) a ninguno de los nombres de la base de dato, qué tendríamos que hacer?
        Evidentemente, en este caso, no queremos imprimir por cada paso del bucle, lo mismo. No es conveniente en esta ocasión.
        Haríamos de nuestro código, un código defectuoso. Entonces, es precisamente necesario hacer un bucle? Definitivamente no.

        Como resultado, para los casos donde se evaluan mas de un dato (o nombre),
        con condiciones de este tipo, donde potencialmente se podría ejecutar el mismo dominio en cada iteración o paso del bucle,...
        sería viable hacer precisamente un bucle? Esto es lo que se debe preguntar siempre antes de proceder.
        Cómo le daría solución a su problema sin necesidad de imprimir repetitivamente un mensaje?
        Pues, la solución ya la hemos dado. Al igual, es la misma estructura lógica que se debe aplicar en el siguiente ejericio.

        Ahora bien, hay casos dentro de sentencias for, donde, aunque el bucle haga todas sus iteracciones, su dominio sólo se
        ejecutaría una única vez (como es realmente nuestro caso inicial: if (strcmp(NAMES[i], name[1]) == 0)),
        porque su condición sólo puede ser válida dentro de una sola iteracción del bucle, no en todas o en varias pasos que dé.
        En este caso puntual usted puede colocar al final un "return;", pero sólo en este caso puntual.
        Lo ideal es que no ponga "return;" dentro de sentencias for (o bucles en general); porque cortarían los pasos del bucle;
        y, en consecuencia, todas las iteracciones que se requiere que él haga: haciendo de nuestro código, un código defectuoso también.
        Esto es propio del efecto finalizador que tiene la función "return;", "return;" finaliza los programas
        (o más especificamente el dominio donde él se encuentre).

        Si un "return;" se encuentra dentro de un dominio (dominio de una función "main" o dominio de alguna sentenecia, tipo if o for por ej.),
        apenas el programa llegue donde esté él, inmediatamente lo finaliza. En el caso puntual de los bucles resulta muy defectuoso,
        es defectuso porque realmente se estaría limitando una valoración completa de la condición establecida dentro de la sentencia
        o del analisis de unas variables que estén en juego; pues, corta el paso de las iteraciones totales del bucle y sólo hace una.
        */
    }

    else // if (parametros != 2)
    {
        printf("Mission Failed. Try to prove by inserting only one name as a command line argument.\n");
        return 1;
    }
}
