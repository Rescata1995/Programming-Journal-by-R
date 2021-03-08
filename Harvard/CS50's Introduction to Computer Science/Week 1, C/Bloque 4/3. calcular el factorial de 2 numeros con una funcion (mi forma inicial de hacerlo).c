// Ejercicio. Calcular el factorial de 2 numeros con una funcion. // Esta es la forma en cómo lo solucioné yo sin ver el video

#include <stdio.h>


int factorial ();
int factorial2 ();


int main () {

  int aux;

  aux = factorial (); /* en esta ocasión, bajo este procedimiento, no fue necesario pasarle una variable de la función "main" al llamado de la función "factorial".
                         pues, como creamos una función independiente para cada numero de entrada, para cada factorial, entonces no se hace necesario crear
                         una variable dentro de la función principal "main" que se identifique con cada una de las condiciones estipuladas en una nueva función creada;
                         pues, sólo hay una condición por función independiente */

  printf ("el factorial del numero uno insertado es %i.  \n\n", aux);

  int aux2;

  aux2 = factorial2 (); // en esta ocasión, bajo este procedimiento, no fue necesario pasarle una variable de la función "main" al llamado de la función "factorial2".

  printf ("el factorial del numero dos insertado es %i.  \n\n", aux2);



  system ("pause");
  return 0;

}

int factorial (int num1, int fact1, int i) {

  printf ("inserte numero 1 para calcular su factorial: ");
  scanf ("%i", &num1);
  printf("\n");

  fact1 = 1;

  for (i = 1; i <= num1; i++) {
      fact1 = fact1 * i;

  }

  return fact1;

}

int factorial2 (int num2, int fact2, int j) {

  printf ("inserte numero 2 para calcular su factorial: ");
  scanf ("%i", &num2);
  printf("\n");

  fact2 = 1;

  for (j = 1; j <= num2; j++) {
      fact2 = fact2 * j;

  }

  return fact2;

}


/* hemos creado dos funciones independientes a la función principal; sin embargo, esto no es necesario. Una misma función se podría re-utilizar para ambas factoriales.
   de hecho, en informatica, todo lo que se pueda re-utilizar, se utiliza: esto genera códigos más simples y mientras más simple sea un código resulta más eficiente;
   adicionalmente, es más probable que sea detectado con mayor rapidez un posible error, lo mismo que es más dificil tener un error de hecho.
   Es preciso decir de que, en principio, las funciones fueron creadas para justamente acortar el camino en la codificación.

   Dicho lo anterior, el profesor ha hecho caso a lo anteriormente planteado. Veamos la forma en cómo resolvio el mismo ejercicio. */
