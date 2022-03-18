'use strict';

/* 
Constantes: lo que tiene que ver con lo inmutable o invariable. No cambia de valor. 
En programación, es igual, se puede entender como un tipo de variable,
definida por un valor, que no está expuesto a sufrir cambios durante toda la ejecución de nuestro código:
ni va a cambiar ni podemos forzarla a que cambie. 
En vez de escribir "var", para declararlas se escribe "const". Veamos un ejemplo. 
*/ 

var numero = 10;
const numero2 = 20;


/* Para probar que, efectivamente, las variables declaradas con el tipo de dato "const",
y no con la palabra "var", son inmutables... intentemos cambiar el valor de "numero" y "numero2" y ver qué aconteceç
*/ 


var numero = 100;
const numero2 = 200;

console.log(numero);
console.log(numero2);

/* El programa, en la consola, nos marcaría un error que dice textualmente que:
"Identifier 'numero2' has already been selected"; lo que significa que, efectivamente,
la constante "numero2" no puede variar su valor ni ser forzada a ello; pues, ya ha sido definida.

Por lo general la utilidad de las "const" radica en ser definidas para una tarea en especifica, 
que de antemano, se sabe que corresponde a definir algo que no va a variar nunca.
Como por ejemplo: para definir direcciones IP fijas para un servidor, etc.
*/