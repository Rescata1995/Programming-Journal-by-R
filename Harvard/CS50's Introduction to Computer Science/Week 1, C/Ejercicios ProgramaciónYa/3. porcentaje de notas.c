#include <stdio.h>

int main(void)
{
  int q, a;
  float t;

  printf("Revision Quiz de lenguaje C.\nA continuacion le solicitaremos los siguientes datos.\n\n");

  do
  {
    printf("Numero total de preguntas evaluadas: ");
    scanf("%i", &q);
  } while (q < 1);

  printf("\n");

  do
  {
    printf("Numero total de respuestas acertadas: ");
    scanf("%i", &a);
  } while (a < 0 || a > q);

  printf("\n");

  t = ((float)a/(float)q)*100;
  printf("Su porcentaje de acierto total equivale al: %.02f por ciento.\n\n", t);


  if (t >= 90)
  {
    printf("Su nota esta en el rango de 'Nivel maximo', exactamente su nota correspondiente es del: %.02f por ciento.\n\n", t);
  }
  else if (t >= 75 && t < 90)
  {
    printf("Su nota esta en el rango de 'Nivel medio', exactamente su nota correspondiente es del: %.02f por ciento.\n\n", t);
  }
  else if (t >= 50 && t < 75)
  {
    printf("Su nota esta en el rango de 'Nivel regular', exactamente su nota correspondiente es del: %.02f por ciento.\n\n", t);
  }
  else
  {
    printf("Su nota esta en el rango de 'Fuera de lugar', exactamente su nota correspondiente es del: %.02f por ciento.\n\n", t);
  }
}
