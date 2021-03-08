'use strict';

/* 
Las palabras "var" y "let" son dos palabras reservadas (de un único uso)
Se caracterizan por ser las palabras que se emplean para declarar variables dentro de JS. 

La diferencia entre ellas es sutil, pero bastante importante. Veamos un ejemplo.
*/

var numero = 20;
console.log(numero);

var numero = 100;
console.log(numero);

if(true) 
{
    let numero = 40; // estamos modificando el valor de la variable "numero" con "let" dentro del dominio de la condicional "if".

    console.log(numero); // ahora, dicha variable "numero", la vamos a imprimir por consola estando dentro del dominio de if.
}

console.log(numero); // por fuera del dominio de if, la misma variable "numero" la vamos a imprimir también. Qué acontece?

/* 
Pasa que "let", como herramienta, nos permite modificar el valor de una variable 
ya inicializada anteriormente con "var"; pero, solamente, este cambio lo puede 
ejercer dentro de un bloque o dominio donde pretende ser inicializada de nuevo 
(al ejecutar dicha variable con "let"); 
por fuera del dominio, dicha asignación de valor, no tiene validez. 
Seguiría manteniendo el mismo valor con el que fue definida por "var".

Debe saber que, estando o no por fuera de bloques de códigos o dominios, 
el valor de la variable siempre se mantiene definida por el último "var" 
con el que fue declarada e inicializada. 
(ojo, en JS, no importa si su última inicialización se dio por fuera o no de dominios;
lo va a tener en cuenta igual como su última definición de variable.

En conclusión, para definir o modificar variables de forma temporal se usa "let" 
(y sólo funciona dentro de bloques de código o dominios... para que las ejecute ahí dentro) 
y para definir variables de forma permanente, idealmente, use siempre "var".
*/




// 20, 100, 40, 100 (en este orden se imprimieron los valores para "numero" en la consola).