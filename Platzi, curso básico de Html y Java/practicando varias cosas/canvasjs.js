

var texto = document.getElementById("texto_lineas");
var boton = document.getElementById("botoncito");

function dibujoPorClick ()

{
  alert("No me toques!");
}

boton.addEventListener ("click", dibujoPorClick);


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

  dibujarTrazo("red", 100, 200, 200, 100);
  dibujarTrazo("blue", 10, 150, 290, 150);

var lineas = 30; // el numero de lineas que quiero dibujar
var l = 0;
var xf; // de esta manera se declaran variables sin necesidad de darles un valor
var yi;
var xi;
var yi;

while (l < lineas) // mientras l sea menor que lineas ejecutara el sgte bloque de codigos:
{
xf = 10 * (l+1); // mas tarde se explicara porque la l, cada vez que se ejecute el codigo, se incrementará en 1.
yi = 10 * l; // so, cada que se ejecute el codigo se hara una nueva operativa matematica con la l incrementada cada vez en 1.
xi = 10 * l;
yf = 10 * (l+1);
dibujarTrazo("black",0,xf,yi,300);
dibujarTrazo("black",xi,0,300,yf);

  l++;/* la formula ejecuta ciclicamente el codigo, sumandole una unidad a la l,
      hasta que la condicion while deje de ser verdadera (l < lineas); es decir,
      el bloque de codigos que está dentro del ciclo while se ejecutara tantas
      veces pueda hasta que la l se incremente hasta 30, de uno en uno. Quiere
      decir que el código dentro del bloque de codigos se ejecutará justamente
      30 veces (porque esa es la condición que exigimos en while
      hasta que se incremente l de uno en uno hasta que llegue a 30).
      Queremos que se ejecute el codigo sólo 30 veces porque el lienzo total
      mide 300 pixeles y cada trazo guarda una distancia de 10 pixeles
      (como lo establecimos en el bloque de codigos con las variables xf e yi)
      es decir, le caben 30 trazos en total al lienzo. Que es, efectivamente,
      el mismo numero de lineas que establecimos que queriamos ver (lineas = 30)
      */
}


dibujarTrazo("red", 1, 1, 1, 299); // lineas de los bordes
dibujarTrazo("red", 1, 299, 299, 299); // lineas de los bordes

// bucles o ciclos con for (tomemos el mismo ejemplo anterior)

/*

for (var l = 0; l < lineas;l++)
{
xf = 10 * (l+1);
yi = 10 * l;
xi = 10 * l;
yf = 10 * (l+1);
dibujarTrazo("black",0,xf,yi,300);
dibujarTrazo("black",xi,0,300,yf);
}

*/
