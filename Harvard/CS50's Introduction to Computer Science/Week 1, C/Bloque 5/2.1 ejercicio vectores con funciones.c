// Ordenar un vector de 10 enteros de menor a mayor mediante una función

#include <stdio.h>

void ordenar (int a[]);
void imprimir (int x[]);

int main (){

  int v[10] = {4, 7, 8, 9, 6, 5, 2, 1, 3, 0};

  ordenar (v);
  imprimir (v);

  system ("pause");
  return 0;

}

void ordenar (int a[]) {
  int i, j, aux;

  for (i = 0; i < 10; i++) {
    for (j = i; j < 10; j++) {
      if (a[i] > a[j]) {
        aux = a[i];
        a[i] = a[j];
        a[j] = aux;

      }
    }
  }
}

void imprimir (int x[]) {
  int a;

  for (a = 0; a < 10; a++) {
    printf ("%i, ", x[a]);
  }
}
