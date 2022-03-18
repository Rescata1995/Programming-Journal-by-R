
// Do while, ejemplos y ejercicios


#include <stdio.h>

int main () {

  int i;

  // explicación de bucle "do while" mediante ejercicio. Su sintaxis así:

  i = 10; // En este caso pondremos a prueba el bucle "do while" con una variable inicializada en 10.

  do {
       printf ("Esto se ejecutará toda vez que sea valida la condición establecida en el bucle While y dejará de ser ejecutado hasta que deje de cumplirse dicha condición. ");
       printf ("Es decir, la condición es que 'i' sea menor que 5. Entonces, si 'i' deja de ser menor que '5', el bucle se detiene. \n\n");

    /* Lo primero que va dentro de los corchetes (dominio) es lo que queremos ejecutar (do) como resultado, infinitamente, mientras (while) la condición sea valida
       (y cada que sea valida siempre se ejecutará en cada iteracción). La condición como tal se establece en "while();" luego de cerrar los corchetes de do.
       En este caso, lo que será ejecutado siempre, mientras se cumpla la condición de while, es una función del tipo "printf();".
       Entonces, para que el código deje de ejecutarse NO tiene que cumplirse la condición estipulada en While.
       Es decir, haz esto (do) mientras (while) se cumpla o sea valida mi condición, la que está en el bucle.
       Cuando deje de ser válida, la condición, el código dejará también de ejecutarse. Así funciona la lógica del bucle "do while".

        */

  } while (i < 5); // por último, por fuera de los corchetes "do", se pone la condición.

  /* Algo para aclarar este bucle "do while", al menos, ejecutará todas las líneas de código entre las llaves una vez (la primera vez)
     y luego es que verificará la expresión booleana (es decir, la condición). Si la expresión booleana se evalúa como verdadera,
     volverá y repetirá ese proceso una y otra vez hasta que la expresión booleana (la condición) se evalue como falsa.
     */

  /* Esta es la principal diferencia que tiene el bucle "while" con "do while"; el bucle "while" nunca se ejecutará mientras la condición no se cumpla o sea falsa;
     en cambio, con "do while", se cumpla o no la condición, se ejecutaría al menos una vez su línea de código;
     pues, la línea de código (el dominio) siempre se ejecutaría primero que la condición propia del bucle.
     */

  // Ahora, la pregunta del millón, qué utilidad o para qué sirviría este bucle "do while"?

    // El bucle "do while" es muy util (y también es su uso común) para solicitar al usuario una entrada.

  /* Resolvemos esa duda con el siguiente ejercicio:
     hacer un bucle que nos pregunte si queremos continuar y hasta que no escribamos la letra "s" no pare. */

  char c;

  do {
    printf ("introduce una letra: ");
    fflush (stdin);  // cada vez que queramos recoger una variable del tipo "char" por teclado e interactue con un bucle, se debe poner este código.
    scanf ("%c", &c);


  } while ( c != 's'); // tenga algo en cuenta, el programa distingue entre minusculas y mayusculas; quiere decir que, "S" no es igual a "s".

  /* Quiere decir que, mientras la letra introducida no sea la letra "s", me vas a volver a ejecutar lo que está dentro del do, todas las veces que sean,
     hasta que metas la letra "s". Por eso es un bucle, porque repetirá el codigo (do) cada vez que su condición se mantenga valida (c != 's'); entonces,
     hará siempre lo que está dentro de "do". (do = hazlo);

   */
  system("pause");
  return 0;

}
