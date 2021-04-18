#include <stdio.h>
#include <stdlib.h>

int main ()
{
    // Convencionalmente uno trabajaría con matrices si quisieramos organizar un conjunto de datos en común o que se encuentran relacionados.
    // Sin embargo, las matrices también pueden ser reconstruidas a partir de la función "malloc" (o por lo menos podemos emular su función). Ya explicaremos esto.

    int *list = malloc(3 * sizeof(int)); // Por medio de un puntero, haciendo uso de la función "malloc", se puede reemplazar a la función propia de una matriz.

    /* Ahora que tengo este trozo de memoria, por medio de un puntero, que es equivalente a 3 veces el tamaño de un entero... esta sería en realidad la forma "malloc",
       asignando memoria dinámica, de elaborar una matriz; es decir, con matrices tendríamos que nuestra estructura en código sería algo más o menos así: "int list[3];".
       */

    // Como siempre, desde ahora, cualquier vez que se use malloc, se debería comprobar si "list" (el puntero en cuestión) es igual a NULL.
    if (list == NULL)
    {
        return 1;
    }

    // Ahora sí, inicializemos a los tres números enteros de "list", tal que así:

    list[0] = 1;
    list[1] = 2;
    list[2] = 3;

    /* Dese cuenta del tipo de equivalencia, ahora, entre el uso de matrices y punteros. Si se sabe que malloc le devuelve una parte de la memoria,
       entonces usted puede utilizar la notación de corchetes, y tratar ese trozo de memoria, como una matriz. Pues, a fin de cuentas qué es una matriz?
       Es, justamente, un bloque de memoria contiguo y eso es exactamente lo que devuelve malloc.

       "list" también podría ser definida con "aritmética de punteros" recuerde; mas, es un proceso mucho más tedioso. Es preferible la notación de corchetes.

       Ahora, si por ejemplo quisiera agregarle otro valor a "list", otro entero, de manera más eficientemente... cómo sería?
       (sin hacer uso, precisamente, de otro puntero auxiliar al que le asigne un nuevo espacio de memoria con malloc que sería, ahora, equivalente a 4 enteros;
       donde, a continuación, se le copie a él los valores de "list" por medio de un bucle de tipo for; y, finalmente, se le agregue de forma manual
       el elemento número 4 de interés, el que se desea incorporar: que, para nuestro caso de estudio, sería "el otro entero" en cuestión: "4".

       Ahora, como se supondría que queremos que "list" sea el puntero que nos muestre los 4 números enteros -y no el nuevo puntero auxiliar, que ya los tiene-;
       tendríamos entonces que, igualar "list" al nuevo puntero auxiliar en cuestión; por decir algo: "list = aux" (suponiendo que el puntero auxiliar es: "aux");
       pero, antes de eso, para poder asignarle a "list" unos nuevos valores que ahora le corresponden a "aux", tenemos que liberale primero a "list" su memoria:
       hacerla que renunciea a su "lista" inicial; es decir, sería algo así: "free(list);" y, luego sí, en otra línea de código: "list = aux;". Y listo!
       Tenemos que "list", luego de todo ese proceso tedioso, ahora ya tendría 4 enteros y no 3.
       Ahora, si deseo mostrar cada uno de esos enteros de "list", también tendría que asistirme de un bucle for que me los imprima iterativamente, uno a uno).

       Tenga claro algo: Si crea una matriz en C, usando la notación de corchetes, te has pintado en un rincón.
       No puedes usar ninguna línea de código que hemos visto y cambiar el tamaño de una matriz que tiene declarado utilizando corchetes.
       Hablando más técnicamente, cuando usas los corchetes, estás asignando estáticamente la matriz en la pila (stack).
       Lo estás poniendo en el marco de la memoria de la computadora.

       Sin embargo, si usa malloc, sí que se puede cambiar de tamaño (como se planteó anteriormente); mas, existe una forma más sencilla de hacer lo complicado.
       Veamos.

       Si desea reasignar una matriz, un trozo de memoria, al cambiar su tamaño, no tienes que hacer todo esto que se hizo antes.
       No es necesario que use malloc dos veces, por ejemplo. Puedes usar malloc una vez al principio. Y luego, puedes usar una nueva función llamada: "realloc".

       Pongamos en práctica todo esto dentro del mismo nuevo puntero llamado "aux":
       */

    int *aux = realloc(list, 4 * sizeof(int));
    if (aux == NULL)
    {
        free(list);
        return 1;
    }

    /* La función de "realloc" suele definirse con un puntero (aux); y consiste en, justamente, poder asignarle un nuevo espacio de memoria a algo
       a partir de otra cosa que ya tiene (su propio espacio de memoria); es decir, ese "algo" se dirige a la dirección de un trozo de memoria
       que ya está definido por otro "algo"; generalmente, por otro puntero -definido, en un principio, con la función malloc:
       para nuestro caso "list"; entonces, queremos replicar la información que tiene "list", en otro puntero, desde otro espacio de memoria
       (con la ventaja poder definir, además, un espacio de memoria deseado según las necesidades que propiamente se tengan:
       si queremos agregar, posteriormente, una información adicional a la información tomada inicialmente de "list").

       Es a partir de esta premisa que podemos ver porqué a la función "realloc" se le pasan dos parametros:
       el 1er parametro corresponde al puntero inicial como tal, al que le queremos replicar su información en otro espacio de memoria;
       y el 2do parametro vendría siendo, entonces, la actualización del espacio de memoria deseado para el nuevo puntero en cuestión,
       el que está siendo definido con la función "realloc".

       Mientras todo esté bien (y todo esté bajo los alcances de "realloc"), con suerte, "realloc" podrá asignar ese nuevo espacio de memoria al puntero final;
       en caso que no pueda, por x o y motivo (if aux == NULL), queremos que el programa se cierre automaticamente; pero, antes, no se le olvide, liberar "list"
       ... tal como se ve en la sentencia de tipo if.

       Dicho lo anterior, como Realloc realmente copia lo viejo en algo nuevo para ti... no es necesario, entonces, tener que hacer un bucle de tipo for
       para asignar, uno a uno, los valores de "list", en un nuevo puntero que conserve, además de la información de "list", un entero adicional
       (como lo hemos deseado y definido para "aux"), ya no. Ya no es necesario que sea así. Puede cortar camino mejor con realloc y listo.

       Realloc, entonces, facilita las cosas si deseo que no sea precisamente "aux", la variable que fue definida en un inicio justamente para ser auxiliar,
       la que tenga los 4 enteros; es decir, le agregaría en un principio el cuarto entero a "aux", pero, con una finalidad principal...
       poder asignarle el espacio de memoria de "aux" a "list" (no sin antes limpiandole la memoria dinámica que, actualmente, ocupa "list"), tal que así:
       */

    aux[3] = 4;

    free(list);

    list = aux;

    for (int i = 0; i  < 4; i++)
    {
      printf("%i\n", list[i]); // imprimimos a "list" sólo para verificar que, efectivamente, tomó los valores de "aux".
    }

    free(list); // Al igual, luego de acabar con "list", de nuevo debe limpiar la memoria.

    return 0;
}

// Bueno, la verdad hasta ahora nunca se ha dejado de trabajar con matrices; solo que, ahora, las hemos definido con la función "malloc". Ahora sí, vamos a listas enlazadas!

    /* ¿Recuerda esto?... "variable simple que hará de puntero; y que tiene la función, justamente, de apuntar hacia la dirección donde comienza la lista vinculada
       con el nodo real número 1"... Pues bien, vamos a proceder a crear dicho puntero inicial para iniciar conexiones entre nodos y formar listas enlazadas.
       Se retomará el ejemplo con el que se trabajó, inicialmente, en el ejemplo del texto word "Listas enlazadas"; es decir, crearemos una lista enlazada
       de tamaño 3, definida desde un nodo 1 hasta un nodo 3; los valores que tomará cada nodo serán números enteros que irán desde el 1 al 3, respectivamente.
       */
