Algoritmo Arreglos
	
	tamaño <- 3;
	Dimension nums[tamaño];
	
	nums[1] <- 100;
	nums[2] <- 200;
	nums[3] <- 300;
	
	Escribir nums[1];
	
	Escribir "El contenido del Arreglo es: ", nums[1], nums[2], nums[3];
FinAlgoritmo

// Un arreglo o, en PSeInt, una Dimensión: es una estructura de datos
// homogenea. Qué quiere decir con "homogenea"? Que los datos contenidos por 
// la estructura tienen que ser del mismo tipo de dato. 
// Digamos, por ejemplo, si yo decido almacenar dentro de una dimensión o 
// arreglo un dato de tipo entero; entonces, todos los demás datos restantes
// tienen que ser de tipo entero también.

// Adicionalmente, estas estructuras o dimensiones nos van a permitir 
// almacenar un determinado número de datos bajo un mismo identificador;
// es decir, todos los datos del arreglo se van a identificar con un mismo
// nombre: es como guardar varios datos bajo el nombre de una misma variable.

// Al igual, nosotros vamos a decidir a priori la cantidad de datos 
// que queremos almacenar dentro de la dimensión o Arreglo en cuestión.

// Ahora, como estamos "guardando varios datos bajo una misma variable",
// habría que tener una forma particular de poder acceder (o bien, guardar) 
// a cada uno de esos datos.

// La palabra reservada para crear un Arreglo en PSeInt es "Dimension";
// inmediatamente después, se le debe pasar el nombre que le queramos 
// asignar a nuestra dimensión en cuestión (su identificador); en este caso,
// le hemos pasado el nombre de "nums"; ahora, viene una novedad con relación
// a las variables, luego de pasarle un nombre a nuestro arreglo, se deben
// pasar dos corchetes tal que así: [],... ahí, dentro de los corchetes,
// es donde vamos a definir el tamaño de nuestra dimensión o Array;
// es decir, la cantidad numérica de datos que puede recibir: puede
// pasarle directamente un número o una variable que conserve dicho número.

// Ahora, una vez que tenemos nuestro arreglo o Dimensión declarada,...
// para que yo pueda agregar datos a dicha dimensión, debo llamar a su 
// identificador o su nombre; en este caso, "nums[]" y, por ejemplo, 
// si deseo acceder a la primera posición, para asignarle un valor, sería así:
// nums[1] <- (1er valor a asignar). Tal como lo hicimos en el ejercicio.
// El "1" que está dentro de los corchetes hace ref a la 1ra posición de 
// nuestro Arreglo.

// Lo que hemos hecho, hasta ahora, es solamente definir el valor de la 1ra 
// posición de nuestro Arreglo "nums"; ese valor fue: 1. Es decir, 
// "nums[1] <- 100;". Dejamos en evidencia esto con el comando "Escribir".

// Bajo esta misma dinámica se pueden definir las demás posiciones 
// hasta el límite de la posición 3 (donde finaliza nuestro Arreglo).

// Hemos accedido a la posición 1 de nuestro arreglo "nums". Luego, 
// hemos accedido a los restantes.

// De interés: Generalmente los Arreglos son definidos por medio de Bucles de
// tipo "for"; esto, para hacer todo el proceso de asignación de datos en uno.

