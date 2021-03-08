// Ordenamiento por metodo burbuja

// Intercambiar los valores de dos números enteros introducidos por teclado (dados por el mismo usuario con la función "scanf"). Esto se hará con el método de la "Burbuja".


#include <stdio.h>

int main () {

  int x, y, aux; // los valores que deseamos intercambiar son los de las variables "x" e "y", y eso se hará por medio de una tercera variable declarada con nombre de "aux".

  printf ("El valor de x es: ");
  scanf ("%i", &x); // definición por teclado del valor de la variable "x". (este valor se cambiará por el valor insertado en "y").

  printf ("El valor de y es: ");
  scanf ("%i", &y); // definición por teclado del valor de la variable "y". (este valor se cambiará por el valor insertado en "x").

  aux = x;
  x = y;
  y = aux;

  // Con el anterior algoritmo es que podemos intercambiar entre sí los valores insertados tanto para la variable "x" como para la variable "y". Veamoslo:

  printf("El valor de x es: %i. \n", x);
  printf("El valor de y es: %i. \n", y);



  system ("pause");
  return 0;

 }
