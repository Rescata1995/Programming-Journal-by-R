#include <stdio.h>
#include <cs50.h>

void miau();

int main(void)
{
    // queremos que, dentro de nuestra función principal, se ejecute nuestra función personalizada "miau"
    // y al llamarla hemos especificado, como parametro, que se ejecute 2 veces. Se ejecuta dos veces porque...
    // Al pasarle un valor de "2" a la variable "n" (nuestra condición de posibilidad del bucle) de la función "miau"
    // le estamos diciendo al programa que me imprima "miau" hasta que el contador i se incremente a n.
    // Quedando así realmente la condición definida: mientras "i < 2" haga tal cosa ..., Veamos.

    miau(2);
}

void miau(int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        printf("miau.\n");
    }

    // las funciones independiente o personalizadas que creamos con "void", como es este caso, no requieren retornar nada (no return;).
}
