// La idea del ejercicio es que, por medio de un Array, calcule el promedio de notas (cualquiera que sean y todas metidas por tecla)

#include <stdio.h>

int main(void)
{
  int total;

  // contador: lo necesitaremos luego
  int i;

  do
  {
    printf("Cuantas notas se tomaron en el curso: ");
    scanf("%i", &total);
  } while (total < 0);

  printf("\n");

  if (total == 0)
  {
    printf("Por algun motivo este curso no tiene registro de notas, redirijase a Coordinacion Academica. Disculpe las molestias.\n\n");
  }
  else
  {
    // por medio de un Array, estoy integrando dentro del mismo, todas las notas tomadas en el curso (el numero de notas tomadas varia y depende lo que se pase por tecla)
    int notas[total];

    // Queremos optimizar el proceso de recolección de notas, ya que el mecanismo es un "array", por medio de bucles (idealmente del tipo for).

    /* Los bucles en Arrays ayudan ciertamente porque el contador "i" (propio de un bucle) puede pasarse por ser, en cada iteracción,
    los elementos correspondientes al array en función a la posición de cada uno de ellos;
    siendo así capaz, entonces, de reemplazarlos a todos: uno por uno en cada paso del bucle. Tal que así, por ejemplo:
    Array[i], donde "i" comienza a ser inicializada en 0 (generalmente) y se incrementa de uno en uno (generalmente) hasta donde la condicional del bucle se lo permita
    (que muy por lo general tiene que ver con el límite, también, relacionado a la totalidad de elementos declarados o permitidos dentro del Array al inicio).
    */

    // Necesitamos una variable auxiliar que sume, iterativamente, sobre cada nota que se vaya pasando por tecla (que sume todas las notas sobre sí, se llamará: "suma").
    /* Lo anterior se hace con la intención de poder, luego, tener una variable que nos haya acumulado el total de las sumas de todas las notas registradas
       para poder, al final, conocer la media de las mismas por medio de una división sobre la var "total" (que es precisamente la var que contabilizó cuántas notas hay en sí).
       */

    float suma = 0; // se declara float para tener en cuenta los decimales de la división y no tener luego que hacer un proceso de "casting".

    for (i = 0; i < total; i++)
    {
      printf("Nota %i: ", i+1);
      scanf("%i", &notas[i]);

      suma = suma + notas[i]; // lo mismo que su forma "refinada": suma += notas[i];
    }

    printf("\n");
    printf("El promedio de notas finales es: %.02f.\n\n", suma/total);
  }
}
