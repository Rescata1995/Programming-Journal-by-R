// Ejercicio. Comprobar si dos numeros diferentes son primos // Solución del profe

#include <stdio.h>

int primos (int a);

int main () {

  int x, y, primo1, primo2;

  printf ("inserte primer numero para saber si es primo o no: ");
  scanf ("%i", &x);

  printf ("inserte segundo numero para saber si es primo o no: ");
  scanf ("%i", &y);

  primo1 = primos(x);  /* "x" puede tomar sólo dos valores: 1 ó 0; pues, "x" está en función de la función "primos" a través de su variable "j". (return j;)
                          Hemos encasillado todo lo anterior en una variable "primo1" para poder manipular el llamado de la función "primos" en "x".
                          */

  primo2 = primos(y);  /* "y" puede tomar sólo dos valores: 1 ó 0; pues, "y" está en función de la función "primos" a través de su variable "j". (return j;)
                          Hemos encasillado todo lo anterior en una variable "primo2" para poder manipular el llamado de la función "primos" en "y".
                          */

                          // Entonces,...

  if (primo1 == 0) { // es decir, si "j es igual a 0" pero en terminos de la variable "x" de la función "main"...
     printf ("el numero %i es un numero primo. \n\n", x);
     // recuerde que cuando "j" es igual a 0 estamos ante un número primo. Así lo definimos en la función "primos".
  }

  else {
     printf ("el numero %i NO es un numero primo. \n\n", x);
     // de lo contrario...
  }

  if (primo2 == 0) { // es decir, si "j es igual a 0" pero en terminos de la variable "y" de la función "main"...
     printf ("el numero %i es un numero primo. \n\n", y);
   }

   else {
     printf ("el numero %i NO es un numero primo. \n\n", y);
   }



  system ("pause");
  return 0;
}

int primos (int a) {

  int i, j, aux;

  j = 0;

  for (i = 2; i < a; i ++) {
      aux = a % i;
      if (aux == 0) {
         j = 1;
      }
  }

  return j;
}
