#include <stdio.h>

int main(void)
{
  int n1, n2, n3;

  printf("inserte valor para n1: ");
  scanf("%d", &n1);

  printf("el valor de su primer numero insertado es: %d.\n\n", n1);



  printf("inserte valor para n2: ");
  scanf("%d", &n2);

  printf("el valor de su segundo numero insertado es: %d.\n\n", n2);



  printf("inserte valor para n3: ");
  scanf("%d", &n3);

  printf("el valor de su tercer numero insertado es: %d.\n\n", n3);

  if (n1 > n2 && n1 > n3)
  {
    printf("el numero mayor es %i; es decir, n1.", n1);
  }

  else if (n2 > n1 && n2 > n3)
  {
    printf("el numero mayor es %i; es decir, n2.", n2);
  }
  else
  {
    printf("el numero mayor es %i; es decir, n3.", n3);
  }

  printf("\n\n");
}
