// Introducción a Estructuras o sobre la creación de nuestros propios tipos de datos.

/* La idea es construir un programa que, luego de pedirnos registrar un directorio telefonico de solo dos variables: nombre y telefono,
   le pasemos (al directorio telefonico) una base de datos con x o y cantidad de personas con su respectiva información en nombres y telefonos;
   de tal manera que, si alguien posteriormente está interesado en buscar, en la base de datos del directorio telefonico ya registrado, a una persona en particular...
   lo pueda hacer.

   Entonces, el programa debe decirnos si, a partir de la base datos que le dimos a nuestro directorio,
   se encuentra o no la persona posteriormente buscada en él, en la base de datos del directorio telefonico que nosotros mismos hemos creado.

   Haga este ejercicio con el uso de estructuras.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
    string name;
    string phonenumber;
}
person;

int const people_number = 2;

int main(void)
{
    person agenda[people_number];

    printf("Our program tries to ask your %i favorite customers for name and phone number.\n\n", people_number);

    for (int i = 0; i < people_number; i++)
    {
        agenda[i].name = get_string("What's your name? ");
        agenda[i].phonenumber = get_string("What's your phone number? ");

        printf("That was our %i customer, now let's try to check in them in our database.\n\n", i+1);
    }
    printf("That is it! Our customers were registered with success!\n\n");

    printf("Now, we are going to verify at this time if the next guests inserted by keyboard are in our favorite database.\n\n");

    string guest = get_string("Welcome Sir. What's your name? ");

    printf("\n");

    for (int i = 0; i < people_number; i++)
    {
        if (strcmp(guest, agenda[i].name) == 0)
        {
            printf("Of course, your name %s is in our database.\n", guest);
            printf("So, your phone number is: %s. ", agenda[i].phonenumber);
            printf("Come in!\n");

            return 0; /* De ser verdadera esta sentencia (lo que está dentro del dominio de if), "return" finaliza nuestro programa.
                         Esa es su función. Es decir, hasta aquí se ejecuta el código, no se imprime ni se ejecuta lo siguiente a esto.
                         */
        }
    }

    /* ... Pero, si la sentencia anterior es falsa, no se ejecuta nada dentro de su dominio (tampoco "return"), por lo cual "return"
       no podría cerrar nuestro programa. Lo que acontece es que, como el programa nunca se cerro,
       el programa seguiría con su posterior código. Es decir, este:
       */

    printf("Sorry, your name as a guest is not registered in our database yet.\n");
    return 1;
}
