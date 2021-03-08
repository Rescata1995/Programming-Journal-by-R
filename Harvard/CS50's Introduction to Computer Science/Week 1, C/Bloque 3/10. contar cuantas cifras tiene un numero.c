// Cuántas cifras tiene un número pasado por tecla?, sin importar que sea negativo, 0 o número positivo.

#include <stdio.h>

int main(void){

int i, num;


printf("inserte el numero al que le desea saber cuantas cifras tiene: ");
scanf("%d", &num);

if (num != 0) {

for (i = 0;num != 0;i ++){

    num = num/10;   /* por cada vez que itere el bucle, se le restará una cifra al número insertado por tecla, el cual es: "num" (al dividirlo sobre 10);
                       de tal manera que, por cada división que se haga, me guarde dicho resultado sobre la misma variable "num" (num = num/10),
                       para que por cada iteracción pasada se vea reducida "num" en una cifra hasta que dicha variable se haga igual a 0 y se detenga el bucle;
                       pues, la condición para que el bucle funcione es que num sea diferente de 0 (num != 0);
                       la idea entonces seria que, el contador aumente en una unidad (i++) hasta que eso deje de pasar, hasta que deje de cumplirse esto: (num != 0),
                       apenas num sea igual a 0, dejara de funcionar el bucle y se detiene también la suma sobre el contador (i++);
                       con lo cual podríamos saber entonces cuántas cifras tiene, al fin y al cabo, el número pasado por tecla y guardado en la variable "num".
                       */
    }
  }
else if (num == 0) {
    i = 1;
}


printf("la cantidad de cifras del numero indicado es: %i \n", i);




return (0);
}
