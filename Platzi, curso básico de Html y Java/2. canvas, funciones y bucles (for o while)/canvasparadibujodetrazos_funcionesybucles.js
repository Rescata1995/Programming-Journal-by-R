
var llamar_dibujo = document.getElementById("dibujo");
var lienzo = llamar_dibujo.getContext("2d");

function dibujar_lineas (color, xi, yi, xf, yf)

{

lienzo.beginPath();
lienzo.strokeStyle = color;
lienzo.moveTo (xi, yi);
lienzo.lineTo (xf, yf);
lienzo.stroke();
lienzo.closePath();

}

dibujar_lineas("blue",100,200,200,300);
dibujar_lineas("red",100,50,250,200);


var lineas = 60;
for (var l = 0; l < lineas; l++)

{
  var xinicial = 0;
  var xfinal = 15 + (l*10);
  var yinicial = 15 + (l*10);
  var yfinal = 0;

  dibujar_lineas("black", xinicial, yinicial, xfinal, yfinal);
}
