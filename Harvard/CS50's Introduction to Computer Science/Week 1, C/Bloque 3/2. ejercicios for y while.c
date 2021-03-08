// ejercicio 1. Realice un programa que imprima la suma de los numeros pares entre dos y 2 mil

#include <stdio.h>

int main () {

  int i; // numero contador

  float suma; // lo definimos como float porque resultara siendo un numero largo
  suma = 0;

  for (i = 2; i <= 2000; i += 2) {
    suma = suma + i; // me sumara todos los numeros del incremento entre sí, pero de dos en dos y empezando desde el dos (2) hasta el último número dos mil (2000)

  }

  printf ("la suma de los numeros en cuestion es %f.\n", suma);
  // esta linea de codigos va por fuera del bucle for porque no queremos que se ejecute cada que se itere (sólo queremos que se ejecute una vez)



  system("pause");
  return 0;
}
