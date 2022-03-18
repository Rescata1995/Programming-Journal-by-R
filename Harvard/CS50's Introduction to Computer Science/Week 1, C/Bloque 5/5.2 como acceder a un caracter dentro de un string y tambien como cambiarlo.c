// Acceder a un elemento de un strings

#include <stdio.h>
#include <string.h>

void cambio (char c1 []);

int main () {

  // supongamos que hay un defecto en la función "fgets": su string no termina en "\0", sino en "\n" (De hecho, esto sucede siempre con esta función);
  // Y deseamos cambiarlo porque no queremos que haga un salto de linea de forma predeterminada. ¿Cómo sería? Veamos.

  char c1 [10];

  printf ("introduzca una frase: ");
  fgets (c1, 10, stdin);

  cambio (c1); // Acá ya hemos llamado a la función independiente "cambio" para que afecte sobre la variable (en este caso string) de la función principal (c1);
               // es decir, para que el string "c1" de la función "cambio" reemplace el valor
               // o ejecute una condición (función) en especifica, definida en ella, dentro del string "c1" pero de la función principal "main".

  printf ("%s\n", c1); /* Ya acá se ve reflejada la influencia de la función "cambio" sobre el string "c1" de la función principal.
                          Es decir, cualquier cosa que ejecutemos con el string "c1" estará siendo afectado por la función "cambio".  */


  system ("pause");
  return 0;

}

void cambio (char c1 []) {

// El mismo tratamiento que reciben los Vectores para trabajar con funciones independientes del tipo "Void", de la mano de una función principal, lo reciben los Strings.
// Y, como bien recuerda, por lo general, para introducir datos en un vector se hace uso de bucles... pues, este caso tampoco es la excepción. Vamos allá.

  int i;

    for (i = 0; i < 10; i ++) { /* para recorrer un String es exactamente igual a como si fuera un Vector; es decir,
    si queremos acceder al primer elemento de un String, se hace exactamente igual a como lo hacemos con un Vector.
    Por ejemplo, para llegar al primer elemento del String "c1" en código sería: "c1[0]".
    */

      if (c1[i] == '\n') {  /* usar comillas simples al comparar cadenas de textos.
                             Qué traduce esto? Pues, que si en algún momento del string c1 es igual a "\n" ... */

          c1[i] = '\0';     // ... entonces le diremos que c1[i], cuando sea = "\n", pase a ser igual a "\0". Esta es la lógica detrás de nuestra función condicional.

      }
    }
  }
