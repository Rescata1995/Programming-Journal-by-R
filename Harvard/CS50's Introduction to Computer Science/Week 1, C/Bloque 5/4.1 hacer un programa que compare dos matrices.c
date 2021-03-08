// Ejercicio: hacer un programa que compare dos matrices (donde sus valores sean generados de forma aleatoria)

#include <stdio.h>

void matrices (int m1 [][2], int m2 [][4]);
void condicional (int m1 [][2], int m2 [][4]);


int main () {

  int matriz1 [2][2];
  int matriz2 [4][4];

  matrices (matriz1, matriz2);
  condicional (matriz1, matriz2);


  system ("pause");
  return 0;

}

void matrices (int m1 [][2], int m2 [][4]) {

  int a, b;
  int x, z;

  srand(time(NULL));

  for (a = 0; a < 2; a++) {
      for (b = 0; b < 2; b++) {
          m1 [a][b] = rand()%20;
    }
  }

  for (x = 0; x < 4; x++) {
      for (z = 0; z < 4; z++) {
          m2 [x][z] = rand()%100;
    }
  }
}

void condicional (int m1 [][2], int m2 [][4]) {

  int a, b;
  int x, z;

  for (a = 0; a < 2; a++) {
      for (b = 0; b < 2; b++) {
          printf ("%i ", m1 [a][b]);
    }
    printf ("\n");
  }


  printf ("\n");


  for (x = 0; x < 4; x++) {
      for (z = 0; z < 4; z++) {
          printf ("%i ", m2 [x][z]);
    }
    printf ("\n");
  }


  printf ("\n");


if (m1 [a][b] == m2 [x][z]) {
    printf ("Comparando ambas matrices nos damos cuenta que son iguales. \n\n");
  }

else {
    printf ("Comparando ambas matrices nos damos cuenta que DEFINITIVAMENTE NO son iguales. \n\n");
  }
}
