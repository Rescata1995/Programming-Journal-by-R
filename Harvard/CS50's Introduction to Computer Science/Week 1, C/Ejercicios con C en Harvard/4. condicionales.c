#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int x = get_int("Asigne un valor para x: ");
    int y = get_int("Asigne un valor para y: ");

    printf("\n");

    if (x > y)
    {
        printf("%i es mayor que %i.\n", x, y);
    }

    else if (x < y)
    {
        printf("%i es menor que %i.\n", x, y);
    }

    else
    {
        printf("%i y %i son iguales.\n", x, y);
    }
}

/* Aclaremos algo:

Las ramas condicionales que se componen por la estructura "if {...}, else if {...}, else if {...}, else if {...}, etc";
son consideradas como "ramas que se excluyen mutuamente", pues, sólo puedes bajar por una de las ramas.
Su estructura lógica funciona más o menos así:

si esto es cierto... entonces haz esto: "if (condicional) {haz esto}".  Ahora, si no lo es, entonces... (aquí viene la otra estructura condicional):

... de lo contrario, si esto es cierto... haz esto otro: "else if (condicional) {haz esto}".
Como nuestra primera condicional no era cierta "if", entonces queremos evaluar otra condición
(de aquí la razón de la expresión: "de lo contrario..., si esto otro..." )

y así sucesivamente...

Entonces, qué tenemos?
Tenemos que, como la naturaleza de la estructura lógica del tipo de rama: "if {...}, else if {...}, else if {...}, etc" sólo le permite validar o pasar por verdadera
una única condición (incluso aunque por error hayan más condiciones verdaderas) se considera que es excluyente, porque las ramas están condicionadas entre sí.
La evaluación de su caracter cóndicional no es independiente; depende de las ramas "else if" o "if" previas.
Por lo tanto, si desea evaluar más de una condición, donde pudiera caber la posibilidad, de que más de una de esas condiciones evaluadas pudieran ser verdaderas,
lo idealmente recomendable sería que trabajará con ramas condicionales totalmente independientes o no excluyentes entre sí, esas serían del tipo:
"if {...}, if {...}, if {...}, if {...}, else {...}"

En este caso, las únicas ramas excluyentes entre sí serían: la rama del "else" y la rama del "if" que está siendo condicionada por la rama del "else".








*/
