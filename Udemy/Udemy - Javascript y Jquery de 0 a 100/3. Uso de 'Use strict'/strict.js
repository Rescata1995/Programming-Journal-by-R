// 'use strict'; // Esto es una declaración

numero = 30; 
/* el compilador de JS también puede sobre-entender que "numero" es una variable y que se le está dando un valor de: 30, 
   sin necesidad de haberla declarado antes con la palabra "var"... también puede funcionar así.

   Sin embargo, si hacemos uso de la declaración "use strict", el mismo compilador nos exigirá declarar las variables, 
   como se hace con "las buenas prácticas", usando la palabra "var" también. Entonces, la utilidad de usar la declaración
   "use strict" es: obligarnos a crear o mantener unas buenas prácticas de programación. 
   (sólo si deseas y si así lo deseas debes poner esa declaración en la primera linea de tu archivo.js)

   Idealmente es recomendable valerse de las "buenas prácticas" al programar; pues, además de mantener un código más ordenado y, 
   en apariencia, más legitimo; nos evitamos también posibles ataques de inyección de código malicioso (digamos, somos menos vulnerables)

   Como si fuera poco, todas las empresas buscan programadores que tengan "buenas prácticas" de programación, un código legible, 
   bien tabulado, etc. 
   */

console.log(numero);