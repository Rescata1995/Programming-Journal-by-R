
/* introducción a los modulos (matematicas):
los modulos son operaciones matematicas que consisten en arrojar
como resultado el residuo de una división (lo que sobra) muy por el contrario
a la división que sí da el resultado real (lo que hay o encaja);
por ejemplo, si dividimos 8 / 5 tenemos que el resultado real sería:
1 y un par de decimales al lado; sin embargo, para que 5 sea completamente
divisible de 8 (es decir, sin decimales al lado) me faltarían 3 unidades.
Pues bien, eso que me falta, "las 3 unidades", es justamente
lo que calcula la operación matematica "Modulo".

En JavaScript, modulo se representa con un porcentaje (%) matematicamente
Ej.: 8 % 5 = 3

Ahora, haremos un ejercicio con esto:
*/

var numeros = 100;
for (var i=1; i<=numeros; i++) {
   if (i % 3 == 0)
   {
     document.write("Fizz");
   }
   if (i % 5 == 0)
   {
     document.write("Buzz");
   }
   if (i % 5 != 0 && i % 3 != 0) /* no se coloca "else if" debido a que las
                                  condicionales deben ser independientes entre sí;
                                  pues, hay condicionales con una o varias condiciones
                                  iguales entre sí (y una condicional se va a interponer
                                  sobre otra sí o sí): por ej., este último if se relaciona 
                                  tanto con el primero como el segundo condicional; entonces
                                  para que el programa pueda leer y ejecutar cada condicion
                                  sin comprometer a las otras; respetando cada resultado
                                  deseado en cada una de ellas, las condicionales debe ser
                                  independientes (ponerlas todas con if y no con else if) */
   {
     document.write(i); /* si lo anterior es verdadero se muestran numeros, de lo contrario,
                        se muestra justamente lo contrario a los numeros. ¿que fue establecido
                        como lo contrario a los numeros? las cadenas de texto "Fizz" y "Buzz". */
   }
   document.write("<br />");     /* "<br />", así tal cual, como si fuera
                                 una cadena de texto, se escribe en JS
                                 para dar un salto de linea, recuerdelo.
                                 Como ambas condiciones (if y else)
                                 requieren dar un salto de linea sobre
                                 cada enumaración (del 1 al 100); entonces,
                                 podemos poner por fuera del if y del else
                                 ese codigo ("<br />") y así se contabiliza
                                 para ambos (digamos, para resumir codificacion)
                                 */
}
