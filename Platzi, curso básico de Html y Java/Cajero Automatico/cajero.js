document.body.style.backgroundColor = "lightblue";

var imagenes = [];
imagenes["100"] = "100.png"; //
imagenes["50"] = "50.png";
imagenes["20"] = "20.png";
imagenes["10"] = "10.png";
imagenes["5"] = "5.png";
imagenes["1"] = "1.png";


class Billete
{
  constructor (v, c) // v de valor y c de cantidad (estos son los atributos de la clase Billete, sus divisiones; valor y cantidad, respectivamente)
  {
    this.valor = v;
    this.cantidad = c;
    this.imagen = new Image();
    this.imagen.src = imagenes[this.valor];
  }
}

var caja = []; // primera variable Array que lo que hace es decirnos cuanto dinero tiene el cajero automatico
var entregado = []; // segunda variable Array que lo que hace es decirnos cuanto dinero ha entregado al pedido de dinero del user
caja.push ( new Billete (100,5) );
caja.push ( new Billete (50,3) ); // push le agrega nuevos objetos a nuestro Array creado "caja".
caja.push ( new Billete (20,2) ); // el Array se crea para definir los atributos de nuestro interés de la clase Billete
caja.push ( new Billete (10,2) ); // (estos atributos son alterables; es decir, en este caso, "v" & "c".
caja.push ( new Billete (5,10) );
caja.push ( new Billete (1,10) );


var dinero = 0; // en principio el dinero que desea el user
var div = 0;
var papeles = 0;

var resultado = document.getElementById("resultado"); // Escribiremos textos de esta forma, llamando una etiqueta <p> desde HTML.


var boton = document.getElementById("Extraer"); // llamamos a la etiqueta type button "Extraer" de HTML para darle interactividad en JS...;
boton.addEventListener("click", entregarDinero); /* ... con el evento "click" y le crearemos, al lado, una function (entregarDinero) para
asignarle al programa algo que queremos que haga al hacer un "click" sobre el boton creado (etiqueta type button "Extraer" llamada en JS) */

function entregarDinero()

{
  var texto = document.getElementById("dinero"); /* como queremos darle interactividad también a la acción de "solicitar el dinero manualmente en la caja de texto"
                                                 llamamos a la etiqueta type number "dinero" de HTML y en JS la definimos con la variable "texto";
                                                 entonces, dinero, que es la variable definida como "el dinero que desea solicitar el user al cajero"
                                                 se igualará a texto.value. Dato: en este caso la etiqueta type del formulario "caja de texto"
                                                 no es del tipo "text" realmente, sino del tipo "number"; por lo que, no es necesario convertir las
                                                 cadenas de texto (strings) en numeros enteros con la propiedad parseInt; pues, ya la caja de texto estaría
                                                 leyendo que el texto son realmente números y no "strings" por su tipo (type= "number"). */
  dinero = texto.value;


  for (var b_ of caja) /* esto lo que hará es agarrarme todos los elementos que tengo en el Array caja
                        y pasarlos, uno por uno, en cada uno de los ciclos for, de forma general con el
                        nombre "b_"; es decir, resume todos elementos del Array "caja" en "b_" y los hace
                        pasar uno por uno, en el ciclo for. ¿Ahora, qué queremos que itere el ciclo For? */
  {

    if(dinero > 0) // si el dinero deseado por el usuario es mayor que 0...

    {
      div = Math.floor(dinero/b_.valor); /* haz una división entre el dinero que desea el usuario sobre el atributo "v" ó valor de cada objeto del Array caja,
                                          los tres que se encuentran resumidos en la variable "b_" creada (como ya dijimos), queda así: dinero/b_.valor; pero,
                                          además, redondee el resultado al número entero más inferior (con Math.floor)  */
                                          console.log(div); /* para probar que realmente el algoritmo y, propiamente lo que queremos que haga
                                          la función entregarDinero (div =...), esté corriendo bien; que me divida el valor de "dinero" sobre
                                          el atributo (.valor) de cada objeto del Array caja (que están resumidos en la variable b_). */

      if (div > b_.cantidad)
        { /* si la división anterior es mayor que la cantidad de dinero de cada nominación, quiere decir que la caja realmente no tiene
             el dinero que está solicitando el usuario; por lo que la caja sólo le puede dar lo que tiene; es decir, b._cantidad, entonces... */
        papeles = b_.cantidad;
        }
        else
        { // de lo contrario, si lo solicitado por el usuario es menor que lo que tiene la caja, entonces, sí se le puede dar de la caja lo que quiere el usuario.
          papeles = div;
        }

        entregado.push ( new Billete(b_.valor, papeles) );
        dinero = dinero - (b_.valor * papeles) /* cada vez que se le dé dinero al user, a partir de cada nominación de billete,
                                                se debe restar sobre ese dinero el ya entregado de cada nominación de billete
                                                 dado (y que itere así hasta que dinero equivalga a 0 y el ciclo se detenga) */
    }

  }

  if (dinero > 0) /* si luego de hacer todas las iteraciones y, ya habiendo entregado todo el dinero del cajero, todavía queda "dinero" pendiente por pagar
                (dinero > 0) es porque el cajero  no tiene todo el dinero que el user le pidio; entonces, cuando sea así, que el software del cajero lo diga */
  {
    resultado.innerHTML= "Soy un ATM pobre, no tengo ese tope de dinero. Te pido que me entiendas un poquito más!"; /* llamamos a la variable "resultado" para escribir
                                                                                                                      un texto sin necesidad de usar "document.write" */
  }
  else // de lo contrario...
  {
    alert("Sí pude complacerte!, espero vuelvas pronto.");
    console.log(entregado);

    for (var e of entregado)
    {
      if (e.cantidad > 0) { /* para que no solo se muestre el entregado total sobre cada nominación de billete,
                            sino que solo me muestre las nominaciones que realmente sí entregaron billetes (para que no salga, por ej., 0 billetes de $50) */
        resultado.innerHTML= resultado.innerHTML + e.cantidad + " billetes de $" + e.valor + "<br />"; // texto asignado con la variable llamada "resultado".
        resultado.innerHTML += "<img src=" + e.imagen.src + " />"; // forma de mostrar las imagenes importadas del Array "Imagenes" con innerHTML.
        resultado.innerHTML += "<hr />"; // salto de linea con raya
      }
    }
  }

/* el texto no se escribió con document.write debido a que tiene la falencia de escribir sobre encima de la codificación antes estructurada, eliminandola así */
}
