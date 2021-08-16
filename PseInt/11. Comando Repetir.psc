Algoritmo Repetir_
	Repetir
		Escribir "Buenos d�as, cu�l es su edad?";
		Leer edad;
	Hasta Que edad > 0;
	
	Escribir "Muchas gracias, la edad registrada fue: ", edad; 
FinAlgoritmo

// En un lenguaje de programaci�n se conoce como el bucle "Do While"
// Consiste en repetir una serie de acciones hasta que se cumpla la
// la expresi�n l�gica descrita (la que le pasemos); es decir, 
// para que el bucle CONTINUE ejecutando una secuencia de acciones
// debe cumplirse la expresi�n l�gica descrita, similar al "While"; 
// sin embargo, justamente se diferencia de "while" en el sentido que,
// "Do while" (repetir) siempre, en cualquiera de los dos casos posibles,
// sea verdadera o falsa nuestra expresi�n l�gica, nos ejecutar� al menos, 
// una vez, la secuencia de acciones establecidas (y es de hecho lo que 
// primero se ejecuta; contrario a "while", donde se ejecuta primero 
// la expresi�n l�gica y, posteriormente, se evalua la validez de la misma).

// Esto es as� por el orden en que son llamados tanto la secuencia de acciones
// como la expresi�n l�gica.

// En "Do While":

// 1. secuencia de acciones.
// 2. expresi�n l�gica.

// Por contrario, en "While":

// 1. expresi�n l�gica.
// 2. secuencia de acciones.
