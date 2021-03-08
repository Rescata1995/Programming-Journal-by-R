// Ejercicio. Comprobar si dos numeros diferentes son primos // Esta es la forma en cómo lo solucioné yo sin ver el video

#include <stdio.h>

int primos (int a);

int main () {

  int x, y;

  printf ("inserte un primer numero para verificar si es primo: ");
  scanf ("%i", &x);

  printf ("inserte un segundo numero para verificar si es primo: ");
  scanf ("%i", &y);

  printf ("\n");

  primos (x);
  primos (y); /* Acá sí se hizo necesario llamar a una variable particular de la función principal "main" debido a que, con ella, necesitamos esta vez sí identificar
                 una condición en especifico (evaluar el primer numero de entrada para saber si es primo o no, y no el segundo número, por ejemplo)
                 de una misma función independiente que contiene todas las condiciones en cuestión (evaluar también la entrada del segundo número); entonces, toca puntualizar.
                 */



  system ("pause");
  return 0;

}

int primos (int a) {


  int primo;

  if (a % 2 == 0 || a % 3 == 0 || a % 5 == 0 || a % 7 == 0) {
     primo = 1;

     }


  if (primo == 1) {
     printf ("%i es un numero primo. \n\n ", a);

  }

  else {
     printf ("%i no es un numero primo. \n\n", a);

  }

  return primo;

}
