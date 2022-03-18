#include <stdio.h>
#include <cs50.h>

string datos_personales();

int main(void)
{
    int users, i;
    string carta, name, lastname;
    int age;

    printf("Bienvenido, este es el formato de carta de retiro de Holberton School.\n\n");

    do
    {
        users = get_int("Cuántas personas desean enviar esta carta a la directiva central de Holberton?: ");
    }
    while (users < 1);

    printf("\n");
    printf("En total, serían: %i cartas. La dinamica es tomar los datos personales de cada persona (uno por uno); \ny, finalizado este paso, la persona en cuestión recibirá de forma inmediata su carta impresa de retiro. \nAsí, continuaremos con otra solicitud hasta llegar a la última carta de retiro requerida.", users);

    printf("\n\n");
    for (i = 0; i < users; i++)
    {
        name = get_string("Inserte nombre de solicitante número %i: ", i + 1);
        lastname = get_string("Inserte sus apellidos: ");
        age = get_int("Por último, inserte su edad: ");

        printf("\n");

        printf("Solicitud de carta de retiro para Sr(a) aspirante %s %s ha sido un exito, a continuación podrá leer su carta de retiro. Buena suerte.", name, lastname);

        printf("\n\n");

        carta = datos_personales(name, lastname, age);
        printf("%s", carta);
    }
    printf("El total de solicitudes de retiro han sido satisfechas. Hasta la próxima, fue un placer servirte.\n\n");
}

string datos_personales(string name, string lastname, int age)
{
    printf("Hola, deseo solicitar mi retiro anticipado en la academia Holberton School, mi nombre es: %s de apellidos %s y de edad %i.\n\n", name, lastname, age);

    return 0;
}

/* observe que hay una correspondencia de información entre los tipos de datos que hay en las variables de la función principal
con los parametros de la función personalizable llamada "datos_personales".
*/
