// Operaciones con variables

#include <stdio.h>
#define PI 3.1416 // forma de definir una macro, se hace con #define; entre otras cosas, una macro es una forma adicional de darle valor a una variable (básicamente eso).
                  // en este caso, PI 3.1416. Pasa que el entorno de desarrollo entenderá desde luego que, cada vez que aparezca la palabra PI, su valor equivale a 3.1416
                  // se hizo por medio de la instrucción #define

int main () {
  float x;
  x = PI;

  printf("el valor de x es %f\n", x); // lo que hemos hecho es pasarle el valor definido para PI a la variable x creada por medio de una declaración float

  // ahora nos interesa saber cómo el mismo usuario, de forma interactiva, le asigna un valor a una variable. Por ejemplo, probaremos eso con la variable "y" a continuación:

  int y; // declaración de una variable del tipo "entero" con el nombre de: "y".

  printf("Introduce un entero para y: "); // este será el texto que me arrojará la terminal, a modo de intro, antes de que el mismo user defina un valor propio a la variable y.
  scanf("%i", &y); // esta es la forma y la función que le da la facultad al usuario de definir, por su propia cuenta, dicha variable (scanf): recibe y guarda datos.
                   /* siempre que queramos hacer lo anterior, la variable designada para ser definida por el mismo usuario debe verse acompañada por el simbolo "&"
                      al final de la función "scanf" (así: &y); esto, claro, luego de llamar anteriormente al tipo de variable que estamos trabajando en cuestión:
                      en este caso, una variable del tipo "entero", como es del tipo "entero", entonces la sintaxis sería así: "%i" (su especificador de formato)

                      Por qué se coloca "&" al lado de y?, pues porque es el simbolo que representa el "espacio de memoria"; es decir,
                      el espacio de memoria donde quiero que se guarde la información recolectada a partir de la entrada de dato que he introducido,
                      por medio tecla, siendo usuario; además, he señalado que me guarde dicha información en la variable "y": "&y" (para este caso);
                      En efecto, como no había inicializado antes a la varaible "y", en consecuencia sí podría guardar mi dato insertado por tecla ahí.
                      */

  /* ahora bien, la función "scanf" lo único que hace es permitirle al usuario definir (darle valor), por su propia cuenta, a una variable.
     Sin embargo, no significa eso que pueda reflejar dicha definición, a modo de resultado, en la pantalla. No arroja resultados en la pantalla realmente.
     Debe recordar que, la función que sí tiene la facultad de hacer eso es la función "printf". Dicho lo anterior, mostremos en pantalla entonces
     que realmente el valor dado por el mismo usuario a la variable declarada "y" sí es el valor que ella tiene y no otro */

  printf("el valor de y es: %i.\n", y); /* el valor de la variable del tipo "entero" definida con el nombre de "y"
                                          sería el valor insertado por el mismo usuario a través de la función "scanf".
                                          */

  char a; // declaración de una variable del tipo "caracter" con el nombre de: "a".

  printf("Introduce un caracter para a: ");
  scanf("%c", &a);

  printf("el valor de a es: %c.\n", a);

  // Ahora, introducción a operaciones con variables

  x = x * y; // esta operación matematica lo que hará es tomar el valor inicial definido para "x" y lo multiplicará por al valor definido por el usuario para "y".
  // ahora, arrojemos el resultado en pantalla con la función que puede hacer eso, la función "printf";

  printf("El nuevo valor de x es: %f.\n", x);







  system("pause");
  return 0;


}
