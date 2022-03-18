// Introducir una frase como cadena de caracteres (strings).

/* Qué es un string?: No es más que la forma que tenemos en informatica de almacenar una frase (muchas palabras) en una variable. Se puede relacionar con el tema de vectores */

#include <stdio.h>

int main () {

  int vector1 [10];  // esto es vector de enteros con 10 elementos, cierto? // ahora...
  char vector2 [10]; /* ... esto es un "string" o canal de caracteres (cadena de texto). Es decir,
                       un vector de caracteres con 10 elementos también, sólo que ahora son caracteres.
                       bajo esta lógica, esto sería un string llamado "vector2" que puede guardar 10 elementos
                       (realmente 9 porque se necesita dejar un elemento extra demás para guardar: "\0";
                       el compilador interpreta a este par de caracteres (\0) como un sólo elemento y lo registra
                       con la única función de "dar por finalizado el string, indicar dónde termina",
                       sólo es la señal de alto que delimita el final de la cadena. "El punto final de los strings".,
                       en resumén, cada caracter dentro del texto cuenta como un elemento (incluso los espacios).
                       */

                       // ahora bien, la siguiente pregunta es: ¿cómo meter una frase dentro de un string?
                       /* es decir, ¿cómo introducir elementos a un string luego de haber declarado a éste?
                       Hay varias formas de hacerlo, acá aprenderemos tres:
                       hablaremos de cuál podría ser la mejor forma y sobre los inconvenientes de cada una.
                       */

                       // 1ra forma:

                       printf ("Introduce una frase: "); // declaramos un "printf". (esto para solicitar por pantalla el texto que queremos almacenar dentro del string)
                       scanf ("%s", &vector2); // y ahora vamos a almacenar el texto que deseamos en el string, por medio de un "scanf". Ponemos "%s" porque es un "string".

                       // ahora, en un nuevo "printf", voy a mostrar lo que anteriormente introduje por teclado, tal que así:

                       printf ("%s\n\n", vector2); // y listo!

                       /* cuál es el incoveniente de esta forma? Pues que "scanf" sólo va a imprimir hasta donde se registre el primer espacio; es decir,
                       si pretendemos almacenar en un string la siguiente frase: "Hola, mundo.", por medio de esta 1ra forma, el "scanf" sólo va a almacenar
                       hasta "Hola,". "Scanf" tomará todas las palabras que hayan hasta que se tropiece con un espacio (" "); apenas lo encuentre, se detiene.
                       Conclusión: su uso no es recomendable para almacenar textos en un string.
                       */

                       // 2da forma:

                       printf ("Introduce una frase: "); // declaramos un "printf". (esto para solicitar por pantalla el texto que queremos almacenar dentro del string)
                       gets (vector2); // de esta forma sencilla podemos almacenar también textos en strings, por medio de "gets".

                       // ahora, en un nuevo "printf", voy a mostrar lo que anteriormente introduje por teclado, tal que así:

                       printf ("%s\n\n", vector2); // y listo!

                       /* cuál es el incoveniente de esta forma? Pues que "gets" no respeta los límites máximos de elementos, establecidos, por string; es decir,
                       en este caso, no respetaría que "vector2" sólo permita almacenar como máximo 9 caracteres (vector2[10];) y almacena más de 9 en caso dado.
                       ¿Qué ocurre? Pasa que, por ejemplo, nosotros con nuestro string "vector2" hemos reservado 13 espacios de memoria en la memoria principal;
                       entonces, lo que hace "gets" es, como diría uno vulgarmente, "pasarselo por el fajo"; esto resulta ser una mala idea, pues, está sobre-escribiendo
                       sobre lo que está eventualmente al lado de nuestra linea de códigos que está ejecutando a "vector2". En caso tal que, en un evento pesimista,
                       lo que está al lado de la linea de códigos de "vector2" sea una función muy importante de nuestro sistema operativo, la sobre-escribiría y
                       facilmente podría "crashear" nuestro ordenador.
                       Conclusión: su uso no es recomendable para almacenar textos en un string.
                       */

                       // 3ra forma:

                       printf ("Introduce una frase: "); // declaramos un "printf". (esto para solicitar por pantalla el texto que queremos almacenar dentro del string)
                       fgets (vector2, 10, stdin); /* una extensión de "fgets", la gran diferencia es que con "fgets" debemos establecer anticipadamente la cantidad de
                                                      elementos máximos que queremos almacenar en nuestro string de interés; en este caso, 10 elementos.
                                                      "Stdin" significa "Standart Input", con esta línea le estamos indicando al compilador de dónde tiene que coger
                                                      los elementos; este caso, justamente del teclado (siempre se pone para poder almacenar los valores por tecla).

                                                      Si en caso dado, por ejemplo, yo ya he establecido que en "vector2" sólo se pueda almacenar 9 elementos por teclado,
                                                      y resulta que se me da por escribir más elementos; entonces, lo que hará la función "fgets" es sólo almacenar los
                                                      9 primeros elementos pasados por tecla (y así se evita sobre-escribir sobre posibles otras líneas de código).
                                                      Evita "crashear" la PC.
                                                      */

                       // ahora, en un nuevo "printf", voy a mostrar lo que anteriormente introduje por teclado, tal que así:

                       printf ("%s\n\n", vector2); // y listo!

                       // Esta última forma es la más recomendable, tiene un defecto pequeño; pero hablaremos de eso más adelante.

                       // Dato curioso: la función "gets" y "fgets" sólo funcionan para cadenas de caracteres; de ahí la última letra que llevan: "s" de "strings".
                       /* De hecho, así como hay una función de entrada de datos para las cadenas y caracteres,
                          también hay una función para la salida de datos de cadenas y caracteres, esta función es: "puts";
                          es como decir "pon s, pon una cadena de caracteres", así.

                          La diferencia entre "puts" y "printf" consiste en que "printf" sí permite llamar o imprimir variables numericas,
                          y hasta de forma combinada al texto, por medio de especificadores de formato del tipo: "%i" o "%s", por ejemplo.
                          En cambio, la función "puts" no puede hacer esto.
                          La función "puts", además de que sólo puede imprimir strings o cadenas de texto (ningún número),
                          si en caso tal quisiera imprimir una variable de texto, no puede imprimirla de forma combinada a un texto explicito;
                          es decir, si desea llamar a una variable (necesariamente de texto),
                          debe hacerlo de forma independiente a la cadena de texto explicita y en otra función "puts".
                          En resumen, 1. la función "puts" sólo funciona para cadena de caracteres (no números) y
                          2. No puede utilizar especificadores de formato para imprimir lo que son las variables (y necesariamente de texto),
                          que permitan ser combinadas con una cadena de texto explicita.

                          Hagamos un ejemplo de cualquier frase x que queramos imprimir por pantalla:

                          printf("El número elegido fue: %i. \n\n", num); // sí pudo combinar cadenas de textos explicitas con variables (y hasta númericas)

                          La anterior frase con la función "puts" quedaría más o menos así:

                          puts("El número elegido fue: "); // no hay registro de números ni tampoco especificadores de formato.
                          printf("%i. \n\n", num);

                          Sí se percata de las diferencias?
                          */

                          // Mi recomendación: si piensa usar la función "puts" sólo usela con cadenas de texto donde no necesite llamar a ninguna variable.


  system ("pause");
  return 0;

}

// Vamos a mencionarlo de nuevo:
/* Observe que la estructura para declarar una cadena de textos (strings) es similar a declarar, explicitamente, un "array" (vector o matriz)
   Esto es así porque, literalmente, un "string" es una matriz, pero de caracteres; es decir, cuando usted crea una cadena de texto;
   esta creando una matriz, tal cual, con la singularidad de que sus elementos sean simples caracteres; los cuales, puede acceder a ellos
   (al igual que en las matrices) por medio de sus posiciones, tal que así: string[i].
*/
