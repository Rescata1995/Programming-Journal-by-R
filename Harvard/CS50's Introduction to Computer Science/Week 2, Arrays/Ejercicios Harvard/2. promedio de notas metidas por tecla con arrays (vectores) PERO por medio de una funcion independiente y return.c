// Apoyese del Bloque 4, apartado 2. Es la base para poder entender la resolución de este ejercicio (la única novedad es que este planteamiento incorpora Arrays).
// Estamos llamando a una función independiente, dentro de la función "main", para que sus condiciones (devueltas en return) afecten a las variables de "main".

#include <stdio.h>
#include <cs50.h>

float average(); // prototipo (curiosamente también podemos crear funciones personalizadas o independientes con el tipo de dato: "float")

const int TOTAL = 3;
// esta vez hemos fijado una variable "constante" (que sabemos que no cambiará nunca), entonces para mantener nuestro código más limpio.
// Corresponde al total de notas que se tomarán; es decir, 3. Las notas que se tomarán son justamente los elementos del Array "scores".

int main(void)
{
  int scores[TOTAL];
  for (int i = 0; i < TOTAL; i++)
  {
    scores[i] = get_int("Score: ");
  }

  printf("Average: %f\n", average(TOTAL, scores));
}

float average (int length, int array[])
{
  int sum = 0;
  for (int i = 0; i < length; i++)
  {
    sum = sum + array[i];
  }
  return sum / (float) length;
}
