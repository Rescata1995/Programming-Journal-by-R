/* nuestra introducción la haremos con las funciones matematicas de JS,
a partir de lo que se conoce como: "clase estatica"
(funciones que contienen sub-funciones relacionadas entre sí); en este caso,
vamos a referirnos a la clase estatica :"Math", la cual contiene dos funciones
de gran relevancia y uso: math.ceil y math.floor, ambas se encargan de redondear
números; sin embargo, math.ceil (techo) se encarga de redondear el número hacia
el inmediatamente siguiente a él;
y math.floor (piso) se encarga de redondear el número hacia el inmediatamente
anterior a él.

pongamos un ejemplo: Math.ceil (3,78); = 4
                     Math.floor (3,78); = 3

ambos Math. funcionan cuando los numeros tienen decimales; de lo contrario, no.

Esos serían nuestros resultados. Probemos:

*/
/*
var x = Math.ceil (3.5);
var y = Math.floor (3.5);

document.write ("math.ceil acerca el 3.5 al sgte numero, así: " + x + ". y math.floor acerca al 3.5 al anterior numero, así: " + y + ".");

/*
Otra función interesante de math. sería: math.random ();
lo que hace es devolver un número entre 0 y 1 de forma completamente
aleatoria cada vez que se ejecute (pero nunca es 0 y nunca es 1)

ejemplos: Math.random (); // 0.5313325
          Math.random (); // 0.2432345
          Math.random (); // 0.6764221

Ahora bien, si queremos que la funcion Math.random nos arroje un resultado
aleatorio entre dos numeros enteros (maximo, minimo) seleccionados por
el mismo usuario, cómo sería? Por ejemplo, entre 90 y 40. Naturalmente
la funcion Math.random sólo arroja resultados aleatorios entre 0 y 1
(y con muchos decimales entre ellos); sin embargo, hay una formula especial que
nos arroja resultados entre dos limites de numeros enteros, previamente
seleccionados por el mismo usuario, y sin decimales. La sintacis es así:

 Math.floor (Math.random () * (número max - número min + 1)) + número min;

pongamos la sintaxis en practica con una function que nos arroje el resultado

*/

function aleatorio (max, min)

{
  var resultado; // variables creadas dentro de una function sólo se ejecutan cuando se ejecuta dicha function
  resultado = Math.floor(Math.random() * (max - min + 1)) + min;
  return resultado;
}

var num_seleccionado = aleatorio (50, 10);
document.write("mi numero aleatorio entre " + max + " y " + min + " fue " + num_seleccionado);
document.write(num_seleccionado);
