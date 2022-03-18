// ampliación estructuras selectivas

/* 1er ejercicio: Realizar un programa que me dé la entrada estándar de un número entero positivo y escriba en la sálida estandar si es par o impar */


#include <stdio.h>

int main () {

  int x;
  x = 2;

  int y;
  printf ("Inserte un numero, queremos saber si su numero es par o no: ");
  scanf ("%i", &y);

  printf ("el numero y es equivalente a: %i.\n\n", y);

  if (y % x == 0) {
    printf ("el numero %i es un numero par.\n", y);
  }

  else {
    printf ("el numero %i es un numero impar.\n", y);
  }




  system("pause");
  return 0;

}
