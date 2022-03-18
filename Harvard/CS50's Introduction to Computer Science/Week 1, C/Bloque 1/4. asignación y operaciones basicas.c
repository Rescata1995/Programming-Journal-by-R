// Ampliación punto 3.

#include <stdio.h>
#include <math.h> // la libreria <math.h> nos permite hacer operaciones matematicas más complejas, no sólo básicas.


int main () {
  int x, y, z;   // declaración de dos ó más variables de un mismo tipo (en este caso, tipo "entero") en una misma linea de códigos; serían tres declaradas: "x", "y" e "z".

  x = 10;
  y = 2;

  // profundización "operaciones básicas con variables".

  x = x + y; // suma, también la sintaxis puede escribirla de la siguiente forma: x += y;
  printf("El valor de x + y es: %i. \n", x); // resultado: 12

  x = x - y; // resta, también la sintaxis puede escribirla de la siguiente forma: x -= y;
  printf("El valor de x - y es: %i. \n", x); // resultado: 10

  x = x * y; // multiplicación, también la sintaxis puede escribirla de la siguiente forma: x *= y;
  printf("El valor de x * y es: %i. \n", x); // resultado: 20

  x = x / y; // división, también la sintaxis puede escribirla de la siguiente forma: x /= y;
  printf("El valor de x / y es: %i. \n", x); // resultado: 10

  x = x % y; // residual (me arroja el residuo de una división, lo que sobra)
  printf("El valor de x % y es: %i. \n", x); // resultado: 0

  /* tenga en cuenta algo: si anteriormente una variable fue modificada a valor 0 (ó a cualquier valor) y después desea operarla,
  sin antes haber estructurado dicha variable a su valor inicial, quizás le arroje unos resultados errados o inesperados. */

  // operaciones matematicas más complejas (que requieren de insertar la libreria <math.h>)

  x = pow (y, x); // forma de hacer una potencia con dos variables o números, función "pow". En este ejemplo, se interpretaría como: "y elevado a la x" (y^x).
  printf("el resultado de elevar y a la x es: %i.\n", x); // resultado: 1024

  x = sqrt (x); // forma de sacarle la raiz cuadrada a una variable o número, función "sqrt". En este ejemplo, se interpretaría como: "raiz cuadrada de x".
  printf("La raiz cuadrada de x es: %i. \n", x); // resultado: 32

  // operaciones de incremento

  x++; // para sumar una unidad a x de forma abreviada (x = x + 1;)
  printf("Sumarle una unidad a x daría: %i. \n", x); // resultado: 33

  x--; // para restar una unidad a x de forma abreviada (x = x - 1;)
  printf("Restarle una unidad a x daría: %i. \n", x); // resultado: 32


  system ("pause");
  return 0;

  }
