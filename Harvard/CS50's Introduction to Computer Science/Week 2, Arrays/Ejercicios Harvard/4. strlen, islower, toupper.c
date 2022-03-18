#include <stdio.h>
#include <cs50.h>
#include <string.h> // una nueva biblioteca para poder tener acceso a nuevas funciones (y facilitarnos más la vida)
#include <ctype.h> // lo propio

/* La tarea es la siguiente:
   Haga un programa que solicite por teclado su nombre y que, de la forma más optimizada posible, cambie todos los caracteres de minusculas a mayusculas.
*/

int main(void)
{
    string name = get_string("Inserte su nombre: ");

    // counter
    int i;

    for (i = 0; i < strlen(name); i++)
    {
        if (name[i] == islower(name[i]))
        {
            name[i] = toupper(name[i]);
        }
        else
        {
            name[i] = toupper(name[i]);
        }
    }
    printf("%s.\n\n", name);
}

/* esta tarea hubiera sido, sino complicada, bastante tediosa de hacer sin la ayuda de nuevas bibliotecas:
   cs50.h = la cual nos permite tener una función para declarar propiamente cadenas de texto: función "string".
   string.h = la cual nos permite tener una función que cuente por nosotros cuantos caracteres hay en un string: función "strlen".
 & ctype.h = el cual nos permite tener una función que puede convertir un caracter en mayuscula (toupper)
             o verificar si un caracter está en minuscula (islower); pero también tenemos lo contrario:
             para convertir un caracter en minuscula tenemos la función: "tolower"
             y para verificar que un caracter está en mayuscula tenemos la función: "isupper".

            */
