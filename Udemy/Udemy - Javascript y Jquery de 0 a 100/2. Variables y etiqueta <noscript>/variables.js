
// Qué es una variable? // comentario corto en JS (de una sola línea)

/* comentario largo en JS 
(más de una línea) */

/* Una variable, en informatica, se define como un espacio de memoria donde almacenamos ciertos tipos de datos.
En JavaScript pasa algo muy similar que en Python y muy contrario a lo que pasa en C, no se hace necesario especificar 
a qué tipo de dato pertenece la variable declarada (si es "string" o "int"), tan sólo se declara con la palabra "var";
Tampoco hace uso de especificadores de formato (por ej. %s ó %i) para llamar a las variables dentro de una función (por ej. print),
simplemente se declara con su respectivo nombre y se le asigna un valor (relacionado a cualquier tipo de dato) y listo.

Sin embargo, antes de pasarle cualquier nombre a nuestra variable, debemos escribir la palabra "var" (lo que ya hemos dicho)
para indicar que queremos declarar una variable en cuestión. Veamos eso. 
*/ 

var caja = 5; // variable de tipo "númerica"

/* lo que acabamos de hacer es declarar e inicializar una variable llamada "caja" con un valor, en este caso númerico, de: 5. 
   Ahora, esta misma variable puede estar expuesta a cambio; puede darle una nueva asignación de valor con cualquier tipo de dato;
   tal que así:
*/

caja = "Hola"; // variable de tipo "string".
caja = false; // variable de tipo "booleano".

/* no es necesario hacer una nueva declaración de variable luego de ya haberla creado con anterioridad 
(en caso que desee modificar su valor por cualquier tipo de variable o dato, justo como lo hicimos con la variable "caja"). 
*/

/* Ahora, hay un cuarto tipo de variable adicional que se llama: "Arrays": son variables de mayor complejidad porque, 
basicamente, permiten agrupar más de un tipo de dato o información que, por lo general, se encuentra relacionado a su variable.
Este almacenamiento de información lo hace por medio de diferentes campos estructurados identificados por: Posiciones. 
El conteo de las posiciones en las que se encuentran los datos comienza desde 0, tal que así: 

prueba[0] = equivale o hace referencia al primer dato de la variable Array, suponiendo que el Array se llama "prueba".
prueba[1] = equivale o hace referencia al segundo dato de la variable Array, suponiendo que el Array se llama "prueba".
prueba[2] = equivale o hace referencia al tercer dato de la variable Array, suponiendo que el Array se llama "prueba".
Y así sucesivamente.

Estos mismos datos dentro de un único Array se encuentran separados por comas (,). Ya veremos esto mejor con un ejemplo.
 */ 

 var semana= ['lunes', 'martes', 'miercoles', 'jueves', 'viernes']; 
 // observe que se asiste de llaves para poder agrupar la variedad informativa que tiene por dentro

 // Ahora quiero que JS me imprima por la consola del navegador, mediante función "console.log();", el primer dato de mi Array "semana".

 console.log(semana[0]); // revise siempre en "inspeccionar elemento, consola" para revisar lo que imprime esta función.






