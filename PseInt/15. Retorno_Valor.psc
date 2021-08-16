Funcion resultado <- sumarNumerosConRetorno ( num3, num4 )
	resultado <- num3 + num4;
Fin Funcion

Funcion sumarNumeros (num1, num2) // (lo que va entre parentesis se llama: Argumentos)
	a <- num1 + num2;
	Escribir "El resultado de la suma es: ", a; 
Fin Funcion

Algoritmo Retorno_valor
	val <- sumarNumerosConRetorno ( 20, 20 ); 
	// manipulación de variable "resultado", por medio de la nueva variable "val"
	// (quien tocó declarar dentro del Algoritmo para que asuma su rol
	// -ya que no se puede importar la variable de una función en otra),
	// ... al ser llamada la función sumarNumerosConRetorno.
	
	Escribir "El resultado que devuelve la función es ", val;
	// Reflejo del valor que me arroja la función por medio de "val".
	
FinAlgoritmo

// Para explicar el elemento de la función "variable_de_retorno", 
// vamos a guiarnos del ejercicio anterior donde habíamos creado una 
// función con el nombre de "sumarNumeros". En este caso, haremos la misma función, 
// la de sumar dos números, pero ahora empleando una "variable_de_retorno".

// Desde luego, ¿Qué es una variable de retorno? R/ 
// Es lo que queremos que nos devuelva, nos arroje como resultado, una función.
// El resultado de la tarea o proceso para la cual la función fue diseñada.
// Ese resultado o valor arrojado se encuentra almacenado dentro de una variable; 
// variable que, entre otras cosas, tendremos la facultad de manipular dentro de 
// un "Algoritmo" (al ser llamada dicha función dentro del Algoritmo en cuestión).

// Ahora, para poder manipular y reflejar el resultado que devuelve una función
// dentro del Algoritmo; es decir, poder mostrar lo que arroja la variable "resultado" 
// a la hora de llamar a la función dentro del Algoritmo en cuestión; debemos acá, 
// también, pasarle una variable nueva a la función que ha sido llamada; 
// y que (o para que), justamente, haga el rol de "resultado" (variable_de_retorno)
// que está almacenando el valor final que arroja la función; lo dicho, ese valor 
// final que me arroja la función (por medio de "resultado"), podría verse dentro del
// algoritmo al pasarle una nueva variable que asuma el mismo rol de "resultado".

// Luego, ahora sí, si queremos reflejar el valor que me arroja la nueva variable 
// (val), creada dentro del Algoritmo, y que está asumiendo el rol de la variable 
// de retorno de la función "sumarNumeros"; es decir, el rol de "resultado",...
// Pues, sencillamente debemos mostrarla dentro del Algoritmo; pues, es ahí el lugar
// donde fue creada (no en otro ni en alguna otra función).

// Ahora, ya replicando el ejercicio anterior con el agregado de tener ahora 
// una "variable_de_retorno"; en nuestro caso, esa "variable_de_retorno" es
// "resultado" (observe la definición de nuestra primera función), veamos cómo se ve.

// En conclusión...
// Así como se le asignó a la función sumarNumerosConRetorno la variable "resultado";
// como no se puede importar una variable en otra función (en Algoritmo); emtonces,
// toca que al ser llamada la función sumarNumerosConRetorno en Algoritmo, se le asigne
// una nueva variable que asuma el rol de "resultado"; en nuestro caso fue: "val".