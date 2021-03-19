#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>

long factorial(int parametros_number);

int main (int num_parametros, string numeros_para_factorial[])
{
  if (num_parametros == 4)
  {
    int number1 = atoi(numeros_para_factorial[1]);
    int number2 = atoi(numeros_para_factorial[2]);
    int number3 = atoi(numeros_para_factorial[3]);

    long aux_factorial1 = factorial(number1);
    long aux_factorial2 = factorial(number2);
    long aux_factorial3 = factorial(number3);

    printf("los factoriales de los números %i, %i y %i son, respectivamente: %li, %li y %li.\n", number1, number2, number3, aux_factorial1, aux_factorial2, aux_factorial3);

    return 0;
  }
  else
  {
    printf("Sólo está permitido pasar, como parametros de la línea de comandos, 4 valores. Vuelva a correr el programa con estas correcciones.\n");
  }

  return 1;
}

long factorial (int parametros_number)
{
  int fact = 1;

  for (int i = 1; i <= parametros_number; i++)
  {
    fact *= i;
  }

  return fact;
}
