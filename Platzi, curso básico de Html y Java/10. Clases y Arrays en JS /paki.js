
// Introducción a los Arrays

/* Un array es una variable separada en "cajitas" con diferentes elementos;
ej: var cajitas = [];
cajitas[0]= "mi primer array de la misma variable cajitas";
cajitas[1]= "mi segundo array de la misma variable cajitas";

Los arrays, se organizan, desde 0 en adelante

También se pueden crear "arrays" donde, en vez que las posiciones sean
numeros, sean textos. Por ej:

cajitas ["nombre"] = "Roberto";

Ahora, por medio de Arrays, vamos a importar las imagenes para cada animal.
Sin necesidad de hacer uso de Canvas. Así:
*/

var imagenes = [];
imagenes["cow"] = "vaca.png"; //
imagenes["chicken"] = "pollo.png";
imagenes["pork"] = "cerdo.png";

/*Se dará cuenta que, cada Array de "imagenes" está posicionado con Strings como:
"cow", "chicken" y "pork"; esto se hace con una intención. Queremos asociar
directamente los Arrays creados con las instancias de la clase "Pakiman"
que vamos a crear; pero, especialmente, la asociación se hará es con
el indicador que vamos a crear, dentro la clase Pakiman, como: "this.nombre".
*/

/* luego, iremos a la funcion "constructor" y agregamos un this.imagen
este "this." va a invocar una imagen por medio de "new Image" */


class Pakiman /* clase: definicion de un objeto, se compone de atributos o propiedades
                 con valor propio definidos por medio de un "constructor" */
{
  constructor(name, life, attack)

  {
    this.imagen = new Image(); // creación de nueva clase del tipo "Image".
    this.nombre = name;
    this.vida = life;
    this.ataque = attack;

    this.imagen.src = imagenes[this.nombre];
    /* atributo de la dirección de una imagen (para importarla, pero, esta vez,
    desde Objetos y Arrays). Como habiamos asociado los Arrays con el indicador
     "this.nombre", es por eso que la dirección de la imagen se encuentra así. */

  }
  /* las funciones que se disparan cuando se está creando un nuevo objeto en una clase,
  se les llama: constructores y en la sintaxis de JS se identifican así: "constructor".
  Es como la función "function", sólo que no tiene nombre */

  hablar () /* en caso que deseemos crear una nueva función (function) dentro
            de la clase (class) no se requiere escribir la palabra "function"
            dentro de "class"; sólo la definimos para ella, se abren y cierran
            parentesis y se abren y cierran llaves. Así como haremos en "mostrar".
            Aquí, por ejemplo, hemos creado la función "hablar" */
  {
    alert(this.nombre);  /* acá ponemos lo que queramos ejecutar,
                         si queremos invocar esta alerta de la función "hablar"
                         llamamos a la instancia creada a la cual le deseamos
                         ver su alerta y listo. Sería así: cerdo.hablar o
                         vaca.hablar o pollo.hablar. Después del console.log
                         grupal podrá ver un ejemplo de esto. */
  }

  mostrar () // nueva funcion creada en esta clase para que nos dispare las imagenes de los animales (y otras cosas)

  {

    document.body.appendChild(this.imagen); // objeto que permite agregar un elemento importado al documento o lienzo.
    document.write ("<p>"); // la manera de abrir un parrafo de HTML en JavaS
    document.write ("<strong>" + this.nombre + "</strong><br />"); // la forma en como se importan las etiquetas <strong> y <br /> (salto de linea) de HTML en JavaS
    document.write ("Vida: " + this.vida + "<br />");
    document.write ("Ataque: " + this.ataque + "<br />");
    document.write ("</p> <hr />"); // la manera de cerrar un parrafo de HTML en JavaS (y adicionalmente hemos mostrado como hacer un salto de linea pero con rayas)

/* como la imagen está por fuera de la iniciación del parrafo y, adicionalmente,
se escribió primero que él; entonces, la imagen se mostrará primero que el texto.
En Elements, al inspeccionar elementos, al igual se puede ver en qué orden
se está ejecutando HTML (incluso aunque éste esté siendo manipulado por JS.)
*/

  }

}

var vaca = new Pakiman("cow", 100, 30);
var pollo = new Pakiman("chicken", 80, 50);
var cerdo = new Pakiman("pork", 120, 40);

/* Así es como se crean instancias de una clase (Pakiman) ya creada;
esas instancias, sería en nuestro caso, los objetos "vaca", "pollo" y "cerdo".

Los parametros que le pasemos dentro del parentesis al "new Pakiman"
pasarían a ser los parametros también del "constructor" inicial,
ante un primer parametro pasado a "new Pakiman" ese también sería
el primer parametro del "constructor" y así sucesivamente */

pollo.mostrar(); /* así llamamos, fuera de la función mostrar,
                al elemento que deseemos de ahí. (una imagen importada).
                Se hace llamando a la instancia creada (variable "pollo")
                de la imagen que deseemos importar. En este caso, "pollo.png".
                Sin embargo, puede hacer lo mismo para los demás ejemplares:
                vaca & cerdo */

vaca.mostrar();
cerdo.mostrar();



 console.log (vaca, pollo, cerdo); // forma de resumir los "console.logS"

/* como podrá observar las clases nos van a permitir agrupar un sin numero
de variables con sus propias caracteristicas a partir de un mismo conjunto
de caracteristicas a definir en cada una de esas variables; es decir,
para nuestro ejemplo, tenemos que nuestro grupo de interes son los animales,
a ese grupo le llamamos: "Pakiman", que sería la clase. Dentro de ese listado
de animales tenemos 3 (nuestras variables): vaca, pollo y cerdo. Y cada una de
esos animales (variables) posee por definicion unas caracteristicas propias
(atributos o propiedades). El listado de esas caracteristicas en comun a
definir individualmente para cada animal (variable) se les conoce como:
atributos o propiedades, como ya lo habiamos dicho. En nuestro caso las
propiedades o atributos en comun a definir para cada animal son: "name",
"life" y "attack"; estos se definen a partir de una herramienta "this." dentro
del Constructor de una Clase.

Puede seguirse de este ejemplo para saber la sintaxis estructural de una Clase en JS. */

vaca.hablar(); /* Este es el ejemplo. Así funcionan las funciones dentro de una
               clase (bases de programación orientada a objetos) */
