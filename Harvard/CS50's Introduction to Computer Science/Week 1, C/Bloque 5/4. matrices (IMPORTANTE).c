// Hacer una matriz y leerla por pantalla.

/* En programación, una Matriz no es más que un conjunto de vectores (no es casualidad que éste sea el tema que sigue a vectores, las matrices)
También puede definirse como un vector de varias dimensiones (¿Un vector un poco más complejo?). Lo cierto es que, una matriz es la intercepción de vectores.
Bajo esta consecuencia de ideas, como una matriz es un conjunto de vectores, entonces practicamente todo se hará como con los vectores
(a nivel de programación, muy poca diferencia. Ya lo veremos).

*/

#include <stdio.h>

void introduce (int matriz[5][5]);
void leer (int matriz[5][5]);

int main () {

  int matriz [5][5]; // esto sería, ahora, un vector de dos dimensiones. En caso que quisieramos un vector de 3D, sería entonces 3 corchetes; tal que así, por ej.: [x][y][z];
                     // para nuestro caso, el vector que hemos definido es de 5*5: 5 filas con 5 columnas (no necesariamente debe coincidir el número de filas con columnas).
                     // dato: cualquier imagen 2D en programación, ya sea de un juego, de una fotografia, etc,... cada pixel equivale a una matriz.

  introduce (matriz);
  leer (matriz);



  system ("pause");
  return 0;
}

void introduce (int matriz[5][5]) { /* todo muy similar al apartado 2, bloque 5 (sobre vectores). Como estamos ante una matriz (o un vector multi-dimensional)
                                       y no ante un simple vector, son varios los pares de corchetes por colocar; en este caso, 2 pares (por ser de 2 dimensiones).
                                       */
  int i, j; /* Hemos declarado dos variables "contadores"; debido a que, estamos frente a un vector multi-dimensional de especificamente 2 dimensiones.
               Si bien recuerda en un vector, para introducir elementos, necesitabamos solamente hacer uso de bucles (especialmente For);
               en este caso, como estamos ante una matriz (o vector multi-dimensional) de dos dimensiones, necesitaremos entonces 2 bucles For y serán anidados.
               Como serán dos bucles For; en consecuencia, tendremos que crear 2 contadores.
               */

               /* Ahora bien: inicialmente habíamos definido que sería una matriz, que además de ser de 2 dimensiones, sería de 5*5;
                  por tanto, en ese orden de ideas, tendríamos que meter 25 elementos a mano.
                  Sin embargo, como son demasiados elementos a meter a mano, haremos lo siguiente:
                  crear un programa que se encargue de meter los números de forma aleatoria. Así:
                  */

  srand(time(NULL)); /* esta sola línea de códigos se encargará de meter los valores númericos de forma aleatoria
                        (o por lo menos darle la facultad de hacerlo a la función "rand()%" para que pueda obtener dichos números de forma aleatoria).
                        */

  for (i = 0; i < 5; i++) {
      for (j = 0; j < 5; j++) {
          matriz [i][j] = rand()%10; /* El número "10" define el limite de números posibles, para ser seleccionados, de forma aleatoria.
                                        La lógica es así: si he colocado "10", los números aleatorios seleccionados irán del 0 al 9.
                                        */
    }
  }
}

void leer (int matriz[5][5]) {

  int i, j;

  for (i = 0; i < 5; i++) { // este bucle, el del contador "i", se encargará de las filas de la matriz
      for (j = 0; j < 5; j++) { // este bucle, el del contador "j", se encargará de las columnas de la matriz
          printf ("%i ", matriz [i][j]);
    }
    printf ("\n"); /* queremos que, al finalizarse la creación de la primera fila y la primera columna (que se dan de forma seguida), se evidencie
                      un salto de linea para que la segunda fila no se imprima sobre la misma linea código de la primera (y así mismo para con las columnas).
                      Así lo establece toda la sintaxis de nuestro bucle For con ayuda de esta función "printf" ejecutada.
                      */
  }
}
