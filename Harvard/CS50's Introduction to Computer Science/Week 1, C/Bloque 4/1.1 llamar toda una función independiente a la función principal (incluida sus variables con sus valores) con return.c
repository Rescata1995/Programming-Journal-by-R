// Ejercicio: imprimir el mayor número entre dos números pasados por tecla con una función. //

#include <stdio.h>

int maximo (void); // prototipo de la función "maximo".

int main (void) {

  int max;

  max = maximo (); /* 2. Al ser llamada la función "maximo" dentro de la función "main"... es el valor devuelto por "return" (la variable "aux")
                         la información que va a importar la función "main" de la función "maximo"; toda su información en términos de condiciones.
                         */


  printf ("el valor maximo es %i. \n\n", max); /* como no podemos incorporar el llamado de una función; en este caso, la función "maximo" dentro de un printf;
                                                  fue necesario entonces definir dicho llamado dentro de una variable nueva que llevara por nombre "max".
                                                  Ahora bien, hubieramos podido también, pasar esta misma función "printf" dentro de la misma función "maximo";
                                                  de tal manera que, al ser llamada la función "maximo" dentro de esta función principal "main",
                                                  no se haga necesario asignarle una variable "max" al llamado de la función...
                                                  Sólo era llamarla para que andara e imprimiera de paso la salida, tal que así: "maximo();"
                                                  */



}

int maximo (void) { /* Si declara variables aquí debe saber que, al llamar esta función en la función "main", debe también establecer parametros o argumentos allá
                       (es para eso que idealmente se declaran variables, que realmente son parametros, aquí: para que puedan influir sobre otras variables del programa
                       o sobre otros valores insertados manualmente, no necesariamente variables, de cualquier tipo (númerico, cadenas, caracteres, etc),...
                       al ser llamada, esta función con parametros, en otras funciones personalizables o dentro de la función principal -como es nuestro caso actual);
                       de lo contrario, el programa se "crashea"... la única forma que no se "crashee" el programa, sino define parametros o argumentos allá
                       al llamar esta función dentro de "main", es que defina las variables acá (dentro de "maximo", antes de abrir los corchetes o el dominio de la funcion)
                       pero necesariamente debe inicializarlas, al menos, en el dominio; darles un valor en el dominio a las variables declaradas acá;
                       igual recuerde que, apenas haga eso, apenas las inicialize, al llamar a la función "máximo" dentro de la función "main",
                       la función "main" tomará en cuenta las variables (y sus valores) de la función "maximo" (no las de main)

                       Sin embargo, si desea, no coloca parametros o argumentos aquí (y allá tampoco),
                       declara sus variables y las inicializa dentro del dominio de "maximo" {en los corchetes} y dará igual;
                       lo que significaría entonces que, usted sólo va a influir sobre los valores de las variables que defina acá.
                       y lo único que estaría haciendo es ejecutar esta misma función (maximo) por medio de la función principal (main)
                       y lo hace por medio de "return". En return, definimos por medio de una variable, las condiciones o funciones que queremos que se ejecuten de
                       la función independiente (nuestro caso, función maximo) al ser llamada en la función "main".
                       */

  int aux;
  int a;
  int b;

  printf("inserte un número para definir la variable a: ");
  scanf("%i", &a);

  printf("inserte un número para definir la variable b: ");
  scanf("%i", &b);

  if (a > b) {
     aux = a;
  }

  else {
     aux = b;
  }

  return aux; /* 1. "return" lo que hace es devolver un valor; en este caso, hemos decidido que "return" devuelva el valor que esté en la variable "aux".
                 La variable "aux" está definida por la condición de seleccionar el número mayor entre dos variables de tipo "entero" que son: "a" y "b".
                 Dicho lo anterior, cada vez que llamemos la función "maximo" dentro de otra función (por ejemplo dentro de la función "main")
                 el valor que va a arrojar, en esa otra función, es el valor que arroja la variable "aux"
                 (para ser más precisos, la función que hay detrás de ella y que hemos creado dentro de este dominio; es decir, "señalar el número más grande");

                 mientras decidamos seguir trabajando con las variables propias de la función independiente, para este caso, función "maximo":
                 al NO declarar variables, como parametros o argumentos, propiamente dentro de la función "maximo" (antes de abrir su dominio);
                 y, al no pasarle, mucho menos,
                 eventualmente variables de "main" a la función "maximo" al ser llamada dentro de la función "main".

                 o, por el contrario...
                 mientras decidamos trabajar con los valores de las variables de la función principal, función "main":
                 al SÍ declarar variables (y sin ser inicializadas luego, OJO; sino, seguiriamos trabajando con las mismas variables de "máximo"),
                 como parametros o argumentos, propiamente dentro de la función "maximo" (antes de abrir su dominio);
                 y, al sí pasarle, por consiguiente,
                 variables de "main" a la función "maximo" al ser llamada dentro de la función "main".
                 Esto se conoce técnicamente como: "pasado por valor", o en inglés (en su término anglosajón original), "passed by value".

                 En caso que si se declaren... sí se podría plantear la idea de: ¿trabajar con las varibles de la función principal o con los de la independiente?.
                 Pero no es nuestro caso actual, se descarta definitivamente una idea de trabajar con las variables de la función principal "main" porque no
                 declaramos variables propiamente dentro de la función independiente (antes de abrir sus corchetes, lo mismo que: antes de abrir su dominio)
                 entonces nos quedamos trabajando realmente con los valores de las variables de la función independiente que hemos creado de forma personalizada,
                 la función "maximo".

                 // dato de interés: sólo puede pasarle un solo valor a "return".

                    IMPORTANTE: Toda variable que sea declarada dentro de las condicionales o bucles (propiamente dentro, dentro de sus corchetes {...})
                                se expone a una condición de imposibilidad que se conoce en la industria como: "problema de alcance";
                                el alcance de una variable, justamente, son las líneas de código en las que existe; donde se puede usar dicha variable.
                                Entonces, si se declara una variable dentro de corchetes {...}, dicha variable sólo existe dentro de esos corchetes.
                                Tenga mucho cuidado con esto! Idealmente entonces declare sus variables por fuera de este tipo de corchetes {}
                 */


}
