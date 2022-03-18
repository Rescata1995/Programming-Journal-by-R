#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string cadena = "HI!"; // a las "string" debes darle una asignación siempre
    printf("%c%c%c", cadena[0], cadena[1], cadena[2]); // 1era impresión
    printf("\n");

    string matriz_de_cadena[2];
    /* a las "matrices de string" por lo general no se les da una asignación, se le hace una asignación a cada cadena por separado; y,
    luego, de establecer cuántos elementos (cadenas de texto) tendrá la matriz en cuestión: string var[x];
    A cada cadena, según la posición con la que se identifique cada una, se le hace una asignación de texto manual
    (puede ser también por teclado e incluso con la asistencia de un bucle idealmente del tipo "for"), tal que así:
    */

    matriz_de_cadena[0]= "Hi!"; // 2da impresión
    matriz_de_cadena[1]= "Bye"; // 3ra impresión
    // Y nuestra 4ta impresión será mostrar por pantalla el caracter 'e' de nuestra segunda string del Array "matriz_de_cadena".
    // Recuerde, como queremos imprimir un caracter y no una cadena, se debe llamar entonces por medio de un especificador de formato del tipo: %c.

    printf("%s\n", matriz_de_cadena[0]); // 2da impresión
    printf("%s\n", matriz_de_cadena[1]); // 3ra impresión
    printf("%c\n", matriz_de_cadena[1][2]); // 4ta impresión
}
