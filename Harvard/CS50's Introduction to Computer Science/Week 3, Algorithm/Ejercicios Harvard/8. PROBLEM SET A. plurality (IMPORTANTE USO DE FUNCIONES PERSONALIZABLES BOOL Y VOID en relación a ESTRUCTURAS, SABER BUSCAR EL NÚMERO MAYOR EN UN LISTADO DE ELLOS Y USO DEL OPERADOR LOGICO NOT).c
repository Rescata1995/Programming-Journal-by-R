#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Max number of candidates
int const MAX = 9;

// Candidates have name and vote count
typedef struct
{
    string name;
    int votes;
}
candidate; // definición de tipo de dato nuevo llamado: "candidate".

// Array of candidates
// Al valerse de tipos de datos personalizados (estructuras) para declarar posteriormente variables, estas variables se definen como matrices.
// Y recuerde que las matrices trabajan muy bien con bucles (para ser definidos sus elementos de forma iterativa con un incrementador)
candidate candidates[MAX];
// declaración de la matriz "candidates[MAX]" con nuestro tipo de dato creado (estructura): "candidate". (que entre otras cosas ha sido declarada como variable global)

// Number of candidates
int candidate_count;

// Function prototypes
bool vote(string name);
void print_winner(void);

int main(int argc, string argv[])
{
    // Check for invalid usage
    if (argc < 2)
    {
        printf("Usage: plurality [candidate ...]\n");
        return 1;
    }

    // Populate array of candidates
    /* Lo que estamos diciendo aquí es que, omitiendo el primer parametro pasado en la línea de comandos (que es el programa en sí mismo), todos los demás
       argumentos (o parametros) serán los correspondientes a los nombres de los candidatos pasados; entonces, este variable de tipo "int" vendría
       definiendo exactamente la cantidad de candidatos que han sido pasados como argumentos en la línea de comandos antes de correr el programa, el número.
       Lo hacemos de esta forma para facilitarnos un mayor entendimiento ante el planteamiento y posterior resolución del problema.
       */
    candidate_count = argc - 1;


    /* Sin embargo, aquí hay una condición, la cantidad de nombres pasados como candidatos en dicha línea de comandos antes de correr el programa
       no puede ser superior al límite de candidatos máximo que hemos definido en la variable global llamada: "MAX".
       */
    if (candidate_count > MAX)
    {
        printf("Maximum number of candidates is %i\n", MAX);
        return 2;
    }

    /* Aquí creamos un bucle para que, por medio del incrementador "i", los nombres de candidatos que pasemos en la línea de comandos al correr el programa;
       es decir, los que se terminan agrupando en la matriz de cadena "argv[]", se han asignados a la variable "candidates", en su estructura: "name".

       Algo importante a tener en cuenta: No ignoremos el hecho de que el primer elemento de esa matriz de cadena realmente sería la ejecución del programa
       en sí mismo "argv[0]"; quiere decir entonces que, el conteo real de los nombres de candidatos pasados en la línea de comandos,
       considerandolos como elementos de la matriz de cadena "argv[]", empieza realmente desde "argv[1]"...
       Es por esta razón que se define a "candidates[i].name" como: argv[i + 1]; dentro del bucle, siendo definido inicialmente a "i" con valor de 0.
       */

    for (int i = 0; i < candidate_count; i++)
    {
        /* estamos asignando los parametros de los candidatos, pasados como argumentos de la línea de comandos, a nuestra estructura o tipo de dato creado: candidate
           (esto por medio de un bucle, idealmente de tipo "for", considerando que las variables creadas con estructuras serían realmente matrices... también)
           */
        candidates[i].name = argv[i + 1];
        // se define en 0 inicialmente la cantidad de votos para todos los candidatos porque aún no se han hecho las votaciones.
        candidates[i].votes = 0;

    }

    // definición de cantidad númerica de votos totales (número de votos pasados por tecla)
    int voter_count = get_int("Number of voters: ");

    // Loop over all voters
    for (int i = 0; i < voter_count; i++)
    {
        // elección, uno por uno y por medio de un bucle, de los candidatos preferidos según la cantidad númerica de votos o votantes disponibles (i < voter_count).
        // cada voto se registra a partir del nombre, pasado por tecla, del candidato de preferencia para cada votante.
        string name = get_string("Vote: ");

        // Check for invalid vote
        if (!vote(name))
        {
            // llamado de la función "vote" pasandole como parametro o argumento la variable de tipo de cadena que registra los votos a los candidatos (name).
            // Si el voto es invalido, lo imprimirá; sino, agregará uno (1) a su recuento de votos; es decir, uno (1) al candidato elegido en ese paso...
            // Me imagino que, la condición para que el voto sea "invalido" es: si la función "voto", lo que arroje, es diferente a "name".
            // Hay que recordar que el tipo de dato de la función "vote" es de tipo booleano.
            printf("Invalid vote.\n"); // declaración de "voto invalido" si "name", nombre pasado por tecla, no coincide con ninguno de los candidatos postulados.
        }

        /* Si se da cuenta, la secuencia del bucle, funciona primero solicitando un nombre de candidato por el cual votar; para luego, dicho nombre (name),
           pasarlo como parametro de la funcion de tipo booleana personalizable que hemos creado y que ha sido importada acá: "vote".
           Hasta que no afecte la función "vote", sobre cada nombre (name) pasado por tecla en cada iteracción, uno por uno, no pasa al siguiente "name".
           */
    }

    // Display winner of election, se imprime al ganador de la elección (luego de revisar el conteo total de votos realizados y ver quiénes tienen más votos)
    print_winner();
    /* No se la pasa ningún parametro a la función importada porque la función importada es de tipo void; es decir, "vacia".
       Por el anterior motivo, todo debe hacerse dentro de la función en sí mismo... para que sólo sea llamarla y listo.
       Tampoco se devuelve nada en ella, dentro de la función en sí misma (no devuelve nada en "return;").
       */
}

// Update vote totals given a new vote
bool vote(string name)
{
    /* "i" se inicializa en 0 para tomar, a partir del valor númerico en incremento (i++),
        todos los elementos (candidatos) desde el inicio de su listado (que resulta ser una matriz hecha a partir de una estructura... si bien recuerda);
        pero, con la condición, de que los tome hasta el final del listado o matriz en sí mismo (i < candidate_count).
        */

    for (int i = 0; i < candidate_count; i++)
    {
        if (strcmp(name, candidates[i].name) == 0)
        {
            /* Queremos comparar con cada nombre pasado por tecla si, uno a uno de esos nombres (name), resulta o pueda resultar igual a:
               alguno de los elementos (más bien, a alguno del apartado de "nombres") de la matriz evaluada (candidates[i].name).
               De ser así que se incremente en uno, cada vez que ocurra esto, el apartado de votos (candidates[i].votes++;)
               del candidato en cuestión (candidates[i].name) que coincida con el nombre pasado por tecla (name)
               */

            candidates[i].votes++;

            // como estamos ante una función personalizable de tipo "booleana"... return devuelve dos valores: "true" o "false".
            return true; // se devuelve "true" para que no entre en la declaración de "voto invalido" de la línea código 87. (donde llamamos a esta función)
            // Es decir, sería verdad (true) que algún nombre pasado por tecla (name) sí coincidió con cualquiera de los nombres de los candidatos postulados
            // (candidates[i].name). Aquella sentencia de la línea 87 se cumple si esto no es "true", si no es verdadera la coincidencia...
            // porque así lo definimos allá también. Para que se cumpla la sentencia de allá, "name" debe ser diferente a "candidates[i].name".
            // (!vote(name)) en ese caso, más adelante devolvemos falso (false) en esta función si no hay coincidencia alguna. Observe la línea de código 142.
            // Para que quede más claro: "!" es = NOT (el resultado invierte la condición de la expresión), lo que quiere decir que la condición sería así:
            // "if (strcmp(name, candidates[i].name) != 0)",... cuando ningún nombre pasado por tecla sea igual a ninguno de los candidatos registrados,
            // quiero que pase o ejecutes lo que está dentro de la sentencia if de la línea de código 87. "if (!vote(name))... ".
        }
    }

    return false;
}

// Print the winner (or winners) of the election
void print_winner(void)
{
    // Aquí, en principio, tenemos que hacer seguimiento al candidato (o a los candidatos) con mayor número de votos.

    int MajorVote = 0;  /* El seguimiento será sobre el número de votos de los candidatos, no sobre sus nombres.
                           Es así porque, tenemos que considerar también, los posibles empates que se presenten en el número de votos;
                           es decir, puede haber más de un ganador y eso se puede contabilizar o tener en cuenta es:
                           a partir del número de votos de los candidatos, no del nombre de los candidatos.
                           */

    for (int i = 0; i < candidate_count; i++)
    {
        /* Si el voto mayor, que en principio está inicializado en 0, es menor que la totalidad de votos que hay sobre un candidato
           (empezando desde el candidato número 1), el voto mayor pasa a tener el valor (se le asigna) de la Q de los votos del candidato en cuestión
           (empezando a revisar, uno por uno a los candidatos, desde el primero de ellos hasta el último)
           -como ya se dictó en el bucle for por medio de "i++"; y, en particular, en la condición "i < candidate_count".

           La lógica de la sentencia for radica en que: si el bucle llegase a encontrar a un candidato con mayor número de votos,
           en comparación a "MajorVote", siempre reemplazará el valor de "MajorVote" por ese número de votos del candidato en cuestión;
           pero sino, el valor que asuma "MajorVote" se mantendría intacto (porque no habría un mayor número de votos en otros candidatos)...
           Sí, asumiendo así que no hay un candidato con mayor número de votos contabilizados a favor.
        */
        if (MajorVote < candidates[i].votes)
        {
            MajorVote = candidates[i].votes;
        }
        // Esta estructura lógica es ideal (y la más sencilla) para cuando le interese conocer el número "mayor" sobre un conjunto de números totales.
    }

    for (int i = 0; i < candidate_count; i++)
    {
        /* Ahora, si hay varios números que resultan ser "mayores"; es decir, si hay candidatos que se reparten el podio por tener
           "el mayor número de votos", y queremos incluirlos a todos... Podemos pasar un bucle que nos evalue los votos de los candidatos,
           uno a uno; y, si encontramos que uno o varios de ellos tienen el mismo "mayor número de votos";
           tal que, "if (candidates[i].votes == MajorVote)", procedemos a imprimir sus nombres (a los candidatos).
           */
        if (candidates[i].votes == MajorVote)
        {
            printf("%s\n", candidates[i].name);
        }
    }

    return;
}
