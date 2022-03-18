
// "Valgrind" es una herramienta que detecta si hay algo malo con su memoria, ¿recuerda aquel error "Segmetation fault"?,
// que consiste en que ha tocado un lugar de la memoria dentro de su computador que no debía tocar?
// Pues bien, "Valgrind" le ayuda a saber qué pasó puntualmente, cuál fue el lugar que tocó que no debio tocar.

// "Valgrind" también te avisa si, en dado caso requerido (cuando se usa "malloc"), se le ha olvidado llamar a la función "free".
// Vamos a poner a prueba esta herramienta creando un programa sencillo que nos muestre multiples errores relacionados con la memoria.

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    char *s = malloc(3);
    s[0] = 'H';
    s[1] = 'I';
    s[2] = '!';
    s[3] = '\0';
    printf("%s\n", s);

    // Deliberadamente hemos dejado a la vista dos errores: 1. Pasamos 3 en vez de 4 bytes, el último requerido para el caracter nulo. 2. No se llamo a "free".

    // Cuando corra el programa, va a creer que todo funciona correctamente. Compila y ejecuta mostrando lo esperado.
    // Sin embargo, es preciso corregir los dos errores premeditadamente puestos en juego.
    // Estos errores pueden ser imperceptibles a primera vista por el programa y por usted, pero ahí están.
    // Si desea verlos de una buena vez al correr su programa, puede valerse de la herramienta "valgrind". Tal que así, valgrind ./(nombre de su programa).

    // Ahora, si desea que el programa sea más explicito mostrando y explicando estos errores, puede ayudarse también de la herramienta help50.
    // Ejecute su programa ya compilado tal que así: help50 valgrind ./...

    /* 1. Invalid write of size 1
            at 0x401171: main (valgrind.c:18): esto quiere decir que en la línea de código 18 no se le guardó, en la memoria, un byte a s[3].
       No fue asignada en la función "malloc", inicialmente, el byte requerido para almacenar el caracter nulo; es decir, el byte 4.
       Siendo la línea de código 18 una escritura invalida. */

    /* 2. 3 bytes in 1 blocks are definitely lost in loss record 1 of 1
            at 0x483B7F3: malloc (in /usr/lib/x86_64-linux-gnu/valgrind/vgpreload_memcheck-amd64-linux.so)
            by 0x401151: main (valgrind.c:14): esto significa que hay una fuga de memoria, que deriva del hecho de no ser liberada la memoria con "free"
            (se refiere a los bytes de memoria tomados, recuerde bien, por la función "malloc" en la línea de código 14).
            */

            return 0;
}
