// Saber cuándo un número es primo

#include <stdio.h>

int main () {

  int x; // número limite del listado, insertar por teclado
  int i; // contador

  printf ("Inserte numero limite para conocer, en un listado, \ntodos los numeros primos que hay hasta el numero limite insertado: ");
  scanf ("%i", &x);

  printf ("\n");

  for (i = 2; i <= x; i++) {
      if (i % 2 == 0 || i % 3 == 0 || i % 5 == 0 || a % 7 == 0) {
         printf ("%i, ", i);
      }

      else {
         printf ("N, ");
      }

  }

  printf ("\n\n");

  /* Ahora, una forma de hacer el ejercicio sin hacer un listado de todos los números primos de x a y número;
     sino, saber si puntualmente el número insertado por teclado resulta ser un número primo o no realmente */

  int a, b, aux1, aux2; // número de interés a saber si es primo o no, contador, auxiliar 1, auxiliar2


  printf ("Introduce un numero cualquiera: ");
  scanf ("%i", &a);

  aux2 = 0;

  for (b = 2; b < a; b++) {
      aux1 = a % b; // lo que hará es verificar (y guardar en una variable auxiliar, aux1)
                    // si alguno de todos los números que se comprenden desde "b" (2) hasta "a" (insertado por teclado),
                    // hay alguno que deje un residuo equivalente a 0 si dividimos (o al dividir) a / b;
                    // es decir, dividiendo "a" sobre todos y cada uno de los números que hay desde "b" hasta la misma "a".
                    // si alguno de todos esos números, al dividir, deja un residuo igual a: 0; quiere decir que,
                    // estamos frente un número NO primo; de lo contrario, si el residuo no da 0, ese número es primo.


      if (aux1 == 0) {
          aux2 = 1; /* como no queremos imprimir en cada iteracción del bucle si el número en cuestión es primo o no
                       (al no poner printf directamente despues del aux == 0 que aún está dentro del bucle for),
                       entonces nos apoyamos de una segunda variable auxiliar que sí podamos incorporarla dentro del bucle for
                       para luego sacarla del bucle y hacer las respectivas comparaciones con sus condicionales por fuera de él
                       y así no repetir las impresiones.
                       (es necesaria la creacion de una segunda variable auxiliar dentro del bucle para que pueda analizar uno por uno el residuo, en cada iteracción,
                       de los numeros comprendidos desde "b" hasta su tope "a"; de lo contrario, el analisis del ejercicio seria incompleto y estaría expuesto a errores)
                       */
      }
  }

  if (aux2 == 1) {
     printf ("%i no es primo. \n", a);

  }

  else {
     printf ("%i es primo. \n", a);
  }

  system ("pause");
  return 0;

}

// Recuerde, mientras menos veces sea necesario repetir un bucle más eficiente será un programa: norma general
