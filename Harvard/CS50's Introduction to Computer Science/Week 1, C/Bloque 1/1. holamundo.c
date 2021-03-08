// hola mundo

#include <stdio.h> // instrucción para cargar una libreria (#include), casi siempre toca hacer esto para poder trabajar con el lenguaje C y tener acceso a sus herramientas.
                   /* el instrumento <stdio.h> es el archivo de cabecera que contiene las definiciones de las macros, las constantes, las declaraciones
                   de funciones de la biblioteca estándar del lenguaje de programación C para hacer operaciones estándar, de entrada y salida; un ejemplo de función: printf */

int main (void) {              /* int main no es más que la función principal, y a veces se le pasa un argumento llamado: "void"; lo cual en "C" es util,
                                  para este caso, ya que no hay argumentos de entrada para este programa. Es decir,
                                  como no tomé argumentos dentro de la función "main",
                                  pondremos "void" (que curiosamente significa "vacío") como la función principal de entrada de argumentos. *No es necesario esto*

                                  Todo lo que esté dentro de los corchetes {} es ejecutado por: int main() */

  printf("Hola Mundo. \n \n"); // printf no es más que la orden que le damos al programa, en lenguaje C, para indicar que queremos que aparezca en pantalla; printf lo ejecuta.
                               // printf significa "imprimir por pantalla" y eso que queremos que se muestre es lo que está dentro de las comillas; en este caso, "hola mundo".
                               // dato: "\n" es un caracter de escape que hace un salto de linea. Dos "\n": dos saltos de lineas antes de mostrar la siguiente linea de texto.

  system("pause");      /* este comando significa que usted ya ha terminado de ejecutar lo que está dentro de su función y que ya no ejecutará más nada; entonces, desea
                        que el sistema le arroje un mensaje que diga: "presione una tecla para continuar... "; bueno, ese mensaje, se arroja con: system ("pause");.
                        Ponerlo hace parte de una buena costumbre de programación */

  return 0;             // return 0; indica que ha dejado de trabajar, en su totalidad, con la función int main (). Es una buena práctica poner este código para finalizar.


  }

  /* luego de finalizar con nuestro código se hace necesario compilar.
  Basicamente "compilar" lo que hace es traducir el texto o código que tenemos,
  en lenguaje C, en un texto legible para el ordenador; de tal manera que lo
  entienda (un lenguaje ordinario). Entonces, compilar sólo traduce el lenguaje;
  mas no lo ejecuta. Toca compilar y ejecutar.  */

  /* Uno también tiene la capacidad de crear sus propias librerias como por ejemplo: "holberton.h" (con sus propias funciones definidas)
     Estas librerias se pueden crear dentro de un editor de texto (tal como lo estamos haciendo ahora, Atom es un editor de texto más)
     donde la primera linea de código debe fijarse la libreria stdio.h (#include <stdio.h>, tal como lo hacemos ahora igual) y, esta es la novedad,
     justamente después, en la segunda linea, debe ir la declaración de la nueva libreria; en este caso, holberton.h (#include <holberton.h>);
     es decir, realmente la novedad, con respecto a este archivo, sería: solamente incluir la nueva libreria que hemos creado. Del resto, se maneja la misma estrctura.
     */
