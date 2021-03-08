// Arrays/vectores.

#include <stdio.h>

int main () {

  /* Un array (o vector) es una estructura que tiene como función almacenar varias variables; dichas variables están relacionadas entre sí o son del mismo tipo

  /* UN DATO CURIOSO QUE DEBE SABER: "Array", al ser traducido literalmente al español, traduce: "Matriz";
     pero, ojo, si bien matriz también es un vector, no necesariamente es un vector unidimensional
     (como será el caso que trataremos ahora mismo); por lo general en español se enseña que,
     una matriz, corresponde a un vector multi-dimensional. Tenga cuidado con eso. Entonces,
     cuando hablamos de vectores, nos referimos explicitamente a vectores uni-dimensionales; y,
     cuando hablamos de matrices, nos queremos referir a vectores multi-dimensionales.

  */ // Ejemplo:

  int v [] = {3, 5, 8, 7, 9}; /* De esta manera se hace un vector, este vector recibe por nombre: "v" y está compuesto por 5 variables de tipo "entero" (int).
                                 Estas variables se caracterizan por ocupar, cada una de ellas, una posición diferente dentro del vector; este caso, vector "v".
                                 Esas posiciones comienzan numericamente desde cero y van corriendo de forma ascedente desde la posición inicial; tal que así:
                                 El primer número del vector "v", el cual es tres (3), ocupa la posición v[0];
                                 El segundo número del vector "v", el cual es cinco (5), ocupa la posición v[1];
                                 El tercer número del vector "v", el cual es ocho (8), ocupa la posición v[2];
                                 El cuarto número del vector "v", el cual es siete (7), ocupa la posición v[3];
                                 El quinto número del vector "v", el cual es nueve (9), ocupa la posición v[4];

                                 */

  // Pongamos que por ejemplo queremos hacer un listado de todos los elementos o variables del vector con un bucle; sería así:

  int i;

  for (i = 0; i < 5; i++) {

      printf ("%i. \n", v[i]);  /* Resultado: 3. 5. 8. 7. 9. (con saltos de lineas). El incremento no será de 0 a 5,
                                   porque realmente no se está leyendo el valor de "i" solamente; sino, de v[i] (de las variables del vector "v");
                                   donde i, por las condiciones estipuladas, se incrementa de uno en uno desde el 0, su valor de inicio, hasta el 5 (su condición).
                                   */


  /* como se dará cuenta, los vectores nos darán la oportunidad de trabajar con varias variables dentro de un mismo bucle.
     Generalmente, con variables independientes entre sí, esto no se podría. (con los bucles se podría ahorrar mucho) */

  }

  system ("pause");
  return 0;

}
