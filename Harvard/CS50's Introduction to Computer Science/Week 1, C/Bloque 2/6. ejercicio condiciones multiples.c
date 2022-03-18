// Ejercicio condicional multiple

/* Escriba un programa que acepte la entrada de tres numeros (horas, minutos & segundos) y que luego, en una salida,
nos confirme si esos parametros de tiempo introducidos son interpretados como correctos para un reloj adicionandole un segundo más */

#include <stdio.h>

int main () {

  int hora, mins, sgs;

  printf ("Hora: ");
  scanf ("%i", &hora);

  printf ("Minutos: ");
  scanf ("%i", &mins);

  printf ("Segundos: ");
  scanf ("%i", &sgs);

  if ( hora <= 23 && mins <= 59 && sgs <= 59) {
    sgs += 1;

    if (sgs == 60) {
        mins += 1;
        sgs = 0;
    }

    if (mins == 60) {
        hora += 1;
        mins = 0;
    }

    if (hora == 24) {
        sgs = 0;
        mins = 0;
        hora = 0;

    }

    printf ("La hora insertada es completamente correcta, reloj actual: %i:%i:%i.\n\n", hora, mins, sgs);
  }

  else {
    printf ("Verifique sus datos, no es usual ver estos numeros en un reloj convencional :S.\n\n");
  }


  system("pause");
  return 0;

}
