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

/* Ahora bien, en caso que queramos intercambiar los valores que tienen las variables dentro de una función;
es decir, para trabajar con ellas por fuera de la función en cuestión... cómo podriamos hacerlo? Lo resolveremos en nuestro próximo apartado mediante un ejercicio.

Anteriormente podíamos, o hacer una sustitución y trabajar con las variables (y sus valores) de la función principal
en vez de trabajar con las variables de la función independiente (al ser llamada la función independiente en la función principal y pasarle las variables de "main"),
o definir el valor manualmente de las variables de una función independiente dentro de la función principal
(al ser llamada la función independiente en la función principal y pasarle los valores de forma manual);
pero, definitivamente, no podíamos sustituir propiamente los valores de una variable de una función por los valores de las variables de otra función.
Eso es lo que aprenderemos a hacer ahora. */
