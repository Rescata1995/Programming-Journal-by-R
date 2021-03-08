
var vp = document.getElementById("villaPlatzi");
var papel = vp.getContext("2d");

var mapa = "tile.png";     /* esta variable va a representar nuestro fondo (imagen),
                            será la ruta donde se cargue. Aunque no es necesaria crearla */

var imagen = new Image (); /* forma de cargar una imagen dentro del canvas,
                            por medio de la creación de un objeto-imagen completamente
                            nuevo que nos permita insertar una imagen al canvas.
                            Idealmente los objetos propios del HTML o JS se nombran con
                            una mayuscula inicial, a esas definiciones completas
                            de un objeto se les llama: "clases". Ej.: Math., Image., etc.

                            La variable llamada "imagen", a partir de la propiedad "new"
                            permite ser identificada como un nuevo objeto; como estamos
                            frente a la clase "Image" -new Image();-, el objeto resultante
                            de nuestra creación vendría a ser entonces un objeto-imagen
                            nuevo; que lleva por nombre, como ya dijimos, "imagen".
                             */

imagen.src = mapa;         /* Ahora bien, ya que hemos creado un nuevo objeto-imagen
                           que nos va a permitir cargar cualquier imagen a nuestro Canvas;
                           tenemos que, llamar a ese archivo externo colocando la fuente
                           de dicha imagen al nuevo objeto-imagen creado...
                           Eso se hace con la propiedad .src (imagen.src = mapa;)
                           se iguala a "mapa" porque mapa es justamente la variable
                           donde declaramos la ruta del archivo que queremos importar */

imagen.addEventListener ("load", dibujar);
                          /* por ultimo, se coloca el manejador del evento que nos permita
                          disparar la carga directa del archivo (en este caso una imagen)
                          que queremos subir; esto a partir del parametro "loud", el segundo
                          parametro, la funcion "dibujar" seria lo que queremos que se
                          ejecute luego de ejecutar "loud" */

function dibujar () /* declaramos la funcion "dibujar", lo que queremos que pase
                    luego de ejecutar "loud" o cargar la imagen */

{

  papel.drawImage (imagen, 0, 0);
                  /* se llama a papel. porque es al contexto al que se le pondrá
                  una imagen; es de esta forma en que se agrega una imagen.
                  Lo que sigue: se le pasa como parametro inicial al objeto-imagen
                  creado por nosotros (imagen), donde ya está lista y cargada la imagen;
                  y adicionalmente se pasan dos parametros más, la posicion en X e Y:
                  el punto (0, 0) siempre será la esquina superior derecha; es decir,
                  hemos querido entonces que la imagen sea completa sobre el papel */

}

// ahora, agreguemos las imagenes de los animales sobre el fondo

var pollo = new Image ();
pollo.src = "pollo.png";
pollo.addEventListener ("load", dibujarPollo);

function dibujarPollo ()
{
  var x_pollo = aleatorio(0,420);
  var y_pollo = aleatorio(0,420);
  papel.drawImage (pollo, x_pollo, y_pollo);
}  // y así importamos la imagen de un pollo sobre nuestro papel o lienzo



var cerdo = new Image ();
cerdo.src = "cerdo.png";
cerdo.addEventListener ("load", dibujarCerdo);

function dibujarCerdo ()
{
  var x_cerdo = aleatorio(0, 420); // definimos una variable aleatoria entre 0 y 420 en x e y
  var y_cerdo = aleatorio(0, 420); // con la intención de definir la ubicación del cerdo;
                             // es 0 y 420 debido a que la imagen cubre un espacio de 80x80,
                             // entonces para que pueda caber la imagen sobre el lienzo

  papel.drawImage (cerdo, x_cerdo, y_cerdo);
}  // y así importamos la imagen de un cerdo sobre nuestro papel o lienzo



var vaca = new Image ();
vaca.src = "vaca.png";
vaca.addEventListener ("load", dibujarVaca);


function dibujarVaca ()
{
    var limite_vacas = aleatorio(1, 25);
    for (var v = 0; v < limite_vacas; v++) { /* un bucle for si deseamos que, en vez, de
                                            mostrarme una vaca de pos. aleatoria, me muestre
                                            un numero aleatorio de ellas entre 1 y 25
                                            (porque así está definida nuestra variable
                                            "limite_vacas", que calcula cuantas vacas
                                            aleatorias va a mostrar entre 1 y 25) */

        var x_vaca = aleatorio(0,6); /* si quisiera que las vacas no salieran tapiñadas entre sí,
                                     sino que respetaran su espacio equivalente de: 80 pixeles;
                                     entonces, lo que podríamos hacer es: dividir el total del
                                     tamaño del lienzo sobre el tamaño en pixeles de una vaca.
                                     Sería: 500 px / 80 px = 6.25 pixeles (lo que significa que,
                                     si deseamos respetar el espacio de 80 pixeles sobre cada
                                     vaca, podemos reproducir un total maximo de ellas de: 6,25
                                     - es decir, 6 vacas en ultimas-) De ahí el numero aleatorio
                                     va desde 0 a 6 vacas.
                                      */
        var y_vaca = aleatorio(0,6);
        var x_vaca = x_vaca * 80; /* 80 pixeles representa el numero de espacio respetado
                                  sobre cada vaca reproducida en el lienzo (0 a 6 vacas) */
        var y_vaca = y_vaca * 80; /* es la misma operativa para y porque en y la medida de 
                                  la vaca es también equivalente a 80 pixeles (80*80) */

        papel.drawImage (vaca, x_vaca, y_vaca);
      }
}  // y así importamos la imagen de una vaca sobre nuestro papel o lienzo


function aleatorio (max, min)

{
  var resultado; // variables creadas dentro de una function sólo se ejecutan cuando se ejecuta dicha function
  resultado = Math.floor(Math.random() * (max - min + 1)) + min;
  return resultado;
}
