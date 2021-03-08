// Ejercicio: calcular el mayor número entre dos números con una función. // Haga lectura de los parrafos según un orden númerico ascedente (del 1 al 2, 3, 4, etc... );

#include <stdio.h>

int maximo (); // prototipo de la función "maximo".

int main () {

  int x, y, max;

  x = 3;
  y = 10;

  max = maximo (x,y); /* 2. Al ser llamada la función "maximo" dentro de la función "main"... es el valor devuelto por "return" (la variable "aux")
                         la información que va a importar la función "main" de la función "maximo"; toda su información en términos de condiciones.
                         Es decir, al pasar a ser la variable "a" y "b" de la función "maximo" a las variables "x" e "y" respectivamente
                         dentro de la función "main" (porque estamos trabajando dentro de esta última función y no con otra);
                         entonces, la información y las condiciones estipuladas dentro de la variable "aux" de la función "maximo" serán importadas dentro de la función "main";
                         mas no sus variables ni mucho menos los valores de dichas variables; sólo las condiciones; en este caso, elegir el número mayor entre uno y otro. OJO.
                         Aquí estamos haciendo un "pasado por valor" (passed by value).
                         */

                         // con más detalles...

                         /* Al ser llamada acá la función "maximo", la función "main" toma su información de forma explicita, tal como viene;
                         como dentro de la función "maximo" propiamente no se ejecutó una función "printf" y, adicionalmente, sólo se tomó de ella
                         las condiciones establecidas dentro de la variable "aux" al ser eso lo único "retornado" (return aux;)...
                         Es decir, con sólo llamarla, no se imprimirá nada sobre la pantalla. Dentro de la maquina se sabrá que variable es más grande
                         entre "x" e "y"; pero no lo mostrará por pantalla, no lo  imprimirá, sólo guardará internamente dicha información:
                         porque la variable "aux" retornada y su condición ya definida (y la única cosa que terminará siendo llamada de afuera),
                         no hace más que eso: "seleccionar el número mayor entre dos variables", pero no imprimirlos. Más nada. Entonces...

                         Toca asignarle una nueva variable al llamado de esa función (maximo) si queremos manipularla dentro de esta función (main),
                         tal que así: "max = maximo(x,y);" (dentro de los parentesis pasamos las variables de la función "main" en las que queremos incidir);
                         pues, al ser llamada la función "maximo" sólo se está llamando de ella las condiciones establecidas en la variable "aux", que es:
                         "saber el número mayor entre dos números"; pero, adicionalmente, hemos decidido sobre qué variables de la función "main" hacer
                         dicha comparativa (la de seleccionar qué número es mayor) al pasarle "x" e "y" como parametros al llamado de la función "maximo",
                         quedando finalmente así: "max = maximo (x,y);".

                         Es decir, ahora la variable "max" de la función "main" tiene la facultad de seleccionar el número mayor entre dos variables,
                         porque le hemos pasado o asignado la función "maximo" a ella. Y, como hemos seleccionado a "x" e "y" como parametros de la función
                         "maximo" al llamarla dentro de la función "main"; quiere decir entonces que, la variable "max" va a seleccionar el mayor entre "x" e "y".
                         y guardará dicha información internamente.
                         */

  printf ("el valor maximo es %i. \n\n", max); /* 3. como no podemos incorporar el llamado de una función; en este caso, la función "maximo" dentro de un printf;
                                                  fue necesario entonces definir dicho llamado dentro de una variable nueva que llevara por nombre "max".
                                                  */



  system ("pause");
  return 0;
}

int maximo (int a, int b) {

  int aux;

  if (a > b) {
     aux = a;
  }

  else {
     aux = b;
  }

  return aux; /* 1. "return" lo que hace es devolver un valor; en este caso, hemos decidido que "return" devuelva el valor que esté en la variable "aux".
                 La variable "aux" está definida por la condición de seleccionar el número mayor entre dos variables de tipo "entero" que son: "a" y "b".
                 Dicho lo anterior, cada vez que llamemos la función "maximo" dentro de otra función (por ejemplo dentro de la función "main")
                 el valor que va a arrojar, en esa otra función, es el valor que arroja la variable "aux".
                 (y para ser más precisos, la función que hay detrás de ella y que hemos creado dentro de este dominio; es decir, "señalar el número más grande");

                 Sin embargo, esta vez, esa función de: "señalar el número más grande" lo hace en relación a las variables definidas dentro de la función "main",
                 (que al fin y al cabo son los valores que va a usar realmente dentro de su propia función, no los de la función "maximo". Ojo con esto)
                 y lo hace asistiendose de la definición de las variables que están dentro de la declaración de la función "maximo": "int maximo (int a, int b) {}".

                 Recuerde la clase pasada... "Si decidamos trabajar con los valores de las variables de la función principal, función 'main': Sí o sí
                 se declaran variables, como parametros o argumentos, propiamente dentro de las funciones establecidas: en la pricipal (main) y en la personalizada (maximo)"

                 Es decir, la variable "a" de la función "maximo" pasa a ser definida por la variable "x" de la función "main" en caso que decidamos
                 trabajar con las variables dentro de la función "main",
                 que es nuestro caso actual porque, repetimos, hemos definido variables propiamente dentro de la función "maximo", antes de abrir los corchetes;
                 tal que así: "int maximo (int a, int b) {}"; pero no sólo eso, al llamar la función "maximo" en "main", le hemos pasado las variables de "main" a ella.
                 En consecuencia, la variable "b" de la función "maximo" pasaría entonces a ser
                 definida por la variable "y". Y, entonces, se trabajará con los valores definidos en dichas variables, las variables de la función "main": "x" e "y".
                 */

                 // dato de interés: sólo puede pasarle un solo valor a "return".

                 /* podríamos hacer una función personalizada que solamente le pase las condiciones creadas en ella a la función "main" por medio de "return" de nuevo;
                    pero, esta vez, sin necesidad de pasarle un parametro o argumento, a la función independiente, al ser llamada dentro de la función "main"?
                    Sí y lo hicimos justamente en nuestro anterior ejercicio.
                 */


}
