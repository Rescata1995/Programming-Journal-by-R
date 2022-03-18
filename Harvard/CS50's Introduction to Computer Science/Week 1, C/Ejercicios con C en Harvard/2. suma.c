#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // el parametro o argumento "entre comillas" y lo que solicita "get_int" es la entrada.
    int a = get_int("inserte primer número para operar: ");

    // la entrada, entonces, sería el valor a introducir por tecla por parte del usuario.
    int b = get_int("inserte segundo número para operar: ");
    printf("\n");

    // la impresión por pantalla, de lo que pedimos por tecla y su posterior manipulación, es nuestra salida.
    printf("la suma de a y b es: %i.\n", a + b);
}
