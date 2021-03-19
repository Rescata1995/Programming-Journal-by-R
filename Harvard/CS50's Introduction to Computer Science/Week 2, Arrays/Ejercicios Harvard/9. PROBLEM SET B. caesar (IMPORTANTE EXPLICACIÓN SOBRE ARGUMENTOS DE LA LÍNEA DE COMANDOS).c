/* En esta ocasión pretendemos crear un programa que cifre o encripte un texto, texto plano o sin formato
   (el que resulta ser entendible para el lenguaje humano);
   de tal manera que lo pasemos a texto cifrado (ocultarlo de manera reversible; es decir, que pueda ser "descifrado" luego).
   Para encriptarlo partiremos de la siguiente formula: ci = (pi + k) % 26.
   Donde, pi equivale al texto plano, sin formato (el texto medio comprensible al entendimiento humano); y, la "i" de "pi",
   equivale a cada caracter de ese texto; entonces, por ejemplo: "p0" sería el primer caracter, "p1" el segundo,
   "p2" el tercero,... y así sucesivamente.

   k es la clave "key" necesaria para poder encriptar el texto plano, el elemento necesario para lograr ese cometido.
   Equivale a un número entero no negativo pasado por tecla por el usuario que ejecuta el programa.

   y ci equivale al texto ya cifrado, texto encriptado (el texto "ininteligible" que puede ser descifrado con una clave);
   y, la "i" de "ci", equivale a cada caracter de dicho texto cifrado. Donde "c0" es el primer caracter del texto cifrado,
   "c1" sería el segundo, "c2" el tercero,... y así sucesivamente.

   A lo sumo tenga en cuenta lo siguiente: los únicos caracteres que sufrirán alteraciones (o bien serán encriptados)
   son los caracteres de tipo alfabeticos, solamente esos. Eso sí, también importante, la formula no discrimina entre
   mayusculas o minusculas; en consecuencia, debe hacer su formula inclusiva de tal manera que pase a texto encriptado
   tanto a las letras mayusculas como a las letras minusculas.

   Recuerde también que, cada caracter alfabetico se compone por un valor númerico que las define (código ASCII).
   Parta de este principio, ya que necesita operar con variables netamente númericas para poder calcular la formula de Cesar.
   (Acaso no lo deja claro el hecho que sea una formula en sí misma?).
   Si cada caracter es pi, entonces el valor númerico de cada caracter alfabetico, su código ASCII, corresponde a pi también.
   */

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int num_argumentos_linea_de_comandos, string ci[])
{
    /* el programa ejecutado "./caesar" también cuenta como un argumento de la línea de comando, por eso se pondrán 2 dentro de la sentencia if.
       Serían: "./caesar" y el número que le pasará el usuario, la "key" o clave, a nuestro programa antes de ser ejecutado;
       ambos parametros, "./caesar" y la clave, harían parte de la matriz de tipo string "ci";
       siendo "./caesar" el elemento en posición 0 de la matriz "ci": ci[0]; y, el número pasado por tecla, el elemento en posición 1 de la misma matriz: ci[1].
       Como bien sospecha, este último elemento es una cadena de texto también; sin embargo, nos interesa pasarlo más bien a formato número entero.
       Quiere decir entonces que; ci[1] debe ser convertida, de alguna manera, a una variable de tipo entero. Cómo se haría?
       */

    if (num_argumentos_linea_de_comandos == 2)
    {
        /* Parece ser que C sólo recibe como argumentos, de la línea de comandos, variables de tipo "string".
           Una explicación parpable (y digamos la más rapida) al ojo sobre esto sería que,
           como toda la matriz que define a los argumentos de la línea de comandos fue declarada una matriz de tipo cadena
           (una matriz de cadena, la matriz ci[]); en consecuencia, todos los argumentos serán una cadena de texto en sí mismo.
           Entonces, como eventualmente ese es nuestro caso, hay que llamar a la libreria "stdlib" para poder
           convertir una cadena de texto a un número entero, que es lo que nos interesa especificamente en el elemento: ci[1].
           La función que convierte un string en un entero, de dicha libreria, es: "atoi".
        */
        int key = atoi(ci[1]);

        /* Expliquemos algo para profundizar:
        "ci[1]", antes de ser pasada a variable de tipo entero, se refería realmente a una cadena de la matriz de cadena: c[];
        es decir, una variable que agrupa varias cadenas en sí. Cuando nosotros hacemos uso de argumentos en la línea de comandos,
        el segundo (2do) parametro que declaramos dentro de la función "main", vendría siendo realmente la matriz de cadena que define,
        justamente, la totalidad de los parametros o argumentos de nuestro programa, que son pasados en nuestra línea de comandos, antes de ser ejecutado.
        Es decir, "ci", en este caso, es el nombre que se le dio a la matriz de cadena de todas las "cadenas de texto"
        que pasamos en la línea de comandos; y, cada cadena de texto, se encuentra separada por un espacio. Lo que quiere decir entonces que
        "ci", inicialmente, es una matriz de cadena donde su elemento "ci[0]" es justamente la "cadena" o el nombre que recibe
        nuestro archivo ejecutable ya compilado; es decir, ci[0] es igual a "./caesar"; en consecuencia, ci[1] sería el número,
        interpretado por el compilador como cadena de texto (como lo que es o era inicialmente), pasado por el usuario como
        2do argumento de la línea de comandos antes de ejecutar el programa en cuestión.

        Es por esta razón que, para referirnos a ese segundo elemento de nuestra matriz de cadena "ci"; es decir, al número pasado como string,
        tenemos que colocar "ci[1]". Entonces, para convertir a ci[1] (nuestro 2do argumento de la línea de comandos) a número entero...
        Se tenía que declarar una nueva variable de tipo entero que se inicializará con la función "atoi" y, como estamos frente a una matriz,
        hay que llamar bien al elemento de la matriz de nuestro interés que queremos pasar a entero. Recuerde que los elementos de una matriz empiezan
        a ser contados desde una posición 0. Tal que: elemento 1, posición 0; elemento 2, posición 1... así sucesivamente.
        Como nos interasaba convertir en entero al 2do argumento de la línea de comandos (o a nuestro 2do elemento de la matriz "ci" que los define,
        que es lo mismo), entonces se copia así: int key = atoi(ci[1]); // donde "key" es el nombre que quisimos darle a nuestra variable de tipo entero.


        Aclaración: Si el usuario mete un "numero" ideal o el que se espera que el meta... para que la formula de Cesar funcione...
        Entonces, escriba todo su código válido de "main" dentro de este dominio de "if". Queremos solamente que todo el programa
        corra apenas la linea de comandos reciba sus dos argumentos correspondientes: "./caesar" y nuestra posterior "key".
        Esto es así porque será necesario el uso de "else/if" para imprimir respuestas en caso que el usuario ejecute códigos "indeseados".
        */

        // Queremos que la clave sea mayor que 0 (por lo menos) para que el programa tenga sentido alguno.
        // Recuerde que "k" debe ser un número entero no negativo.


        if (key > 0)
        {
            // printf("%i\n", key);
            // printf("Success\n");

            string texto_plano = get_string("plaintext: ");

            /*Recuerde que la variable "key" ahora es una variable de tipo entero; si partimos que "key" corresponde a "k",
            una de las variables fundamentales de la formula original de Cesar (adicional a pi, que también debe ser un número de tipo entero);
            quiere decir entonces que, la variable que se debe declarar y que reemplazaría a la formula de Cesar propiamente; es decir, a "ci"...
            debe ser también una variable de tipo entero. La llamaremos "cifrado" y, más precisamente, será una matriz de enteros.
            Se debe declarar como matriz de enteros para poder definir de forma iterativa, dentro de un bucle, el caracter cifrado de cada caracter alfabetico:
            uno a uno. Definir a "c0", lo que sería equivalente en nuestro código a: cifrado[0]; definir a "c1", su equivalente: cifrado[1], y así sucesivamente.
            */

            int cifrado[strlen(texto_plano)];

            printf("ciphertext: ");

            for (int i = 0, n = strlen(texto_plano); i < n; i++)
            {
                if (islower(texto_plano[i]))
                {
                    cifrado[i] = (texto_plano[i] + key);

                    /* Atención a lo siguiente: si al hacer la conversión, de un texto plano a texto cifrado, algún caracter supera los códigos ASCII
                       correspondientes a los caracteres alfabeticos en minusculas, que van de la 'a' a la 'z' (-y luego proseguiría el caracter '{'),
                       debemos hacer que el programa no haga dicha conversión especifica en ese caracter; y que, antes más bien,
                       vuelva a retomar su punto de partida; es decir, el punto inicial del alfabeto (la 'a') para proseguir con las conversiones
                       y se mantenga activo el proceso de encriptación. En resumen,
                       al programa sólo le interesa encriptar con los mismos caracteres de tipo alfabeticos, más nada. Entonces, cuando los supere,
                       en su código ASCII, queremos que el programa vuelva a considerarlos para hacer la conversión de texto plano a texto cifrado con ellos.
                       */

                    // Cómo se haría? La respuesta a continuación.

                    if (cifrado[i] > 'z') // Aquí planteamos que, si un caracter ya cifrado supera la 'z'... queremos hacer algo con él.

                        /* Se declara en "if" y no en "else if" porque esta sentencia, con esta condición, no necesariamente debería anular a la sentencia if
                           anterior; y, además, requerimos de la primera sentencia if para que el programa funcione con caracteres alfabeticos en minusculas.
                           En resumen, if no anula a las sentencias "if" anteriores; por el contrario, "else if" sí las anula. pero, OJO, "if" no las anula,
                           todas las sentencias corren, sin embargo el último "if" sobreescribe su dominio sobre el dominio de las sentencias "if" anteriores.
                           (en caso que sus condiciones se "tropiecen").
                           */

                    {
                        /* Queremos saber cuánto incrementó con "key", ese caracter alfabetico especifico, de uno en uno, hasta que llegó al primer
                           caracter de tipo "no alfabetico" del código ASCII (que es '{'). Con qué intención se hace esto?
                           Pues, para saber con exactitud cuánto se le debería incrementar adicionalmente, en términos de "key", al inicializarlo todo en 'a' nuevamente;
                           asumiendo antes, claro, su incremento inicial desde su punto de partida como caracter de texto plano hasta llegar a la '{'.
                           Para saber ese dato (cuánto incrementó en "key", el caracter que se debe cifrar, al llegar a '{') nos vamos a asistir de una variable "aux".
                           */
                        int aux = '{' - texto_plano[i];

                        /* Lo que prosigue entonces es descontar al avance de "key", el "key" ya contado hasta la "{"; es decir, "aux".
                           Y ese "key" restante (key - aux) considerarlo como el incremento que hace falta (en valores ASCII) para encriptar el caracter,
                           asumiendo ya que su conteo comienza desde 'a' nuevamente (por las evidentes razones de que no podemos considerar caracteres
                           no alfabeticos para cifrar o encriptar un texto plano)
                           */

                        cifrado[i] = 'a' + (key - aux);

                        /* Qué pasa cuándo el número es muy grande, tan grande que incluso el "key" restante (uno propio para cada caracter alfabetico,
                           ojo, recuerde que el programa analisa y afecta tomando caracter uno por uno) supera otra ronda del abecedario completo en ASCII?
                           Lo que toca es ingeniarselas, buscar el residuo que habría entre ese "key" restante y la totalidad de códigos ASCII que hay
                           desde la "a" o "A" a la "z" o "Z": esto para contrarrestar todas las rondas necesarias que necesite cubrir la "key" restante,
                           de cada letra, de forma eficiente; y, situarnos inmediatamente, en la última ronda que cubre dicha "key" restante sobre los códigos
                           ASCII de los caracteres alfabeticos.
                           Ese residuo "aux2" sería justamente lo que se necesitaría incrementar, adicionalmente, al valor de 'a' o 'A', según sea el caso.
                           Observe:
                        */

                        if ((key - aux) > 26)
                        {
                            int aux2 = (key - aux) % 26;
                            cifrado[i] = 'a' + aux2;
                        }
                    }
                    // ESTA ES LA MISMA LÓGICA QUE SE DEBE APLICAR PARA LOS CARACTERES EN MAYUSCULA PASADOS DE TEXTO PLANO A TEXTO CIFRADO. ADELANTE.
                }

                else if (isupper(texto_plano[i]))
                {
                    cifrado[i] = (texto_plano[i] + key);

                    if (cifrado[i] > 'Z')
                    {
                        int aux = '[' - texto_plano[i];
                        cifrado[i] = 'A' + (key - aux);

                        if ((key - aux) > 26)
                        {
                            int aux2 = (key - aux) % 26;
                            cifrado[i] = 'A' + aux2;
                        }
                    }
                }

                else
                {
                    cifrado[i] = texto_plano[i];
                }
                // impresión del texto plano ya cifrado considerando todas las condiciones requeridas (todas las sentencias declaradas anteriormente)
                printf("%c", cifrado[i]);

            }
            printf("\n");
            return 0;

        }
        
        else
        {
            printf("Usage: ./caesar key\n");
            return 1;
        }
    }

    else
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }
}
