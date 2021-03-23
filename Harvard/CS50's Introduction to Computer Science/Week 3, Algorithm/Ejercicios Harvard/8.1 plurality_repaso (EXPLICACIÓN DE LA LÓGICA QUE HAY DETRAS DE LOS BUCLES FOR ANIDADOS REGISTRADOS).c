#include <stdio.h>
#include <cs50.h>
#include <string.h>

int const MAX_CANDIDATES = 9;

typedef struct
{
  string name;
  int votes;
}
candidate;

candidate candidates[MAX_CANDIDATES];

int count_candidates; // la declaramos como variable global ya que la necesitaremos usar en funciones personalizables que más adelante dejaremos declaradas.

bool votes_register(string name);
void print_winner(void);

int main (int num_parametros, string parametros_linea_de_comandos[])
{
  count_candidates = num_parametros - 1;

  if (num_parametros < 2)
  {
    printf("Debe alistar a los candidatos que participarán en la votación. Repita el proceso de nuevo.\n");

    return 1;
  }

  else if (MAX_CANDIDATES < count_candidates)
  {
    printf("No debe registrar más candidatos que el máximo límite de candidatos totales a participar. Repita el proceso de nuevo.\n");

    return 2;
  }

  else if (count_candidates > 0 && count_candidates <= MAX_CANDIDATES)
  {
    for (int i = 0; i < MAX_CANDIDATES; i++)
    {
      candidates[i].name = parametros_linea_de_comandos[1 + i];
      candidates[i].votes = 0;
    }

    int voter_count;
    do
    {
      voter_count = get_int("Cuántos votos serán registrados?: ");
    }
    while (voter_count < 1);

    for (int i = 0; i < voter_count; i++)
    {
      // Este bucle se ejecuta hasta que "i" llegue a "voter_count"; es decir, registra voto por voto hasta que el contador llegue al límite máximo de votos posibles.
      string name = get_string("Escriba su candidato de preferencia: ");

      if (!votes_register(name))
      {
        printf("Candidato no registrado en nuestra contienda. Error!\n");
      }
      else
      {
        votes_register(name);
      }
    }

    print_winner();
  }
}

bool votes_register(string name)
{
  for (int i = 0; i < count_candidates; i++)
  {
    /* sin embargo este bucle, que está anidado al anterior por haber sido llamado dentro de su dominio en: "if (!votes_register(name))"; y, por esa misma razón,
       se ejecuta también hasta que el contador del bucle anterior "i" llegue a voter_count; pero, además, en este bucle hemos agregado una condición más:
       hemos establecido que este bucle se ejecute hasta que su propio contador "i" llegue a "count_candidates"; sin embargo, esta condición afecta a las variables
       que incluyan al contador "i" solamente.

       Por ejemplo, la sentencia if compara que "name" sea igual a cualquiera de los candidatos posibles registrados en contienda: "if (strcmp(name, candidates[i].name) == 0)"
       Es así porque así fue establecido en la condición de este bucle: el contador "i" de este bucle sólo contempla el conteo hasta el límite máximo de candidatos registrados
       "i < count_candidates", es por eso su importancia. Sin embargo, la variable "name" no se rige a este bucle, la variable "name" se rige al bucle anterior,
       que se va a ejecutar su dominio hasta que el contador "i" del bucle anterior llegue a voter_count y no a count_candidates. Es decir, se va a pedir por tecla
       un nombre de candidato de preferenia por votante (name) hasta que "i" llegue a voter_count.

       Entonces, lo que estos dos bucles for anidados pretenden evaluar es: si cualquier nombre de candidato pasado por tecla (name) según el límite de votantes
       disponibles (voter_count, esa fue la condición del primer bucle) establecidos por tecla también es o podría ser igual a cualquiera de los candidatos registrados
       en contienda que son, a lo mucho, 9. Recuerde que la "i" de este bucle se condiciona al número de candidatos disponibles para votar (count_candidates),
       los que participan en la contienda política que son: 9.
       */

    if (strcmp(name, candidates[i].name) == 0)
    {
      candidates[i].votes++;

      return true;
    }
  }

  return false;
}

void print_winner (void)
{
  int maximoVoto = 0;

  for (int i = 0; i < count_candidates; i++)
  {
    if (maximoVoto < candidates[i].votes)
    {
      maximoVoto = candidates[i].votes;
    }
  }

  for (int i = 0; i < count_candidates; i++)
  {
    if (maximoVoto == candidates[i].votes)
    {
      printf("%s\n", candidates[i].name);
    }
  }

  return;
}
