#include <stdio.h>
#include <cs50.h>
#include <string.h>

typedef struct
{
  string name;
  int votes;
}
data_candidates;

int const MAX = 9;

int main (int num_parametros, string candidates[])
{
    /* Aquí restamos el parametro del programa en sí, que se contabiliza también como argumento de la línea de comandos cuando lo corremos y no nos interesa;
    es decir, ya no estariamos considerando en la formula la totalidad de los parametros, sino los parametros pertenecientes a la totalidad de candidatos.
    Lo hacemos de esta forma para facilitarnos un mayor entendimiento ante el planteamiento y posterior resolución del problema.
    */
    int num_candidates = num_parametros - 1;

    if (num_parametros > 1 && num_candidates <= MAX)
    {
        data_candidates names_candidates[MAX]; // declaración de la matriz "names_candidates[MAX]" con nuestro tipo de dato creado (estructura): "data_candidates".

        printf("Number of voters: %i\n", num_candidates);

        for (int i = 0; i < num_candidates; i++)
        {
            /* estamos asignando los parametros de los candidatos, pasados como argumentos de la línea de comandos, a nuestra estructura o tipo de dato creado: data_candidates
               (esto por medio de un bucle, idealmente de tipo "for", considerando que las variables creadas con estructuras serían realmente matrices... también)
               */
            names_candidates[i].name = candidates[i + 1];
            names_candidates[i].votes = 0;
            printf("Vote: %s\n", names_candidates[i].name);
        }

        printf("\n");

        int num_votos;
        do
        {
            num_votos = get_int("Cantidad de votantes que participarán en las elecciones: ");
        }
        while (num_votos < 1);
        printf("Ahora, a partir de la cantidad de votantes ya registrados, cada uno seleccionará a su candidato de preferencia.\n\n");

        string names;

        int i;
        for (i = 0; i < num_votos; i++)
        {
            names = get_string("Candidato seleccionado votante número %i: ", i + 1);

            if (num_candidates == 1)
            {
                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }
            }

            else if (num_candidates == 2)
            {
                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }
            }

            else if (num_candidates == 3)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }
            }

            else if (num_candidates == 4)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }
            }

            else if (num_candidates == 5)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }

                else if (strcmp(names, names_candidates[4].name) == 0)
                {
                    names_candidates[4].votes++;
                }
            }

            else if (num_candidates == 6)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }

                else if (strcmp(names, names_candidates[4].name) == 0)
                {
                    names_candidates[4].votes++;
                }

                else if (strcmp(names, names_candidates[5].name) == 0)
                {
                    names_candidates[5].votes++;
                }
            }

            else if (num_candidates == 7)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }

                else if (strcmp(names, names_candidates[4].name) == 0)
                {
                    names_candidates[4].votes++;
                }

                else if (strcmp(names, names_candidates[5].name) == 0)
                {
                    names_candidates[5].votes++;
                }

                else if (strcmp(names, names_candidates[6].name) == 0)
                {
                    names_candidates[6].votes++;
                }
            }

            else if (num_candidates == 8)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }

                else if (strcmp(names, names_candidates[4].name) == 0)
                {
                    names_candidates[4].votes++;
                }

                else if (strcmp(names, names_candidates[5].name) == 0)
                {
                    names_candidates[5].votes++;
                }

                else if (strcmp(names, names_candidates[6].name) == 0)
                {
                    names_candidates[6].votes++;
                }

                else if (strcmp(names, names_candidates[7].name) == 0)
                {
                    names_candidates[7].votes++;
                }
            }

            else if (num_candidates == 9)
            {

                if (strcmp(names, names_candidates[0].name) == 0)
                {
                    names_candidates[0].votes++;
                }

                else if (strcmp(names, names_candidates[1].name) == 0)
                {
                    names_candidates[1].votes++;
                }

                else if (strcmp(names, names_candidates[2].name) == 0)
                {
                    names_candidates[2].votes++;
                }

                else if (strcmp(names, names_candidates[3].name) == 0)
                {
                    names_candidates[3].votes++;
                }

                else if (strcmp(names, names_candidates[4].name) == 0)
                {
                    names_candidates[4].votes++;
                }

                else if (strcmp(names, names_candidates[5].name) == 0)
                {
                    names_candidates[5].votes++;
                }

                else if (strcmp(names, names_candidates[6].name) == 0)
                {
                    names_candidates[6].votes++;
                }

                else if (strcmp(names, names_candidates[7].name) == 0)
                {
                    names_candidates[7].votes++;
                }

                else if (strcmp(names, names_candidates[7].name) == 0)
                {
                    names_candidates[7].votes++;
                }

                else if (strcmp(names, names_candidates[8].name) == 0)
                {
                    names_candidates[8].votes++;
                }
            }
        }

        printf("\n");

        if (num_candidates == 1)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
        }

        else if (num_candidates == 2)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
        }

        else if (num_candidates == 3)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
        }

        else if (num_candidates == 4)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
        }

        else if (num_candidates == 5)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[4].name, names_candidates[4].votes);
        }

        else if (num_candidates == 6)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[4].name, names_candidates[4].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[5].name, names_candidates[5].votes);
        }

        else if (num_candidates == 7)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[4].name, names_candidates[4].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[5].name, names_candidates[5].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[6].name, names_candidates[6].votes);
        }

        else if (num_candidates == 8)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[4].name, names_candidates[4].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[5].name, names_candidates[5].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[6].name, names_candidates[6].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[7].name, names_candidates[7].votes);
        }

        else if (num_candidates == 9)
        {
            printf("votos para el candidato %s: %i\n", names_candidates[0].name, names_candidates[0].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[1].name, names_candidates[1].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[2].name, names_candidates[2].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[3].name, names_candidates[3].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[4].name, names_candidates[4].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[5].name, names_candidates[5].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[6].name, names_candidates[6].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[7].name, names_candidates[7].votes);
            printf("votos para el candidato %s: %i\n", names_candidates[8].name, names_candidates[8].votes);
        }

        return 0;
    }

    else if (num_candidates > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 1;
    }

    else
    {
        printf("Usage: plurality [candidate ...]\n");
        return 2;
    }
}
