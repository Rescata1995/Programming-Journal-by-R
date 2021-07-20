Funcion sumarNumeros (num1, num2) // (lo que va entre parentesis se llama: Argumentos)
	a <- num1 + num2;
	Escribir "El resultado de la suma es: ", a; 
Fin Funcion

Algoritmo Parametros_funciones
	sumarNumeros(56, 243);
FinAlgoritmo

// Los argumentos son variables que se les pasa a una funci�n en su declaraci�n; 
// esta �ltima las recibe para hacer un conjunto de operaciones con ellas.
// Dichas "operaciones", o procesos, ya est�n descritos previamente dentro del 
// dominio de la funci�n misma (justo despu�s de que fue declarada).

// Ahora, a esa funci�n al ser llamada dentro del "Algoritmo", se le pasa unos
// valores que pasar�an a tomar el rol de las variables que fueron declaradas
// como argumentos (esos valores se pasan dentro de los parentesis de la funci�n; que,
// repetimos, debe ser llamada, la funci�n, dentro del Algoritmo para que se ejecute).
// Y se va a ejecutar la funci�n operando los valores pasados, ahora, como argumentos.

// En concreto, el proceso que se busca es m�s o menos el siguiente;

// Hay una funci�n declarada, que fue declarada no sola; sino, con Argumentos 
// (que suelen ser variables), tal que as�: Funcion nombre_funci�n ( Argumentos ),
// ... tal como lo estamos haciendo en nuestro ejercicio actual.

// Ejercicio = Funcion sumarNumeros ( num1, num2 )
			// a <- num1 + num2;	
// Estamos definiendo una funci�n que ejecute la tarea de "sumar 2 n�meros".

// Lo realmente interesante de la funci�n es que nos hace la tarea designada de 
// una manera m�s eficiente en caso que deseamos cambiar, toda vez que queramos, sus
// parametros o argumentos (es decir, los valores que son asignados a las variables
// al ser llamada la funci�n dentro del "Algoritmo"); en este caso, toda vez que
// queramos cambiar, los 2 n�meros en cuesti�n de la suma (sin necesidad de entorpecer 
// el dominio de la funci�n en s� misma; de hecho, sin cambiar nada dentro de ella).
// Es decir, s�lo se cambiar�an los valores pasados a la funci�n, como parametros,
// al ser la funci�n llamada dentro del "Algoritmo".

// En efecto, a la funci�n con argumentos, al ser llamada dentro de mi "Algoritmo", 
// se le pasar�a unos valores (para ser operados con ella). Luego tenemos que,
// a esos valores pasados, ser�an los almacenados como parametros o argumentos
// dentro de las variables...y son los que se operar�n y ejecutar�n con la funci�n.