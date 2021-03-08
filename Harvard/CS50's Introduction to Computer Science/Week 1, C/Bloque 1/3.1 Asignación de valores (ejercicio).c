/* Ahora, recuerda la última función printf que hicimos en el anterior apartado "2.variables.c" sobre mis iniciales y mi edad?
   Pues bien, también se puede ejecutar con asistencia de una función scanf, vamos allá: */

// Este ejercicio lo haremos con el reglamento de Betty de la academia Holberton


#include <stdio.h>
/**
* main - print the string in the printf function
*
* Description: using the main function
* this program prints "My initials, by following my age".
* Return: 0
*/
int main(void)
{

char n,a1,a2;
int edad;

printf("Inserte manualmente sus iniciales y su edad: "); // con la función "puts" también se puede imprimir por pantalla (sólo no se olvide de esto: "\"...")
scanf("%c %c %c %i", &n, &a1, &a2, &edad);  // Wow, un scaf que puede solicitar multiples valores en una misma línea de código.

printf("Mis iniciales son: %c%c%c y mi edad es %i.\n", n, a1, a2, edad);

return(0);
}
