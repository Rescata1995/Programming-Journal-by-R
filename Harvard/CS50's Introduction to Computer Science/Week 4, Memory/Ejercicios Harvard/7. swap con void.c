#include <stdio.h>

void swap (int a, int b);

int main (void)
{
    int x = 1;
    int y = 2;

    printf("El valor de x es: %i, y el valor de y es: %i.\n", x, y);

    swap(x, y);

    return 0;
}

void swap (int a, int b)
{
    // como queremos 2 parametros en "main" al llamar esta función, tal que: "swap(x, y);",
    // toca declarar entonces 2 parametros en el inicio de esta función "swap";
    // la declaración de estos dos parametros en esta función, a y b,
    // deben ser de un tipo de dato congruente al tipo de dato de las variables de "main" que pasaremos como parametros al llamar esta función "swap" en "main".

    int aux = a;
    a = b;
    b = aux;

    /* El intercambio de valores entre dos variables entre sí, digamos, a y b, requiere de una variable auxiliar (una tercera variable).
       La estructura lógica detras de este proceso puede ser analogica a intentar intercambiar el contenido liquido de un vaso hacia otro:
       es imposible que, por ejemplo, si desea que el "jugo" de un vaso A esté ahora en un vaso B, simplemente tome el vaso A y lo "vacie" en vaso B, No!
       No puede ser así ya que el vaso B también tiene "jugo"; y, lo que sucederá entonces, es que se "mezclarían" ambos entre sí y esa no es la idea.
       La idea es intercambiar los jugos de los vasos, A y B, entre sí (sin mezclas). Dicho lo anterior, entonces, nos auxiliamos de un vaso extra!
       Es requerido un vaso extra para poder pasar el jugo del vaso A al vaso auxiliar y quede entonces, ahora sí, el vaso A libre para ser re-envazado
       (re-envazado por el jugo del vaso B, claro). Ya estando el jugo del vaso B en vaso A, quedaría libre el vaso B.
       B, entonces, estando ya disponible, pasa a ser reembazado por el jugo del vaso auxiliar que, anteriormente, era el jugo del vaso A.

       Así de simple, entonces, hemos cambiado el contenido (jugo) del vaso A por B, y B por A, sin necesidad de estropearlo todo (ni de hacer mezclas).
       */

       // llamemos ahora esta función dentro de la función "main" para ver si podemos generar un efecto de "intercambio" entre sus variables: "x" y "y".

       printf("Ahora, el valor de x es: %i y el valor de y es: %i.\n", a, b);

       /* Recuerde algo: con las funciones "void" no se hace nada dentro de la función "main" practicamente, sólo se llama a la función "void" y listo,
       tal como lo hicimos: "swap(x, y);", "void" es la que hára todo dentro de su propia función, a partir de lo que está contenido dentro de ella misma.
       Esto debe ser así porque realmente no le estamos "devolviendo nada" (con "return", no hay) a la función "main" que es quién la está llamando.
       Y, como no le estamos pasando (devolviendo) nada realmente, de una función a otra, ni ambas funciones están trabajando dentro del mismo espacio de memoria...
       Entonces,
       Todo lo que quiera hacer en "main", a partir de la influencia de la función de tipo void personalizada, debe quedar aquí escrito dentro del dominio de "void"
       y haciendo uso de sus propias variables (ya luego que se pasen los parametros propios a la función "main"... al ser llamada esta función en "main"); pero
       incluso, las funciones "printf", luego de la influencia de "void", deben ir aquí dentro. Allá en "main" no se colocan, no va a interpretar a la función "swap"; y, es
       por lo dicho, "no le estamos pasando (devolviendo) nada realmente a una función desde otra, ni ambas funciones están trabajando dentro del mismo espacio de memoria".
       */

       /* Ahora bien, si bien esto es sencillo, todo esto suena enredado. Y hay una forma de solucionar los problemas que generan (y que le toca evitar siempre)
          las funciones personalizadas de tipo "void"; esto, al poder, ahora sí, hacer que dos funciones independientes trabajen dentro del mismo espacio de memoria
          (con la intención de que puedan comunicarse entre sí e influir sobre las variables de una función con relación a otra... directamente).
          Todo esto se puede hacer y sin necesidad de darle tanta vuelta al asunto, se logra por medio de: "punteros y parametros de dirección"... justamente.
          Lo ideal de trabajar con funciones independientes o personalizadas, al final del día, es hacerlo mediante punteros y parametros de dir. Eso será nuestro próximo tema.
          */
}
