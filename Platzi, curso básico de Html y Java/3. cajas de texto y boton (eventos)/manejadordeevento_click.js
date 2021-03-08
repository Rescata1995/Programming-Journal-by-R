

var texto = document.getElementById("texto_lineas");
var boton = document.getElementById("botoncito");

boton.addEventListener ("click", dibujoPorClick);

    /* el .addEventListener se pone sobre el "boton" debido a que queremos que
    el evento "dibujoPorClick" sólo se ejecute cuando interactuemos directamente
    con la caja de botón y no con toda la pantalla (si quisieramos que el evento
    se dispare cuando interactuemos con cualquier parte de la pantalla se coloca:
    document.addEventListener) */

    /*-recuerde que esta funcion vendria siendo la funcion "manejador de evento";
    es decir, todo lo que este dentro de la función .addEventListener que;
    en este caso, es dibujoPorClick se ejecutara al nosotros
    hacer un click sobre la caja del boton- */

var llamar_dibujo = document.getElementById("dibujo");
var lienzo = llamar_dibujo.getContext ("2d");


function dibujarTrazo (color, xinicial, yinicial, xfinal, yfinal)

  {
  lienzo.beginPath();
  lienzo.strokeStyle = color;
  lienzo.moveTo(xinicial, yinicial);
  lienzo.lineTo(xfinal, yfinal);
  lienzo.stroke();
  lienzo.closePath();
  }

function dibujoPorClick ()

  {
    /*
    Ahora bien, si dentro de la function dibujoPorClick () queremos que,
    al asignarle un valor manualmente a la caja de texto
    y que éste se registre guardando dicho valor en una variable...
    Tenemos que poner lo siguiente dentro de la function, así la sintaxis del codigo:
    Suponiendo que declararemos la nueva variable de la function dibujoPorClick con "X".

    Var X = nombre o variable asignado en JavaS al imput ="text" de HTML + .value

    Por ejemplo: Var X = texto.value (tomamos de ejemplo la variable "texto" que
    fue de hecho la asignada realmente en JavaS al imput ="text" de nuestro HTML)

    Nota: se pone el "value" para que el programa lea inmediatamente que se le está
    asignando un valor a la X y que esa asignación depende del dato insertado en la
    caja de texto que mete manualmente el usuario). Ahora bien, los valores que uno meta,
    exclusivamente todos, son del tipo string o cadenas de texto;
    es decir, si queremos que el programa interprete a un número como lo que es, un número:
    Debemos convertir el string entonces en un valor numérico y eso se hace con: parseInt.
*/
    inserte_valor = parseInt(texto.value); // queda así para nuestro caso real.

    /* explicado lo anterior, podemos llamar a la variable que asignamos para darle un valor
    manualmente a la caja de texto (inserte_valor) e igualar dicha variable al total de lineas
    que queremos ver reflejadas en el canvas (de tal manera que sea el usuario
    quien decida manualmente cuantos trazos quiere ver sobre el lienzo
    y hacer el proceso mas interactivo para el visitante de la pagina web)
    */

    var ancho = llamar_dibujo.width; // ancho del lienzo que es: 300, está definido en HTMl
    var lineas = inserte_valor; // el numero de lineas que quiero dibujar, definido por el mismo usuario
    var espacio = ancho/lineas; /* el espacio que quiero guardar por cada trazo ejecutado para que puedan
                                   caber todos ellos (los que sean) en un limite de lienzo establecido */

    var xf; // de esta manera se declaran variables sin necesidad de darles un valor
    var yi;
    var xi;
    var yi;

    for (var l = 0; l < lineas; l++) // mientras l sea menor que lineas ejecutara el sgte bloque de codigos:
      {
    xf = espacio * (l+1); // mas tarde se explicara porque la l, cada vez que se ejecute el codigo, se incrementará en 1.
    yi = espacio * l; // so, cada que se ejecute el codigo se hara una nueva operativa matematica con la "l" incrementada cada vez en 1.
    xi = espacio * l;
    yf = espacio * (l+1);
    dibujarTrazo("black",0,xf,yi,300);
    dibujarTrazo("black",xi,0,300,yf);
      }

  }

  dibujarTrazo("red", 1, 1, 1, 299); // lineas de los bordes,
  dibujarTrazo("red", 1, 299, 299, 299); // fuera del bucle porque queremos que solo se ejecute una vez



  /* l++, esta formula ejecuta ciclicamente el codigo, sumandole una unidad a la "l",
      hasta que la condicion for deje de ser verdadera (l < lineas); es decir,
      el bloque de codigos que está dentro del ciclo for se ejecutara tantas
      veces pueda hasta que la "l" alcance el mismo valor de "lineas", de uno en uno. Quiere
      decir que, si por ejemplo "lineas" es igual a 30 (valor insertado por el mismo usuario)
      el código dentro del bloque de codigos se ejecutará justamente
      30 veces (porque esa es la condición que exigimos en for, que se ejecute el codigo
      todas las veces hasta que "l" se incremente, de uno en uno, a 30).

      Ahora, si el usuario inserta en "lineas": 1000, quiere decir que, sobre el lienzo,
      se harán justamente 1000 lineas (pues el codigo se ejecutara tantas veces hasta
      que "l" se incremente a 1000, como "l" se incrementa de uno en uno *l++*, el codigo
      se ejecutará 1000 veces... haciendo asi 1000 trazos o lineas sobre el lienzo);
      sin embargo, cómo hariamos para que, en un lienzo de ancho de 300 pixeles
      quepan todas esas 1000 lineas o un millon?
      pues reduciendo el ancho mucho más cada vez que incrementemos el numero de lineas,
      de tal manera que se vean todas las lineas dentro del lienzo de 300 pixeles
      (o de cualquier medida que sea éste).
      Eso se hace creando una variable que calcule dicho espacio así: ancho/lineas y esa es
      la variable que usaremos para definir justamente el espacio de cada linea sobre otra
      (como se ve en la operativa matematica)

      */

      // falta explicar el concepto de espacio
