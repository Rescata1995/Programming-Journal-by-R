Algoritmo Arreglos
	
	tama�o <- 3;
	Dimension nums[tama�o];
	
	nums[1] <- 100;
	nums[2] <- 200;
	nums[3] <- 300;
	
	Escribir nums[1];
	
	Escribir "El contenido del Arreglo es: ", nums[1], nums[2], nums[3];
FinAlgoritmo

// Un arreglo o, en PSeInt, una Dimensi�n: es una estructura de datos
// homogenea. Qu� quiere decir con "homogenea"? Que los datos contenidos por 
// la estructura tienen que ser del mismo tipo de dato. 
// Digamos, por ejemplo, si yo decido almacenar dentro de una dimensi�n o 
// arreglo un dato de tipo entero; entonces, todos los dem�s datos restantes
// tienen que ser de tipo entero tambi�n.

// Adicionalmente, estas estructuras o dimensiones nos van a permitir 
// almacenar un determinado n�mero de datos bajo un mismo identificador;
// es decir, todos los datos del arreglo se van a identificar con un mismo
// nombre: es como guardar varios datos bajo el nombre de una misma variable.

// Al igual, nosotros vamos a decidir a priori la cantidad de datos 
// que queremos almacenar dentro de la dimensi�n o Arreglo en cuesti�n.

// Ahora, como estamos "guardando varios datos bajo una misma variable",
// habr�a que tener una forma particular de poder acceder (o bien, guardar) 
// a cada uno de esos datos.

// La palabra reservada para crear un Arreglo en PSeInt es "Dimension";
// inmediatamente despu�s, se le debe pasar el nombre que le queramos 
// asignar a nuestra dimensi�n en cuesti�n (su identificador); en este caso,
// le hemos pasado el nombre de "nums"; ahora, viene una novedad con relaci�n
// a las variables, luego de pasarle un nombre a nuestro arreglo, se deben
// pasar dos corchetes tal que as�: [],... ah�, dentro de los corchetes,
// es donde vamos a definir el tama�o de nuestra dimensi�n o Array;
// es decir, la cantidad num�rica de datos que puede recibir: puede
// pasarle directamente un n�mero o una variable que conserve dicho n�mero.

// Ahora, una vez que tenemos nuestro arreglo o Dimensi�n declarada,...
// para que yo pueda agregar datos a dicha dimensi�n, debo llamar a su 
// identificador o su nombre; en este caso, "nums[]" y, por ejemplo, 
// si deseo acceder a la primera posici�n, para asignarle un valor, ser�a as�:
// nums[1] <- (1er valor a asignar). Tal como lo hicimos en el ejercicio.
// El "1" que est� dentro de los corchetes hace ref a la 1ra posici�n de 
// nuestro Arreglo.

// Lo que hemos hecho, hasta ahora, es solamente definir el valor de la 1ra 
// posici�n de nuestro Arreglo "nums"; ese valor fue: 1. Es decir, 
// "nums[1] <- 100;". Dejamos en evidencia esto con el comando "Escribir".

// Bajo esta misma din�mica se pueden definir las dem�s posiciones 
// hasta el l�mite de la posici�n 3 (donde finaliza nuestro Arreglo).

// Hemos accedido a la posici�n 1 de nuestro arreglo "nums". Luego, 
// hemos accedido a los restantes.

// De inter�s: Generalmente los Arreglos son definidos por medio de Bucles de
// tipo "for"; esto, para hacer todo el proceso de asignaci�n de datos en uno.

