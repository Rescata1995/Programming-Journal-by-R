#include <stdio.h>

int main(void)
{
  float n;
  /* preferiblemente se declara como número "float" debido a que está expuesto a divisiones;
  y se hace necesario, en este problema, la contabilización del número con sus decimales.
  El bucle "for" que incorporaremos, para ser más exacto en la resolución de este ejercicio,
  debe considerar también los decimales del numero "entero positivo" pasado por tecla,
  esto para que se logre así la realización de una comparación objetiva.
  */

  int i;

  do {
    printf("inserte numero entero positivo: ");
    scanf("%f", &n);

  } while (n < 1);

  printf("\nSu numero entero positivo es: %.00f;\n", n);
  /* Apesar de la necesidad de establecer la variable "n" como una variable de tipo "float"...
     Hemos establecido que no deseamos ver ningún decimal en la variable "n" al momento de ser impresa;
     tal que así: "%.00f". Al ser declarada una variable de tipo "float", como bien se sabe,
     la consola interpretará que es un número compuesto por decimales e intentará imprimirlos también
     (incluso aunque no los tenga).
     */

  for (i = 0; n >= 1; i++)
  {
    n = n/10;
  }

  if (i == 1)
  {
    printf("y esta compuesto por una (1) cifra.\n\n");
  }
  else if (i == 2)
  {
    printf("y esta compuesto por dos (2) cifras.\n\n");
  }
  else if (i == 3)
  {
    printf("y esta compuesto por tres (3) cifras.\n\n");
  }
  else if (i > 3)
  {
    printf("La cagaste. Te pedi solo numeros que contengan una, dos o tres cifras.\n\n");
  }
}

  /* La técnica para eliminar los decimales de un número de tipo "flotante", al llamar su tipo de dato "float", dentro de la función "printf";
     tal que así: "%.00f" realmente proviene de una teoria llamada: "imprecisión de punto flotante" (en inglés: "floating-point imprecision")
     Básicamente esta herramienta nos permite definir la cantidad de decimales exacta que queremos ver en una variable tipo "float" o "double",
     pero, Cuidado, va a llegar un momento en que su computadora no podrá compilar de forma correcta una cantidad de decimales muy extensa;
     pues, si bien tienen una capacidad de memoria enorme para soportar grandes números, sus bits para representarlos a todos no es infinita.
     No se puede contar infinitamente alto o infinitamente con precisión. En algún momento le tocará aproximar valores.
     */
