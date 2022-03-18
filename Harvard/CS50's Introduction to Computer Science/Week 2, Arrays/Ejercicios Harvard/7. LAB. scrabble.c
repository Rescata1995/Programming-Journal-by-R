#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet // global variable
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

//prototype
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

    // TODO: Print the winner

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score1 < score2)
    {
        printf("Player 2 wins!\n");
    }
    else
    {
        printf("Tie!\n");
    }
}

int compute_score(string word)
{
    // TODO: Compute and return score for string
    int score = 0;

    for (int i = 0, n = strlen(word); i < n; i++)
    {
        if (isupper(word[i]))
        {
            score += POINTS[word[i] - 'A'];
        }
        else if (islower(word[i]))
        {
            score += POINTS[word[i] - 'a'];
        }
    }
    return score;
}

/* Usted ya conoce que, por predeterminación, los caracteres también se componen por un valor númerico regido por un sistema de códigos
   llamado: "ASCII", empezemos por esto. Si se fija bien, la única diferencia entre el conteo del código ASCII y el conteo de las posiciones de nuestro
   Array POINTS[] es de 65 números (si la letra insertado está en Mayuscula) o de 97 números (si la letra insertado está en Minuscula) y sería así porque,
   es desde esos números donde comienzan las asignaciones de valor con código ASCII hacia las letras, a las mayusc y minusc respectivamente. En cambio,
   en nuestro array el conteo de las posiciones comienza desde el número 0.

   Entonces, nuestro array ya está diseñado de tal forma que, cada posición de sus elementos (y sus respectivos valores que contemplan),
   correspondan con cada una de las letras del abecedario en su orden natural, tal que así: el valor de la posición POINTS[0] está reservado al caracter 'a',
   el de POINTS[1] reservado a la 'b', el de POINTS[2] reservado a la 'c', el de POINTS[3] reservado a la 'd',... y así sucesivamente.
   Con el código ASCII también existe este mismo "orden de las cosas", sólo que la correspondencia en valor númerico de las letras y su posterior conteo
   (su equivalente en el Array seria el "conteo de las posiciones de los elementos con sus respectivos valores") comienzan desde el 65 o 97 y no desde 0,
   como se da en nuestro array definido POINTS[]: recuerde que, en todo Array, la posición inicial del primer elemento es: 0.

   Sin embargo, en el código Ascii, esta posición, corresponde también (o más bien) al valor númerico del caracter en cuestión y comienza desde 67 o 97.

   Lo que queremos entonces es eliminar esta diferencia para que, el valor designado númericamente a las letras con código Ascii, se traslade
   al valor númerico definido en nuestro Array POINTS[] a partir de la posicion 0 (sin importar si las letras están en mayusculas o en minusculas)

   Dicho todo esto, qué tendríamos que hacer entonces para que, en vez de quedarnos con el valor predeterminado por el que se componen los caracteres
   del abecedario en el código ASCII, pase a tomar los valores númericos definidos para cada posición en nuestro Array POINTS[]? La pregunta lo resume todo.

   Tendríamos que llamar, caracter por caracter, de la palabra solicitada por teclado al usuario y, luego, restarle a todas el valor númerico de 'A'
   contemplado en el código Ascii (si esa letra insertada fue una mayuscula) o restarle el valor númerico de 'a' (si la letra, en vez, es minuscula),

   aclaración: puedes restar propiamente las letras entre sí, el compilador va interpretar que te quieres referir sus valores númericos en ASCII.

   ¿por qué precisamente el valor númerico de 'a' ó 'A' y no otro?; pues, porque justamente queremos que haya una equivalencia
   entre el conteo de nuestro Array y la asignación númerica que se le da a las letras en código Ascii; de tal manera que con 'a' o 'A' eliminariamos
   toda diferencia entre el número de las posiciones de nuestro Array (que empiezan por 0) y el valor númerico de las letras en código Ascii
   (que empiezan por ser definidas desde el número 65 o por 97, depende de si es mayuscula o minuscula respectivamente).
   El resto (el número que queda), el valor númerico de la letra en código Ascii (la letra analizada), pero con el descuento del valor númerico
   de la vocal "a" o "A", segun sea el caso, sería el equivalente a la posición del Array (y su valor) que queremos que corresponda a la letra en cuestión.

   Entonces, como el valor númerico restante de la letra insertada correspondería a la posición del Array POINTS[]
   (porque así se establecio en nuestra función) y el índice de las posiciones están organizadas de tal forma que, correspondan,
   con el orden natural de las letras del abecedario, tal que la posición 0 quede para la "a", la posición 1 para la letra 'b', la 2 para la 'c',
   y así sucecesivamente... entonces, el valor númerico restante de la letra correspondería realmente con su posición dentro del array.
   Para todas las letras, tendriamos que el valor númerico, el "resto", que almacena el array... correspondería con la posición de cada letra
   (dentro del array); y, para cada posición (cada posición para cada letra del abece), ya hemos definido un valor deseado para dichas letras en cuestión
   (según su ubicación, lo dicho),
   sea para la primera palabra (pedida por tecla al primer jugador) o para la segunda palabra (pedida por tecla al segundo jugador).

   Entonces, la idea es crear una función que, luego de que sea llamada (la función), se le pase como parametros, a cada una por separado,
   las palabras solicitadas por tecla al usuario; posteriormente, se debe decir que palabra posee el mayor valor númerico si sumamos
   los nuevos valores definidos por el array para cada caracter de cada palabra. Por último, qué imprima entonces quién ganó o si hubo empate.

   Toda la estructura lógica a lo anteriormente explicado está en la función compute_score y el llamado de esa función se da en la función principal.
   Pongamos un ejemplo para que se entienda mejor.

   Tenemos la palabra "Roberto", lo que hace esta formula "score += POINTS[word[i] - 'A'];" es tomar letra por letra, por medio de un bucle for y
   con un contandor inicializado en 0, de la palabra insertada por tecla; luego se les resta el caracter 'A' (en este caso la "A" es mayuscula debido a que
   nuestra primera letra de la palabra insertada por tecla es la "R" mayuscula); entonces, lo que significa esto es restar "R" - "A"; es decir,
   el valor númerico en código ASCII de "R" con el valor númerico en código ASCII de "A". Sería: 82 - 65, lo cual da: 17. Este 17, como lo indica
   la formula "score += POINTS[word[i] - 'A'];", será almacenado dentro de POINTS[],
   quedando así como indice que señala una posición de un elemento de la matriz POINTS[], tal que: POINTS[17];,
   entonces, como lo habiamos explicado, la posición 17 del array POINTS justamente corresponde a la posición de R dentro del abecedario
   (si contamos el abecedario desde 0), y bajo ese orden y lógica, fue que se diseñó el array.
   Lo que quiere decir que, "R" asumiría el valor que tenga el array en dicha posición, en la posición 17. El valor de "R" sería entonces: 1.
   Este valor, 1, se va almacenando en una suma acumulativa, dentro de la variable "score", que irá sumando el total de los valores restantes
   que tengan las demás letras hasta el fin de la palabra; en este caso, hasta llegar a la última "o" de "Roberto".
   Es así porque así lo hemos definido en nuestra formula "score += POINTS[]"; (que sume sobre el "score" los demás "score" de las otras letras y lo acumule)
   y, como la condición es, hasta que "n" (la longitud de la palabra) deje de ser mayor al contador "i"; entonces, queremos que haga la suma acumulativa
   de cada score de cada caracter de la palabra hasta el final de la palabra en sí mismo (hasta donde llegue su longitud)
   */
