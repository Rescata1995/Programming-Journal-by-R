// Estructuras iterativas (bucles): while & for

/* Los bucles, no son más que la forma que tenemos de repetir, un numero de veces, una parte del código;
   ese numero de repeticiones se controlorían con la validez de una condición que también estipularemos.
   Hay tres tipos de bluces: "For", "While" & "Do while". */

// Hagamos el siguiente ejercicio para entender mejor los dos bucles principales: "For" & "While".

// Escriba un programa que lea dos numeros y muestre por pantalla todos los numeros comprendidos entre esos dos numeros.

#include <stdio.h>

int main () {

  int x, y;

  printf ("inserte numero uno: ");
  scanf ("%i", &x);

  printf ("inserte numero dos mayor que el numero uno: ");
  scanf ("%i", &y);

  do {
    printf ("Introduce un numero mayor que al anterior: ");
    scanf ("%i", &y);

  } while (y < x);

  // el bucle Do while:
  /* Quiere decir que, mientras la "x" introducida sea mayor que la "y" introducida, me vas a volver a ejecutar lo que está dentro del do, todas las veces que sean,
     hasta que metas la letras "y" sea mayor que la "x". Por eso es un bucle, porque repetirá el codigo cada vez que su condición se mantenga valida (y < x); entonces,
     hará siempre lo que está dentro de "do". (do = hazlo);

     /* más adelante explicaremos a fondo el bucle "do while"; pero, digamos, en este caso, para que nuestro programa no se "buguee" si alguien se le da
        por poner en "y" un valor menor que "x"... hemos corregido ese error con "do while" al exigirle de nuevo al usuario que introduzca de nuevo un numero mayor.
        Sirve como una herramienta auxiliar para corregir errores */

  // Bucle For:

  int i; // declaración de la variable "contador" para el bucle for. Los "contadores" sirven para ver cuánto se repite un código dentro de un bucle.

  for (i = x + 1; i < y; i ++) {
      printf ("%i, ", i); // que me imprima los resultados que me arroje la iteracción bajo los parametros establecidos en el bucle For previamente.

  }
      printf ("\n"); // salto de linea

  /* la primera parte (i = x + 1): es donde se inicializa al contador; es decir, se le asigna un valor a la variable i (nuestro contador):
     desde esa asignación es que se ejecutará nuestra iteración; para este caso, como queremos que el programa nos diga los numeros que hay
     entre el numero menor ("x") y el numero mayor ("y"), deseamos entonces que la iteración comience igualando el contador "i" a "x", pero
     adicionandole además una unidad, quedando así: i = x + 1; */

  /* la segunda parte (i < y): es la condición; y la condición es que mientras que, "i" sea menor que "y", se ejecutará el bucle; es decir,
     mientras la condición: i < y; sea valida se ejecutara el código en cada iteracción; de lo contrario, la iteracción se detiene
     (apenas la condición deje de cumplirse) */

  /* la tercera parte (i ++): es el incremento; en este caso, el incremento del conteo desde el contador será de uno en uno cada que itere: i++;
  */



  // Bucle While: (es sólo una forma diferente de escribir lo que ya se escribio en for, más nada; tienen la misma finalidad)

  /*
  i = x + 1; // se inicializa el contador; (como en for)

  while (i < y) { // se establece la condición; (como en for)
    printf ("%i, ", i); // lo que queremos ejecutar de forma iterativa bajo los parametros establecidos en el bucle While (como en for)
    i ++; // el incremento (como en for)

  }

  printf ("\n"); // salto de linea

  Extra: un bucle eterno. Hay bucles infinitos; es decir, donde la salida nunca para de ejecutarse porque su condición consiste en∫ que siempre se ejecute (true),
  se hace así:

  while (true) {

  // esta línea de código que está aquí dentro de los corchetes se ejecutaría siempre; al menos que, detengamos la ejecución del bucle con un "break;"

  }

  */

  system("pause");
  return 0;
}

// en conclusión, los bucles son geniales porque permiten que su programa ejecute lineas de código una y otra vez, repetidamente, sin tener que copiarlas de nuevo.
