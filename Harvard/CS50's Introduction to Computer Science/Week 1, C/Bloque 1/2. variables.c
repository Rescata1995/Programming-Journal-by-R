// variables

/* hay tres tipos de variablese en principio: enteros (se declara con: "int"),
flotantes (se declara con: "float" si es de 32 bits; y "double" si es de 64bits)
y caracteres (se declara con "char") */

#include <stdio.h>

int main () { // declaración de la función principal por medio de "int", pero "int" también es...

  int x; /* int se usa para la creación de una variable del tipo "entero", un número sin decimales;
         por ejemplo: 8, -9, 10..., de esta forma se crea una variable del tipo "entero". */
  x = 5; /* así le damos valor a una variable declarada (inicializarla),
         llamamos la variable creada (en este caso, x) y le asignamos un valor (= 5;). */

  float y; /* float se usa para la creación de una variable del tipo "flotante", un número con decimales; (sin embargo, también lee números enteros)
           por ejemplo: 2.3, 7.8, 3.1..., de esta forma se crea una variable del tipo "flotante" */
  y = 6.1; /* así le damos valor a una variable declarada (inicializarla),
           llamamos la variable creada (en este caso, y) e le asignamos un valor (= 6.1;). */

  double y2; /* Es lo mismo que la variable del tipo "flotante" sólo que su capacidad númerica es mayor por doble (tolera números más grandes, 64^2) y es de 64bits */
  y2 = 100.54;

  char z;  /* char se usa para la creación de una variable del tipo "caracter", una letra (no una cadena de texto, sólo letra);
           por ejemplo: "h", "m"..., de esta forma se crea una variable del tipo "caracter". */
  z = 'R'; // uso de comillas simples, no doble comillas para inicializar variables del tipo "caracter". Aquí también se pueden guardar números, tal que así: '2'.

  /* TRUCO: Si usted desea, en caso que las variables que necesita crear corresponda a un mismo tipo de dato,
            puede crearlas todas en una misma línea de código e, incluso, inicializarlas también en ese misma
            línea de código tal que así: (veamos un ejemplo)
            */

  // int a, b, c; // sólo declaradas.
  int a = 1, b = 2, c = 3; // declaradas e inicializadas. Genial, no? Nos ahorraremos un par de bits y tendremos un mejor diseño de nuestro programa.

  printf("%i, %i, %i. \n", a, b, c);   // 1, 2, 3 (lo que será impreso por pantalla)

  /* En general, tanto "int", "float", "double" o "char" son tipos de datos,... más alla de ser "creadores de variables".
  Estos tipos de datos para ser llamados dentro de una función, por ejemplo función "printf",
  generalmente se recurre a algo que se llama "especificadores de formato".

  El especificador de formato de un tipo de dato "int" es %i, o también puede ser: %d (para números enteros con signos).
  En "float" es %f; en "doble" es %f; en "char" es %c y así... Por ejemplo, algo que veremos más adelante, en "char[n]"
  (que se refiere al tipo de datos para definir cadenas de textos, su especificador de formato es: %s.
  */

  printf("valor de x: %i. \n", x); /* es de esta forma que imprimimos en pantalla el valor de una variable declarada;
                                   si la variable es del tipo "entero", se llama dentro de printf de la sgte forma: "%i";
                                   ahora, para especificar cuál es propiamente la variable del tipo "entero" que queremos
                                   llamar dentro de printf, se coloca una coma luego del "%i" (,) y se escribe el nombre
                                   que recibio la variable del tipo "entero" que deseamos llamar especificamente (x, este caso) */

  printf("valor de y: %f. \n", y); /* si la variable es del tipo "flotante", se llama dentro de printf de la sgte forma: "%f";
                                   ahora, para especificar cuál es propiamente la variable del tipo "flotante" que queremos
                                   llamar dentro de printf, se coloca una coma luego del "%f" (,) y se escribe el nombre
                                   que recibio la variable del tipo "flotante" que deseamos llamar especificamente (y, este caso) */

  printf("valor de y2: %f. \n", y2); /* si la variable es del tipo "double", se llama dentro de printf de la sgte forma también: "%f";
                                   es así porque "double" no deja de ser también una variable del tipo "flotante", sólo que su capacidad
                                   numerica es mayor. Ahora, para especificar cuál es propiamente la variable del tipo "flotante" que
                                   queremos llamar dentro de printf, se coloca una coma luego del "%f" (,) y se escribe el nombre
                                   que recibio la variable del tipo "double" que deseamos llamar especificamente (y2, este caso) */

  printf("valor de z: %c. \n", z); /* si la variable es del tipo "caracter", se llama dentro de printf de la sgte forma: "%c";
                                   ahora, para especificar cuál es propiamente la variable del tipo "caracter" que queremos
                                   llamar dentro de printf, se coloca una coma luego del "%c" (,) y se escribe el nombre
                                   que recibio la variable del tipo "caracter" que deseamos llamar especificamente (z, este caso) */

                                   // pero también podemos hacer lo siguiente:

  printf("Mis iniciales son: %c%c%c y mi edad es %d.\n", 'R', 'V', 'D', 25);

  /* Qué hicimos aquí? le hamos dado directamente un valor a los tipos de dato "char" e "int", %c y %d respectivamente,
     sin necesidad de hacerlo por medio de variables; sólo colocamos directamente en la funcion "printf" nuestros valores;
     adicionalmente, si se ha dado cuenta también, en una misma función "printf" hemos llamado,
     a través de sus especificadores de formato (%c y %d), varios tipos de datos (de tipo "char" y de tipo "int") y no sólo uno.
     */

  system("pause");
  return 0;

  }

// Dato: aunque float también pueda leer números enteros se recomienda sólo usar int para ellas debido a que la declaración de variable int pesa menos (16bits), float: 32bits.
/* si int se compone por 16 bits, entonces tiene 2 bytes; si float se compone por 32 bits, entonces tiene 4 bytes; y si double se compone por 64 bits, entonces tiene 8 bytes.
   Lo anterior es una aproximación, no tiene porqué ser definitivamente así. Pasa que la relación entre un byte y un bit es de: 1/8 respectivamente.


   Sobre las buenas prácticas a la hora de declarar las variables, lo que debe saber:
   1. Debe comenzar con una letra o un guión bajo (que puede ser seguido por cualquier combinación de letras, digitos o guiones bajos adicionales).
   2. No pueden llevar arrobas (@) ni guiones (-) en este lenguaje, ni empezar el nombre de las variables con un digito o número.
   3. Son sensibles a mayusculas y minusculas (pero igualmente no se recomienda declarar variables muy similares entre sí para evitar confusiones).
   4. "char" no puede ser declarado como un nombre de variable porque es una palabra reservada y es un tipo de definición de variable justamente
   5. El nombre de la variable no puede guardar espacios; por ejemplo, esto no se puede ser nombre de una variable: "Mi variable".

   */

   // En general es una buena práctica declarar (crearlas) solamente las variables cuando las necesite,... y luego asignarles un valor por aparte.
   // Al proceso de declarar variables; pero, al mismo tiempo y en la misma linea de código, asignarles un valor, se le conoce como: inicialización
   // Eso nos introduce a hablar de nuestro primer operador, el operador de asignación, un signo igual (=).

/* Si desearamos resumir todos los "printf" en uno se podría. Descubra cómo */
