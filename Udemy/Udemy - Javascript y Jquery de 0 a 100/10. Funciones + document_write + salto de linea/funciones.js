'use strict';

/* Las funciones (o métodos, como se conocen en lenguaje de programación orientada a objetos) 
   es un bloque de códigos que se ejecuta cada vez que lo llamamos, el cuál pretende realizar una tarea o acción en especifica;
   esto, con el supuesto de, no tener la necesidad de volver a escribir ese código para poner a correr dicha tarea en cuestión 
   (nos hace la vida más fácil). Idealmente, las funciones llevan por nombre algo que haga referencia propiamente a su función, 
   a la tarea que hace. 
   
   Para declarar una función en JS se hace por medio de la palabra reservada "function". Y esa es, 
   de hecho, la única diferencia que encontramos hasta ahora sobre cómo declarar variables en JS en comparación a C: 
   que las funciones no se declaran por medio de tipos de datos (como sí lo hace C), sino por medio de la palabra reservada "function".
   Tal que así:
 */

function acaNombreFuncion() // y, entre los parentesis(), se colocan los parametros o argumentos que va a recibir en dado caso
{
    console.log("Hola, soy la función 'acaNombreFuncion'.");
    // Esto es el dominio. Toda la estructura lógica de la función, propiamente, se escribe aquí: todo el desarrollo de su tarea.
    // De lo que se encargará hacer la función propiamente. (y a lo que, idealmente, debería referirse el propio nombre de la variable).
    return 'Hola, este return es lo que se ejecutará para cuando pongan a correr mi función directamente en la consola.';
    // este "return ...;" para que se vea, hay que llamar la función directamente en la consola.
}

function MostrarMensajeConsola() // nueva función personalizable
{
    console.log("Hola qué tal, mi función consiste en imprimir algo por consola justamente.")
}

MostrarMensajeConsola(); /* De esta manera hemos puesto a correr nuestra nueva función personalizable, creada por nosotros. 
                            y que tiene la tarea (o función) de hacer una impresión por consola sobre cualquier cosa.
                            Entonces, es de esta forma, en cómo se ejecutan las funciones en JS. 
                            (similar a C cuando llamamos una función personalizable dentro de la función principal) 
                            */

// Ahora vamos a ejecutar la función "acaNombreFuncion";
acaNombreFuncion();