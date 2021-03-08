// Qué es una función, ejemplos. // Haga lectura de los parrafos según un orden númerico ascedente (del 1 al 2, 3, 4, etc... );

#include <stdio.h>


int maximo (); // 3. Este es el "prototipo" de la nueva función creada "int maxima (){}"; es necesario colocarlo para que el compilador no se "crashee".



int main () { /* 1. "int main (){}", por si no lo sabía, es una función: la función "principal".
                 Toda función principal para ser declarada se requiere de escribir "int" y, al lado, el nombre que queramos darle a ella; tal como, "int main () {}".
                 Declaremos otra función debajo de la función "int main" para ver lo que acabamos de decir.
                 */



 /* 4. ahora bien, para que las nuevas funciones creadas a partir de la función principal "int main (){}" se ejecuten,
 hay que llamarlas dentro de la función "int main (){}" precisamente.
 Todas las nuevas funciones creadas, después de "int main (){}", al ser llamadas dentro de la función principal,
 ejecutarán el código que tienen cada una de ellas dentro de sus corchetes (por ejemplo, "int maxima (){...}") al ser llamadas dentro de la función principal "int main (){}".


 Más adelante invocaremos la nueva función creada "int maxima (){}" dentro de la función "int main (){}"
 para poder ejecutar el código de "int maxima (){}" al sólo llamarla dentro de "int main (){}". La ejecución de los códigos se dará en el orden en el que sean llamados.
 */



 /* 5. Algo a tener en cuenta: dentro del dominio de cada función, dentro de sus corchetes {}, las variables que declaremos dentro: se quedan ahí, dentro,
    y se ejecutan sólo dentro de dicha función. Si por ejemplo dentro de esta función "int main (){}" hemos declarado las variables: "x" e "y"; entonces,
    "x" y "y" no existen en ninguna otra función. No van a existir dentro de la función "int maxima (){}", por ejemplo.

    Dicho lo anterior, si dentro de una función "A" queremos trabajar con las variables de una función "B", habría que hacerlo de la siguiente manera: por ejemplo,
    supongamos que ciertamente a la función "int main (){}" le hemos declarados dos variables: "x" e "y". Y queremos que la función "int maxima (){}" trabaje con ellas.
    */

    int x, y;

    x = 3;
    y = 10;

    /* Pues bien, para hacer que la función "int maxima (){}" trabaje con ellas, primero que todo debemos llamar dicha función dentro del dominio de la función
    "int main (){}", tal que: "int main (){ maxima (); }", como ya lo hicimos previamente.
    luego, en ese llamado, hay que pasarle las variables, de la función principal dentro, de los parentesis de la función "maxima" en cuestión. Quedando algo así:
    */

    maximo (x, y); // primer código a ejecutar dentro de la función "int main (){}".

    /* Realmente lo que sucede es que, "x" e "y" reemplazarán respectivamente a las variables que hayan sido declaradas,
    como argumentos o parametros, en el momento en que se creó la función "maximo"...
    ya se dará cuenta que, efectivamente, sí hubieron variables declaradas a la hora que se creó la función "maximo", quedando así: int maximo "(int a, int b){};
    sin embargo, y esto es muy importante, si resulta que esas variables luego son inicializadas con unos valores en especifico dentro de la función de ellas...
    entonces, dichos valores anulan completamente a las variables (y sus valores) de la función principal".
    Este no fue el caso (o fue un caso excepcional), porque, como ya lo mencionamos anteriormente, "La ejecución de los códigos se dará en el orden en el que sean llamados";
    En consecuencia, si usted se fija muy bien, la inicialización de las variables "a" y "b" se da justamente después de la impresión de ellas. Entonces,
    como hasta ese momento no eran variables definidas por algún valor, el compilador interpreta entonces, ahora sí, que sólo desea trabajar con los valores
    de las variables de la función principal.

    Y OJO CON LO SIGUIENTE: Desde el primer momento en que se inicializen las variables de la función personalizable,
    el compilador decidirá trabajar inmediatamente con ellas. Apenas haga una inicialización de ellas, aunque haya llamado esta función en la función principal
    (incluso pasando como parametros a las variables de la función principal en la función personalizable llamada), en ese momento puntual,
    el compilador dejará de trabajar con las variables (y sus valores) de la función main.
    para trabajar inmediatamente con los variables de la función personalizable; en este ejemplo nos remitiriamos a la función "maximo".

    */

    // La siguiente explicación, "6.", es un poco ambigua. Fue escrita sin tener un mayor entendimiento sobre el tema. No lo lea si desea.

    /* 6. Sin embargo, ahí no termina todo, para que esto funcione del todo correcto; hay que también declararle nuevas variables a la función "int maxima (){}",
    a las que luego se les pasará el valor de las variables de "int main (){}"; es decir, tomarán el valor de las variables de "int main (){}"
    (incluso aunque hayamos inicialiado las variables de "int maxima (){}" con otros valores, inicialmente, dentro de su propia función):
    Lo anterior sucede por ser la función "int maxima" llamada allá con las variables de "int main (){}"; como ya lo hicimos: "maxima (x, y)";

    pues, por la misma razón de que no podemos trabajar directamente con las variables de otras funciones; entonces, toca crear unas nuevas dentro de la función
    int maxima ("aquí dentro de los parentesis se crean") {"y aquí en el dominio se ejecutan"}. Veamos la parte adicional que resta en la función "int maxima (){}".
    */

    printf ("Este segundo codigo se ejecutara de segundo precisamente. \n\n");





 system ("pause");
 return 0;

}

int maximo (int a, int b) { // 2. Nueva función creada, la función "int maxima (){}".
// Las funciones personalizables pueden ser declaradas con cualquier tipo de dato, necesiariamente el tipo de dato debe guardar relación con la varible que desea devolver.
// 6. Declaración de: variables de "int maxima (...){}": "a" & "b".


  // 2. lo que está dentro de una función, dentro de los corchetes {llamado "dominio"}, es lo que la función va a ejecutar o ejecuta luego de ser llamada de la función "main".

  /* 2. Ahora bien, algo que no hemos dicho: antes de invocar una nueva función, con sus corchetes incluidos y todo, primero debemos declarar su prototipo;
  este "prototipo" no es más que la colocación, antes de la función "int main (){}",
  del mismo nombre de la nueva función creada y con sus parentesis pero, en vez de corchetes, ponemos punto y coma (;) y listo. Revisemos eso.
  */

  /* 6. Ejecución de: variables de "int maxima (){...}": "a" & "b". */
  printf ("Estamos dentro de maxima. Pero nos han llamado de primero en main.\nEl valor de x es %i y el valor de y es %i. \n\n", a, b);

  a = 20; b = 5; 

  return 0;

}
