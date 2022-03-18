// Ejercicio: hacer un programa que compare dos matrices (donde sus valores sean generados de forma aleatoria)

#include <stdio.h>

void introduce (int matriz [][2]);
void compara (int m1 [][2], int m2[][2]);

int main () {

  int matriz1 [2][2];
  int matriz2 [2][2];
                       // otra forma de llamar a la función:
  introduce (matriz1); // Hacer llamados de la función independiente, por separado, para cada variable de la función principal: (matriz1);, (matriz2);
  introduce (matriz2); // por lo general se hacen varios llamados de función, por cada variable, cuando las condiciones de la función creada
                       // se aplican de manera estrictamente igual para cada variable de la función principal (sin variación alguna):
                       // de tal manera que, no se hace necesario crear más de una variable dentro de los parentesis de las funciones independientes
                       // (es decir, la variable que va a reemplazar los valores o ejecutar una función dentro de las variables de la función principal)
                       // Pues deseamos que se ejecute, de forma estrictamente igual,
                       // la función independiente de la variable sobre todas las variables de la función principal.
                       //

  compara (matriz1, matriz2); // y esta ya es la forma convencional con la que veniamos llamando a las funciones independientes dentro de la función principal;
                              // idealmente es usada cuando las condiciones de las funciones independientes no se desean aplicar de forma estrictamente igual
                              // sobre todas las variables de la función principal; ya que, se hace necesario crear más de una variable dentro de los parentesis
                              // de la función independiente para que, cada variable de la función independiente,
                              // afecte de manera individual sobre cada variable de la función principal (matriz1, matriz2);
                              // Como en el ejercicio que resolvimos en el anterior apartado: apartado 4.1, bloque 5.
                              // Recuerde: acá, también, cuando hablamos de "las variables de la función independiente" nos queremos referir
                              // a las variables de la función independientes que se crean dentro de sus parentesis ().


  system ("pause");
  return 0;

}

void introduce (int matriz [][2]) {
   int i, j;

   for (i = 0; i < 2; i++) {
       for (j = 0; j < 2; j++) {
           printf ("Valor[%i][%i]: ", i+1, j+1);
           scanf ("%i", &matriz[i][j]);
      }
   }
}

void compara (int m1 [][2], int m2[][2]) {
  int i, j, aux;
  aux = 0;

  for (i = 0; i < 2; i++) {
      for (j = 0; j < 2; j++) {
          if (m1 [i][j] != m2 [i][j]) {
              aux = 1;
          }
      }
   }
   if (aux == 0) {
      printf ("Ambas matrices son iguales. \n\n ");
   }
   else {
      printf ("Ambas matrices NO son iguales. \n\n");
   }

}
