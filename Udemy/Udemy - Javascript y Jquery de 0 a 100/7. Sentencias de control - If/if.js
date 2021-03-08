'use strict';

// función "prompt" se usa para pedir datos de entrada a usuario: lo mismo que hace scanf, gets y fgets en C (exceptuando sus variaciones)
var edad = prompt("Cual es tu edad: ");

if (edad > 18) 
{
    console.log("Eres mayor de edad");
}
else if (edad < 18)
{
    console.log("Eres de menor de edad");
}
else 
{
    console.log("Recién acabas de hacerte un adulto joven");
}
/*  Operadores lógicos (se emplean necesariamente sobre más de una comparación o condición analizada): 

    && = "Y".
    || = "O".
    ! = Negación (si una condición es falsa, con sólo una: toda la estructura condicional será "false".

    Operadores relacionales:

    == Igual
    <= Igual o menor que 
    >= Igual o mayor que
    != Distinto a 
    < Menor que 
    > Mayor que
 */

 /* Con los operadores, lógicos y relacionales, podemos evaluar la validez de una condición (o comparación) establecida 
 entre dos o más de dos variables. 
 */
