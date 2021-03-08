

// imprimir por pantalla todos los números primos entre 2 y 2000

#include <stdio.h>

int main () {

  int i; // contador

  for (i = 2; i <= 2000; i++) {

      if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0) {
      printf ("%i.\n ", i);

      }

      else {
      printf ("");

      }
  }



  system ("pause");
  return 0;
}
