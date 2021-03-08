

/* antes de empezar vamos a llamar, de nuestro anterior archivo, a la función dibujarTrazo.
Como se dará cuenta, copiaremos acá la función; sin embargo, no nos traimos la
variable llamada "lienzo"; si bien recuerda, era la variable que definia el
contexto (las dimensiones de nuestro canvas, 2d o 3d), el cual es siempre
necesario definir. Para nuestra fortuna, el contexto del canvas no sólo se
puede llamar a través de variables; sino también pasandole un nuevo atributo
a la función definida (que en este caso lleva por nombre: "dibujarTrazo").

De todas maneras, le toca definir dos variables como siempre se hace en canvas:
la que llama la etiqueta del "canvas" del HTML por medio de un ID y la propiamente
creada para definir el contexto de dicho canvas; es decir, sus dimensiones.
*/

var cuadrito = document.getElementById("dibujo");
var papel = cuadrito.getContext("2d");
var x = 150; // estas variables las usaremos más adelante con switch
var y = 150; /* lo que queremos es dibujar lineas con las flechas del teclado
(al presionarlas) y queremos que el punto de partida sea el centro del lienzo.
Como ya leiste previamente, haremos todo esto con Switch. Está pendiente. */

/* la variable "papel" hará exactamente la misma labor de "lienzo";
sólo que, además de crear una nueva variable que defina nuestro contexto
de canvas también hemos llamado un nuevo atributo para eso llamado "lienzo"
(que de hecho "lienzo" era el nombre de la variable para definir el contexto
del canvas en el documento anterior)*/

function dibujarTrazo (color, xinicial, yinicial, xfinal, yfinal, lienzo)

/* mire que le acabamos de pasar un último atributo llamado "lienzo", a la
función dibujarTrazo, que se encargará justamente de definir el contexto.
De esa manera, por parametro, le he pasado el contexto de dibujo del canvas */


  {
  lienzo.beginPath();
  lienzo.strokeStyle = color;
  lienzo.lineWidth = 3; // propiedad que define el tamaño o ancho de una linea
  lienzo.moveTo(xinicial, yinicial);
  lienzo.lineTo(xfinal, yfinal);
  lienzo.stroke();
  lienzo.closePath();
  }

dibujarTrazo ("red", 149, 149, 151, 151, papel);

  // --------------------------------------------------------

/* Empezemos. A tener en cuenta: si hay datos numericos en tu informacion,
una buena practica es asignarles una variable.
- a las variables que hacen parte de una sola variable matriz
es bueno escribirlas en mayusc. porque se cree que, a lo largo de la vida
del codigo, nunca sufriran de modificaciones, siempre tendrán el mismo valor.
De ellas hablaremos ahora, de los objetos en JavaScript:

Si quieren crear variables con variables por dentro tienen que hacerlo
con bloques de codigo, es así como se conforman los Objetos en JS.

Dicho lo anterior, pongamos en practica el concepto:

vamos a crear un objeto que identifique el "keyCode" de las teclas de:
arriba, abajo, izquierda y derecha,
variables de una sola variable que llamaremos "teclas". Así:

*/

var teclas = { // Recuerde, los objetos son bloques de codigos
  UP: 38,
  DOWN: 40,
  LEFT: 37,
  RIGHT: 39
}

/* Ahora, a lo que vinimos:
para crear un .addEventListener que se base en el movimiento de las flechas
sobre toda la pantalla, debemos llamar un objeto que, justamente, no solo se
concentre sobre el lienzo (canvas), sino sobre toda la pantalla del computador.
Ese objeto que acompañe, que vendría a ser la función "manejador del evento"
junto con .addEventListener y el 1er parametro llamado ("keyup" o "keydown", ya explicaremos)
no podría ser otro que el objeto "document."; y es document. porque es el objeto de HTML
que cubre todo lo que contiene HTMl (y no sólo el lienzo).
En .document es el lugar donde está la forma de detectar que las flechas del teclado
(o realmente cualquier flecha del teclado) ha sido presionada. Su sintaxis queda algo así: */

document.addEventListener ("keyup", dibujarTeclado); // o "keydown".

/* "keydown" es la forma en la que se llama a que uno oprima una tecla,
lo mismo para "keyup". Pruebalo! Este sería nuestro primer parametro,
el parametro "manejador del eveto".
El segundo parametro, la función-evento que queremos que dispare "keyup" o "keydown"
sería una función que nosotros mismos decidamos crear (lo que queremos que pase
cuando se oprima una tecla, por ejemplo. En el anterior caso, carpeta 3, nuestro
"manejador del evento" era "hacer un click", y no "presionar una tecla", caso actual

/* Aclaremos algo: la diferencia entre "keydown" y "keyup" es que "keydown" ejecuta
el evento de: "presionar tecla" incluso cuando está se mantiene presionada por
mucho tiempo (lo ejecuta muchas veces mientras esté presionado);
en cambio, con "keyup" la función "presionar tecla" sólo se ejecuta cada vez que
presionemos y, también, levantemos el dedo del teclado presionado; de lo contrario,
el evento "presionar tecla" no se ejecuta. Interesante, no? Ahora sí, sigamos...
*/

/*
Parece ser entonces que, lo que queremos que pase, según la función-evento que crearemos,
es que al presionar una tecla se dibuje algo. Con razón se llamará el segundo parametro:
"dibujarTeclado", el parametro del evento que deseamos que ocurra (dibujar)
cuando ocurra el primer parametro (presionar una tecla). Procedamos: */

function dibujarTeclado (evento) /* nota: los eventos no necesitan parametros, son opcionales,
                            pero si coloca alguno; usted podría saber, a partir del parametro
                            que le pasó, todo lo que sucede detras del evento que se ejecuta
                            (caracteristicas, enumeración, nombre, boton o click, etc)
                            Eso se hace de la siguiente forma: console.log(parametro);
                            En nuestro caso al parametro le pondremos por nombre "evento"
                            */
{

  console.log (evento); /* con esto podemos saber que el parametro llamado con nombre de "evento"
                        despliega un sin numero de propiedades o atributos detras de cada tecla que
                        presionemos (así pasa con el manejador de evento "presionar tecla", pero puede
                        pasar con cualquiera, como por ejemplo con el de "hacer un click").
                        Una propiedad del manejador de evento "presionar tecla" es, por ejemplo,
                        el atributo: "keyCode", que basicamente nos dice la enumeración que le
                        da el teclado a la tecla presionada. Haremos algo interesante con eso.
                        Queremos que el programa nos arroje una alerta señalandonos que flecha del
                        teclado (arriba, abajo, izquierda, derecha) estamos presionando. Es así:
                        */

    if (evento.keyCode === teclas.UP) {
      console.log ("Arriba con if");
    }

    else if (evento.keyCode === teclas.DOWN) {
      console.log ("Abajo con if")
    }

    else if (evento.keyCode === teclas.LEFT) {
      console.log ("Izquierda con if")
    }

    else if (evento.keyCode === teclas.RIGHT) {
      console.log ("Derecha con If")
    }

    else {
      alert ("Haz presionado una tecla innecesaria");
    }


/*
recuerde: el keyCode de las flechas puede saberse precisamente con console.log(evento)
para nuestro caso. Es lo que ya explicamos, donde se especifican todos esos datos.
*/

/* Continuemos: hay una instrucción especial de JS que se llama Switch, éste
se usa cuando tenemos muchas condicionales agrupadas (if, por ejemplo) pero que
también, idealmente, cuentan con un sólo operador de comparación (por ejemplo, ===),
entonces Switch, como instrucción especial, nos permite estructurar de una manera
más sencilla, en estos casos puntuales, nuestro codigo. Vamos a resumir el mismo
codigo anterior, elaborado con condicionales if, usando esta vez Switch. Así:
*/
  var color_trazo = "black"; // definimos el color de cada trazo desde una variable para no cambiar, de a uno, el color de cada trazo ejecutado. Sólo la variable.
  var movimiento = 10; // cada que presionemos la tecla de una flecha, se desea que se mueva el trazo en 10 pixeles en la dirección correspondiente a la flecha.
  switch (evento.keyCode)

    {
    case teclas.UP:
      console.log("Arriba con Switch");
      dibujarTrazo(color_trazo, x, y, x, y - movimiento, papel);
      y = y - movimiento; // esto permite la interacción, da la sensación de movimiento sobre cada trazo dibujado por cada 10 pixeles (sin borrar el trazo ant.)
    break;

    case teclas.DOWN:
      console.log("Abajo con Switch");
      dibujarTrazo(color_trazo, x, y, x, y + movimiento, papel);
      y = y + movimiento; // como te decia, esto es lo que permite la iteracción en la ejecución del código, sigue registrando trazos, uno tras otro, cada 10 pix.
    break;

    case teclas.LEFT:
      console.log("Izquierda con Switch");
      dibujarTrazo(color_trazo, x, y, x - movimiento, y, papel);
      x = x - movimiento;
    break;

    case teclas.RIGHT:
      console.log("Derecha con Switch");
      dibujarTrazo(color_trazo, x, y, x + movimiento, y, papel);
      x = x + movimiento;
    break;

    default:
      console.log("efectivamente se trata de una tecla diferente");
      // el default de switch es como el else del if
    break;
    }
  }

  /* como se puede observar, con la herramienta Switch no se hace necesario
  colocar ningun operador de comparación, por qué pasa esto? pasa porque
  la herramienta switch funciona a partir de un condicional if ejecutado
  previamente; toma del if su operador de comparación implicitamente y se evita
  escribirlo de nuevo, de tal manera que así se resuma un poco más el código.
  Switch, para ser honesto, sólo es util en operadores de comparación de igualdad
  (===), pues aplica para todos los casos el mismo operador condicional fijado */
