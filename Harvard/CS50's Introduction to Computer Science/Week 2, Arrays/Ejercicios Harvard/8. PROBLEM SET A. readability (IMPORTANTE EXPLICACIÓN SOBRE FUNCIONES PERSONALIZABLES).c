#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

/* el tipo de dato de la función personalizable se condiciona al tipo de dato de la variable que devuelve la función en sí
(la variable que se pone en "return"); es decir, las condiciones que se exportan al ser la función llamada en otra, la tarea para que le fue diseñada.
En nuestro caso, hablaríamos de la función float "index" para la variable float "Coleman_Liau" retornada.

Muy contrario son, los tipos de datos que se les pasa a los parametros o argumentos dentro de la declaración de una función personalizable,
este tipo de dato se define según el tipo de dato de las variables que desea afectar de la función que está importando a dicha función personalizable.
En nuestro caso, la variable que desea afectar de la función que importa a la función "index" es: string "texto".
y el parametro o argumento pasado en la declaración de la función "index" es: string "parametro_texto".

Cuando uno al final devuelve, con return, en la función personalizable (para exportar su tarea, para lo que fue creada, a una función que la llame)...
si es el caso, ahí se coloca una variable con un tipo de dato equivalente al colocado en la declaración inicial de la función personalizable misma,
no los tipos de datos colocados en los parametros de dicha función.
Por eso en el propio return se devuelve lo que queremos que haga la función con la función que la llame, la tarea para la que fue diseñada;
y, especialmente, que afecte dicha función (su tarea, su oficio, para lo que fue diseñada) en las variables que pongamos,
como parametros, de la función que llame nuestra función personalizable al ser importada.

Para este caso, el tipo de dato de la función personalizable "index" es float, entonces el valor que debe devolver su "return" debe ser flotante también;
como en efecto es nuestra variable "Coleman_Liau", un float.
En cambio, el tipo de dato de sus parametros (parametro_texto) es string,
entonces la variable pasada como parametro de la función que llame a la función "index" debe ser también de tipo cadena, y en efecto:
la variable "texto", de la función que está llamando a la función "index", es un string también.

Lo que quiere decir entonces es que, queremos que nuestra variable "texto" se vea afectada por la función diseñada en la función "index", la función llamada.
*/

// prototipo
float index(string parametro_texto);

int main(void)
{
    // declaración de la variable "llamado_index" que servirá como auxiliar de y para la posterior impresión del llamado de la función "index".
    float llamado_index;

    string texto = get_string("Text: ");
    printf("%s\n", texto);

    llamado_index = index(texto);

    if (llamado_index > 16)
    {
        printf("Grade 16+\n");
    }
    else if (llamado_index < 1)
    {
        printf("Before Grade 1\n");
    }
    else
    {
        printf("Grade %.00f\n", llamado_index);
    }
}

float index(string parametro_texto)
{
    int letras = 0;
    int palabras = 1;
    int oraciones = 0;

    for (int i = 0, num = strlen(parametro_texto); i < num; i++)
    {
        if (isalpha(parametro_texto[i]))
        {
            letras++;
        }
    }
    printf("%i letter(s)\n", letras);

    /* Qué sudece en este par de sentencias; for y seguidamente if? Pasa que hemos definido una variable igual a 0 (letras = 0;)
       Que lo que hará es incrementar en uno (1), para lo que fue creada, (letras++) cada vez que se encuentre con un caracter de tipo alfabetico,
       de todo el texto insertado. Ahora, con más detalle...
       Fijese que sólo lo hará si primero se cumplen dos condiciones: 1. mientras el contador (i) sea menor que la longitud
       del texto insertado (i < num); y, 2. mientras cada caracter contado, de la longitud de ese texto (para evaluar solamente el texto
       en cuestión), sea un valor alfabetico; es decir, necesariamente una letra (sin importar si es minuscula o mayuscula).

       Lo que hace luego el programa es revisar, entonces, cuantos incrementos en una unidad hay o hubieron, en dicha variable, al final del texto.
       Eso es lo que al final se conservará, como valor númerico final, en la variable "letras".
       La cantidad de valores alfabeticos que hay, hasta el final del texto, registrados a partir de un contador de: "caracteres alfabeticos".

       Por qué la variable "letras" puede contabilizar en 1 también a la última letra de una palabra?, si la condición consiste en que sólo se
       ejecute el bucle mientras "i" (contador) sea menor que la longitud del texto; es decir, el bucle no se ejecuta si "i" es igual a
       la longitud de "num"; es decir, no llega hasta la última palabra. Qué sucede entonces?

       Lo que sucede es que, si usted recuerda la ley de las sentencias anidadas... primero se ejecuta la sentencia interna, la que está
       siendo contenida por la primera. Por eso, en este caso, la sentencia if siempre va a ejecutarse primero que el bucle for,
       porque es el bucle for quien contiene a la sentencia if, por lo cual siempre se ejecutará primero el dominio de if antes que el contador
       aumente en una unidad (i++) si ha resultado ser valida la condición en for. De fondo, la lógica realmente de esto es más o menos así:
       como la primera sentencia contiene dentro de su dominio a una segunda; quiere decir entonces que, de comprobarse la validez de la primera,
       lo que va a correr dentro de ella consiste en ejecutar, justamente, a esa segunda sentencia. Lo anterior, repetimos, en caso que
       la primera sentencia haya validado correctamente las condiciones estipuladas dentro de ella.

       Es decir, si la sentencia 1 es válida lo que hará el programa es ejecutar la 2 y así iterativamente hasta que las condiciones de los bucles
       dejen de ser válidos. Esto le da ventaja a "letras++" de incrementar primero en una unidad antes que el contador del bucle aumente en uno (i++).
       Es por esta misma razón que era necesario la creación de otra variable que se encargará de contar los caracteres alfabeticos
       (y se inicializará en 0 por obvias razones) porque, si usabamos al mismo contador "i",
       "i" en el primer paso por la sentencia if se mantendría igual a 0 (pues replicaría su valor dentro del bucle, el cual es 0 aún); deja de ser 0
       hasta que el mismo bucle incrementará en una unidad a "i"; es decir, "i" en if sólo aumentaría a la par que lo hiciera en el bucle for
       (valiendose del bucle for primero, depende de él): No serviría, se presentaría, si no me equivoco, lo que se llama: referencia circular, 
       y se estaría expuesto a errores incluso de contabilización. Esta es la misma lógica para las palabras y para las oraciones,
       sólo busque la manera lógica para tratar de contar cuántas palabras y oraciones hay. Descubralo.
    */

    for (int i = 0, num = strlen(parametro_texto); i < num; i++)
    {
        if (parametro_texto[i] == ' ')
        {
            palabras++;
        }
    }
    printf("%i word(s)\n", palabras);

    /* se inicializa "palabras" en 1 para que igual me contabilice uno en caso que el texto sólo sea una palabra y no contenga espacio,
    entonces el conteo de "palabras" debe empezar desde 1 y no desde 0 (también debe ser así porque después de la última palabra de un texto,
    no hay espacio registrado que valga para contabilizar dicha palabra; sino, sólo signos como puntos, exclamaciones o interrogantes):
    nuestro tercer caso, oraciones, tendrá que ver con esto.
    */

    for (int i = 0, num = strlen(parametro_texto); i < num; i++)
    {
        if (parametro_texto[i] == '.' || parametro_texto[i] == '!' || parametro_texto[i] == '?')
        {
            oraciones++;
        }
    }
    printf("%i sentence(s)\n", oraciones);

    // como "letras" y "paginas" fueron declaradas inicialmente como enteros, para evitar truncamiento, se pasa a float. Lo mismo para "oraciones".
    float L = ((float)letras / palabras) * 100;
    float S = ((float)oraciones / palabras) * 100;

    float Coleman_Liau = round((0.0588 * L) - (0.296 * S) - 15.8);

    return Coleman_Liau;
}
