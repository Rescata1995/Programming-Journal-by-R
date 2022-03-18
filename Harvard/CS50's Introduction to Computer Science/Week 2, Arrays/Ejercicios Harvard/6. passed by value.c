#include <stdio.h>

int increment (int x);

int main (void)
{
  int x = 1;
  int y;
  y = increment(x);
  printf("x is %i, y is %i\n", x, y);
}

int increment (int x)
{
  // x = 4; (si inicializamos a x con 4, qué sucede y por qué?). Explicación en el parrafo 5. del apartado 1. introducción a funciones, bloque 4.
  x++;
  return x;
}
