'use strict';

var edad = 17;

/* inicialmente la idea que tenía era solicitar mi edad por teclado, como dato de entrada, por medio de la función "prompt"; 
sin embargo, la función "prompt" lee toda entrada pasada por tecla como cadena de texto (dato de tipo "string"); 
es decir, mi programa no iba a interpretar al número propiamente como un número, sino como un texto.
*/

switch (edad)
{
    case 18:
        console.log("Acaba de hacerse mayor de edad");
    break;

    case 19:
        console.log("Ya lleva un año con mayoria de edad");
    break;

    case 17:
        console.log("Usted es un menor");
    break;

    default:
        console.log("Sistema ineficiente para llegar a una conclusión con esta edad");
}

/* Si se da cuenta, hasta ahora, JavaS maneja la misma sintaxis que C. Lo mismo sucede con los bucles (de tipo for, while o do while).
   Lo único que varia es la forma en cómo son declaradas las variables. 
   Lo dicho, en JS no es necesario señalar el tipo de dato de una variable para ser declarada; sólo se escribe "var".
   Ni tampoco es necesario que, para ser llamada dentro de una función, se haga uso de especificadores de formato (no más: %c o %i): 
   simplemente se llama por su nombre y listo, también puede hacer concatenaciones con ella.

   curioso: en los bucles por lo general se declara una variable con nombre de: "i"... se refiere al "iterador" del bucle.
 */