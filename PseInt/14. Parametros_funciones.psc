Funcion sumarNumeros (num1, num2) // (lo que va entre parentesis se llama: Argumentos)
	a <- num1 + num2;
	Escribir "El resultado de la suma es: ", a; 
Fin Funcion

Algoritmo Parametros_funciones
	sumarNumeros(56, 243);
FinAlgoritmo

// Los argumentos son variables que se les pasa a una función en su declaración; 
// esta última las recibe para hacer un conjunto de operaciones con ellas.
// Dichas "operaciones", o procesos, ya están descritos previamente dentro del 
// dominio de la función misma (justo después de que fue declarada).

// Ahora, a esa función al ser llamada dentro del "Algoritmo", se le pasa unos
// valores que pasarían a tomar el rol de las variables que fueron declaradas
// como argumentos (esos valores se pasan dentro de los parentesis de la función; que,
// repetimos, debe ser llamada, la función, dentro del Algoritmo para que se ejecute).
// Y se va a ejecutar la función operando los valores pasados, ahora, como argumentos.

// En concreto, el proceso que se busca es más o menos el siguiente;

// Hay una función declarada, que fue declarada no sola; sino, con Argumentos 
// (que suelen ser variables), tal que así: Funcion nombre_función ( Argumentos ),
// ... tal como lo estamos haciendo en nuestro ejercicio actual.

// Ejercicio = Funcion sumarNumeros ( num1, num2 )
			// a <- num1 + num2;	
// Estamos definiendo una función que ejecute la tarea de "sumar 2 números".

// Lo realmente interesante de la función es que nos hace la tarea designada de 
// una manera más eficiente en caso que deseamos cambiar, toda vez que queramos, sus
// parametros o argumentos (es decir, los valores que son asignados a las variables
// al ser llamada la función dentro del "Algoritmo"); en este caso, toda vez que
// queramos cambiar, los 2 números en cuestión de la suma (sin necesidad de entorpecer 
// el dominio de la función en sí misma; de hecho, sin cambiar nada dentro de ella).
// Es decir, sólo se cambiarían los valores pasados a la función, como parametros,
// al ser la función llamada dentro del "Algoritmo".

// En efecto, a la función con argumentos, al ser llamada dentro de mi "Algoritmo", 
// se le pasaría unos valores (para ser operados con ella). Luego tenemos que,
// a esos valores pasados, serían los almacenados como parametros o argumentos
// dentro de las variables...y son los que se operarán y ejecutarán con la función.