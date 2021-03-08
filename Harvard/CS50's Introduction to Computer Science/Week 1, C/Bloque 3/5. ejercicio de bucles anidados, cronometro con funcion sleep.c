// Hacer un cronometro que comience cuando se pulse la tecla espacio

#include <stdio.h>
#include <unistd.h> // abrimos esta libreria para poder ejecutar la función "speed" más adelante (libreria para linux)

int main () {

  int h, min, seg; // los "contadores" independientes del tiempo
  int x;

  x = 1;

  for (h = 0; h <= 23; h ++) {
    for (min = 0; min <= 59; min ++) {
      for (seg = 0; seg <= 59; seg ++) {
        printf ("%02i:%02i:%i\r", h, min, seg); // si se da cuenta no se puso \n, sino \r (esta herramienta lo que hace es sobre-escribir sobre la linea de codigo ya ejecutada);
                                                // es decir, "\n": da un salto de linea; y "\r": sobre-escribe sobre la linea

                                                /* si se da cuenta también hemos agregado en la mitad de los dos primeros "%i" un: "02";
                                                con eso indicamos cuántos números queremos que aparezcan en cada variable; en este caso,
                                                hemos establecido que en la variable de la "hora" y en la variable de los "minutos"
                                                aparezcan dos espacios permitidos para contabilizar sólo números (00) y no uno (0) */


        sleep(x);
        /* con esta función "sleep" establecemos el tiempo de demora de ejecución de cada incremento ejecutado, uno (1) equivale a un segundo;
        en nuestro caso, hemos establecido que, por cada incremento mostrado en pantalla, se demore al menos un segundo para ejecutar el próximo (x = 1;).

        Ahora bien, "sleep" equivale a "un segundo", si se escribe "sleep" todo en minuscula; si "Sleep" se escribe con la "S" en mayuscula, entonces,
        "Sleep" se mide en milisegundos (1 segundo = 1000 milisegundos)
        */
      }
    }
  }

  system("pause");
  return 0;

}
