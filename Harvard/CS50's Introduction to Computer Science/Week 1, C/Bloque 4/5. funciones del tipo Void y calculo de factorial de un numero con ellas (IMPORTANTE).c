// Hacer con funciones de tipo void el factorial de un número. // funciones void necesarias para trabajar con pasos por metodo de referencia y vectores (el inicio)


#include <stdio.h>


void factorial();
// Prototipo: es necesario colocarlo para que no se "crashee" nuestro programa con esta estructura de la función "Void". Prototipo y su función:
// Lo que hace es avisarle el computador que habrá una nueva función, declarada con void por alguien desconocido (no está en ninguna libreria), pero que no pasa nada.


int main () {
  // también podemos pasarle a la función "main" un parametro "void" para que no sea necesario colocar un "return 0;" o un "system ("pause");".
  // incluso es lo ideal para cuando nuestra función "main" no tenga argumentos.

  factorial ();

  system ("pause");
  return 0;

}



void factorial () { /* Hasta ahora teníamos entendido que, para que las condiciones de una función independiente pudieran trabajar
                       dentro de la función principal (las condiciones de una función "factorial" operando dentro de la función "main", por ejemplo),
                       la función "factorial" debía devolver al final (con un "return") dicha condición, que era reflejada, en una variable...
                       Esto se establece así para que la condición estructurada pueda afectar, luego, dentro de la función "main"
                       (ya sea en una variable de ella o en una misma variable de la función independiente, en este caso, "factorial")

                       // Es de esta forma en qué sé había entendido "cómo pasar las condiciones de una función a otra"; generalmente, a una función principal del tipo "main".
                       // pues bien, existe otro tipo de función, las funciones de tipo "void", que no necesitan devolver ni pasar ninguna condición a la función principal;
                       quiero decir, realmente sólo se llama a la función void dentro de la función principal y listo. Las funciones "void" son creadas por nosotros también.
                       Es decir, con las funciones del tipo "void" es que tenemos la facultad de crear nuestras propias funciones personalizadas sin necesidad de usar "return"
                       al final de ellas (esa es la gran diferencia).
                       Para que quede más claro, la libreria <stdio.h> no viene realmente con una función llamada: "factorial", esa la hemos creado nosotros.
                       Y, a partir de lo que hemos decidido hacer con ella, hemos querido que dicha función hiciera "calculos de factoriales" en este ejemplo.

                       Ahora, si esa función que "calcula factoriales" quisieramos que se ejecute dentro de nuestra función principal, sólo basta con que la llamenos y listo.
                       tal que así: factorial(); (como ya lo hicimos más arriba). Ya depende de nosotros especificar con qué parametros o argumentos trabajar dentro de ella
                       al ser llamada (en caso que se los pasamos si quisieramos trabajar con las variables de la función "main" u otros valores insertados manualmente,
                       y no con los valores de las variables propias de la función independiente "factorial" -en caso que tengan-).

                       Si queremos pasar, por ejemplo, como parametros variables de la función "main" (para que afecten las condiciones de la función "factorial" sobre ellas
                       o sobre sus valores directamente) o, bien, pasarle manualmente los valores en cuestión (no por medio de variables)...

                       por lo general, esto se hace para cuando queremos afectar directamente sobre el valor una variable declarada, pasada como parametro o argumento,
                       dentro de la función independiente o personalizada del tipo "void" al momento de ser creada (las variables que están dentro de los parentesis).
                       Y, en últimas, uno desea influir sobre dichas variables (las de la función "factorial")
                       para terminar afectando sobre unas variables de nuestro interés de la función "main" o; en su defecto, para pasarle un valor manualmente,
                       como parametro o argumento, a la función "factorial" llamada dentro de la función "main", que termine
                       afectando o definiendo a una variable especifica de la función "factorial" (como se verá en el ejercicio del apartado 5.1, de este mismo bloque)

                       En nuestro caso, por ejemplo, hubiera sido así: "void factorial(int x){}",
                       suponiendo que "x" sería la variable de la función "factorial" que está expuesta a cambios si resulta ser llamada dentro de la función "main"
                       mientras no tenga un valor inicializado, la variable "x", y se vea remplazada por el valor de otra variable declarada en la función "main"
                       o por un valor númerico (o cualquiera) insertado manualmente; respectivamente podrían ser estos dos ejemplos al llamar la función "factorial" en "main":

                       1. factorial (a); // quiere decir que, las condiciones estipuladas dentro de la función "factorial" afectarán sobre el valor de
                       la variable "a" de la función "main" y no sobre la variable "x" de la función "factorial";
                       mientras, ojo, no esté inicializada "x" con anticipación.

                       2. factorial (3); // quiere decir que, las condiciones estipuladas dentro de la función "factorial" afectarán sobre el nuevo
                       valor que asumiría la variable "x" de la función "factorial"; ese valor, para nuestro caso, sería: "3".
                       Pero recuerde... Mientras, anteriormente, no haya sido inicializada la variable "x" dentro de su función.

                       De hecho, con las funciones "void" no se hace nada dentro de la función "main" practicamente:
                       sólo se llama a la función "void", que es la que hára todo dentro de su propia función, a partir de lo que se contiene en ella misma.
                       Podrá verlo en la solución de nuestro ejercicio de: "Hacer con funciones de tipo void el factorial de un número" a continuación.
                       */

  int x, i, aux;

  aux = 1;

  printf ("Introduce un numero entero: ");
  scanf ("%i", &x);

  for (i = 1; i <= x; i++) {
      aux = aux * i;

  }

  printf ("El factorial del numero %i es %i. \n\n", x, aux);


}
