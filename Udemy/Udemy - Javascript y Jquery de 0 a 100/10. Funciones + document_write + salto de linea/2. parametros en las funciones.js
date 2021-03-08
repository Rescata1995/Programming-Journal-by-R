'use strict';

var x = 1000;
var z = 100;

// Sugerencia: se debe respetar el orden de los parametros de una función al ser llamados (debe haber correspondencia con su declaración).
// llamado a la función "MayorNumber" en las variables "x" y "z". Acá se pone a correr la tarea ya definida para la función "MayorNumber".
var xoz = MayorNumber(x, z);  
document.write("el número mayor entre x y z es: " + xoz + "."); // función que hace una impresión, pero ahora sobre el documento HTML.

document.write("<br><br>"); // salto de linea en JS: hemos dado 2.

var c = 2000;
var d = 200;

// 2do llamado a la función "MayorNumber", ahora para las variables "c" y "d". De nuevo,
// hemos llamado a esta función para "saber el número mayor entre dos números"; es decir, ahora queremos saber el mayor entre "c" y "d".
var cod = MayorNumber(c, d);
document.write("el número mayor entre c y d es: " + cod + ".");



// declaración de la función "MayorNumber" por medio de variables "a" y "b". Aquí se define qué tarea queremos que haga la función.
// Dicha tarea (o función) es: elegir entre dos números el número mayor. (por eso la necesidad de usar dos parametros: "a" y "b").
function MayorNumber (a, b) 
{
    var a; 
    var b;
    var aux;

    if (a > b) 
    {
        aux = a;
    }
    else 
    {
        aux = b;
    }
    return aux; 
}

// Es realmente la misma lógica de C (cambian algunas cosas de su sintaxis, que usted ya conoce, pero del resto igual).

/* Lo relativamente nuevo es que, en JS, no es necesario declarar una función principal (del tipo "main"). 
Sin embargo, toda nueva función personalizable que desee crear sí la debe declarar por medio de la palabra reservada "function".
Dentro de estas funciones también puede llamar a otras funciones personalizables.

Lo otro: las variables pasadas como parametros o argumentos en la creación de la función "MayorNumber"; es decir, "a" y "b"...
Deben ser declaradas como variables por fuera, no cuando están siendo pasadas como parametros o argumentos.
Por ejemplo, para que se entienda bien, esto no es valido en JS: "function MayorNumber (var a, var b) {...}".

Idealmente las variables se declaran en el dominio de la función; es decir, después de que se abren los corchetes {}, no antes.
Tal como se ve en nuestro ejemplo anterior: 

{
    var a;
    var b;
}

Incluso parece ser que, para ser declaradas, sólo basta con pasarlas como parametros o argumentos en la creación de la función
personalizable sin necesidad de hacer uso de la palabra reservada "var"; tal que así: "function MayorNumber (a, b) {...}"
Sin embargo, por un tema de buena práctica, conviene bien para mí que sean declaradas con "var" en el dominio de la función
personalizable en cuestión.
*/
