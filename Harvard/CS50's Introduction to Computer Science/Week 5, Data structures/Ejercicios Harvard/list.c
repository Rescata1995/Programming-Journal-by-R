
/* Retomemos, entendiamos que la búsqueda es genial en matrices si las mantiene ordenadas, cierto? Pero tan pronto como quieras empezar a modificar dinámicamente una matriz,
   se vuelve muy molesto rápidamente. Y honestamente, con el tiempo, especialmente para software del mundo real con gran cantidad de datos, se tornará agobiante;
   es decir, no quieres estar constantemente cambiando todos tus datos alrededor de la memoria de la computadora, una y otra vez. Esto no se ve bien en términos de "diseño".

   He aquí, la importancia de las "listas enlazadas": nos facilita la tarea. Tales listas, se asistirán con punteros también.
*/

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
  int number;
  struct node *next;
}
node;

int main(void)
{
  node *list = NULL;

  node *n = malloc(sizeof(node));
  if (n == NULL)
  {
    return 1;
  }
// 1er nodo
  n -> number = 1;
  n -> next = NULL;
  list = n;
//

  n = malloc (sizeof(node));
  if (n == NULL)
  {
    free(list);
    return 1;
  }
// 2do nodo
  n -> number = 2;
  n -> next = NULL;
  list -> next = n;
//

  n = malloc (sizeof(node));
  if (n == NULL)
  {
    free(list -> next)
    free(list);
    return 1;
  }
// 3er nodo
  n -> number = 3;
  n -> next = NULL;
  list -> next -> next = n;
//

  for (node *aux = list; aux != NULL; aux = aux->next)
  {
    printf("%i\n", aux->number); // impresión del contenido de los valores de los nodos.
  }

  while (list != NULL)
  {
    node *aux = list -> next;
    free(list);
    list = aux;
  }

  return 0;
}
