'use strict';

// tipos de ventanas emergentes en JS (sus funciones)

/* Alertas dentro del navegador, es el tipo de pop-up más sencillo: no tiene botón de confirmación. 
Su única intención es informar sobre algo. Veamos:
*/

alert("Mensaje de Alerta"); //función "alert"

// ------------------ // -------------------------------//-----

/* Ventanas de confirmación, mensaje de alerta donde el usuario puede "aceptar" o "cancelar" cierta condición o solicitud parcial 
que le esté planteando la página. A partir de la decisión que tome el usuario, 
la página decidirá qué acción es la correspondiente según la decisión que tomó, de "cancelar" o "aceptar", el usuario en cuestión.
Generalmente, nosotros como desarrolladores, establecemos a partir de sentencias de control "if/else" y, a modo global,
una lógica de programación, qué hacer según una opción A (aceptar) seleccionada o una opción B (cancelar) seleccionada. Veamos:
*/

var resultado = confirm("Quieres seguir navegando en la página?"); // función "confirm"
alert(resultado); /* En un nuevo pop-up del tipo "alert" hemos decidido que se muestre lo almacenado por la variable "resultado" 
(y, como ya se imagina, se reflejaría un nuevo pop-up del tipo "alert" poniendo en evidencia el valor guardado por "resultado").
Lo que se verá en esta nueva ventana emergente es la salida proporcionada por el usuario, y será una salida de tipo booleano.
(que es lo que se almacenó inicialmente en la variable "resultado" porque así lo decidimos al asignarle la función "confirm")
Entonces, si la elección del usuario fue "aceptar", el valor de tipo booleano será "true". 
Distinto a, por ejemplo, si la elección del usuario fue "cancelar", el valor de tipo booleano será "false". 
Todas estas salidas, como ya lo dijimos, quedarían almacenadas en la variable "resultado",
y ahora sólo las estariamos imprimiendo por pantalla, mediante un pop-up, emitido por la función "alert".

------------------//-------------------------------------//----

/* Ventana de ingreso de datos: es el tipo de pop-up que le pide directamente, por teclado, la entrada al usuario. 
Por lo general esta función se asiste de una variable, dicha variable es la que almacena la entrada insertada por el usuario en cuestión. 
La entrada metida por el usuario puede ser cualquiera; sin embargo, esta función puede recibir dos parametros (de tipo string):
1. La pregunta o solicitud que se le hace al usuario, y 2. una respuesta por defecto que el usuario pueda dar a esa eventual solicitud.

Se le asigna una variable a la función "prompt", debido a que la idea es poder capturar estos datos que el usuario ha escrito y
luego procesarlos de algún modo (hay que almacenar la respuesta en una variable). Veamos:
*/

var respuesta = prompt ("Inserte su nombre", "Deseo reservar mis datos personales, Gracias.");
alert("Has dicho que: " + respuesta);



