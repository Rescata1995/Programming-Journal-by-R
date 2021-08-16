Funcion resultado <- sumarNumerosConRetorno ( num3, num4 )
	resultado <- num3 + num4;
Fin Funcion

Funcion sumarNumeros (num1, num2) // (lo que va entre parentesis se llama: Argumentos)
	a <- num1 + num2;
	Escribir "El resultado de la suma es: ", a; 
Fin Funcion

Algoritmo Retorno_valor
	val <- sumarNumerosConRetorno ( 20, 20 ); 
	// manipulaci�n de variable "resultado", por medio de la nueva variable "val"
	// (quien toc� declarar dentro del Algoritmo para que asuma su rol
	// -ya que no se puede importar la variable de una funci�n en otra),
	// ... al ser llamada la funci�n sumarNumerosConRetorno.
	
	Escribir "El resultado que devuelve la funci�n es ", val;
	// Reflejo del valor que me arroja la funci�n por medio de "val".
	
FinAlgoritmo

// Para explicar el elemento de la funci�n "variable_de_retorno", 
// vamos a guiarnos del ejercicio anterior donde hab�amos creado una 
// funci�n con el nombre de "sumarNumeros". En este caso, haremos la misma funci�n, 
// la de sumar dos n�meros, pero ahora empleando una "variable_de_retorno".

// Desde luego, �Qu� es una variable de retorno? R/ 
// Es lo que queremos que nos devuelva, nos arroje como resultado, una funci�n.
// El resultado de la tarea o proceso para la cual la funci�n fue dise�ada.
// Ese resultado o valor arrojado se encuentra almacenado dentro de una variable; 
// variable que, entre otras cosas, tendremos la facultad de manipular dentro de 
// un "Algoritmo" (al ser llamada dicha funci�n dentro del Algoritmo en cuesti�n).

// Ahora, para poder manipular y reflejar el resultado que devuelve una funci�n
// dentro del Algoritmo; es decir, poder mostrar lo que arroja la variable "resultado" 
// a la hora de llamar a la funci�n dentro del Algoritmo en cuesti�n; debemos ac�, 
// tambi�n, pasarle una variable nueva a la funci�n que ha sido llamada; 
// y que (o para que), justamente, haga el rol de "resultado" (variable_de_retorno)
// que est� almacenando el valor final que arroja la funci�n; lo dicho, ese valor 
// final que me arroja la funci�n (por medio de "resultado"), podr�a verse dentro del
// algoritmo al pasarle una nueva variable que asuma el mismo rol de "resultado".

// Luego, ahora s�, si queremos reflejar el valor que me arroja la nueva variable 
// (val), creada dentro del Algoritmo, y que est� asumiendo el rol de la variable 
// de retorno de la funci�n "sumarNumeros"; es decir, el rol de "resultado",...
// Pues, sencillamente debemos mostrarla dentro del Algoritmo; pues, es ah� el lugar
// donde fue creada (no en otro ni en alguna otra funci�n).

// Ahora, ya replicando el ejercicio anterior con el agregado de tener ahora 
// una "variable_de_retorno"; en nuestro caso, esa "variable_de_retorno" es
// "resultado" (observe la definici�n de nuestra primera funci�n), veamos c�mo se ve.

// En conclusi�n...
// As� como se le asign� a la funci�n sumarNumerosConRetorno la variable "resultado";
// como no se puede importar una variable en otra funci�n (en Algoritmo); emtonces,
// toca que al ser llamada la funci�n sumarNumerosConRetorno en Algoritmo, se le asigne
// una nueva variable que asuma el rol de "resultado"; en nuestro caso fue: "val".