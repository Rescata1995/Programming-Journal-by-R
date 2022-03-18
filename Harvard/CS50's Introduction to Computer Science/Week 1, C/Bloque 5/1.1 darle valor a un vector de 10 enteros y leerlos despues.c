// Darle valor a un vector de 10 números y leerlos después (meter cada valor a asignar por tecla, uno a uno)

#include <stdio.h>

int main () {

int v [10]; /* Si por ejemplo queremos especificar directamente cuántas posiciones queremos registrar o guardar en nuestro vector,
                 también lo podríamos hacer, esa especificación se hace dentro de las llaves []; y es por medio de la colocación de un número:
                 el número que corresponde a las posiciones que, en efecto, queremos guardar; en este caso, hemos decidido guardar 10 posiciones.
                 Quiere decir entonces que, hemos guardado 10 posiciones porque quiero guardar en este vector 10 variables de tipo entero ("int").

                 Si pongo más de 10 números dentro del vector, el sistema emite un error; pues, ya he declarado que el vector va a guardar
                 solamente un espacio, dentro de su memoria, para 10 números enteros como máximo. (10 variables de tipo entero).
                 */

// Entonces, a lo que vinimos: nos valdremos de ese ejercicio de un bucle For también (generalmente los vectores trabajan con bucles);

int i;

  for (i = 0; i < 10; i++) {

  printf ("dale valor al vector en la posicion %i: ", i);
  scanf ("%i", &v[i]);

  }


  for (i = 0; i < 10; i++) { // acá mostramos el listado completo del vector ya creado con sus 10 variables de tipo entero, designadas por tecla, uno a uno.

  printf ("%i, ", v[i]);

  }

  system ("pause");
  return 0;

}
