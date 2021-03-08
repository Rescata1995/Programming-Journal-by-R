
// conteo del 1 al 100 con 2 digitos por número, entre comas y finalizando el 100 con un punto final
// y abcedario enlistado por medio de un bucle

#include <stdio.h>

int main(void){

  int x;

      for (x = 1; x < 100; x++) {
          printf ("%02i, ", x);
      }

          printf ("100.\n\n");



  return (0);
}
