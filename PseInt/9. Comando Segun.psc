Algoritmo Comando_Segun
	Escribir "Inserte el número correspondiente al día de la semana. Gracias.";
	
	Leer  num;
	Segun num Hacer
		1:
			Escribir "El día de la semana es Lunes.";
		2:
			Escribir "El día de la semana es Martes.";
		3:
			Escribir "El día de la semana es Miercoles.";
		4:
			Escribir "El día de la semana es Jueves.";
		5:
			Escribir "El día de la semana es Viernes";
		De Otro Modo:
			Escribir "Estamos ante un fin de semana muy probablemente.";
	Fin Segun
FinAlgoritmo

// "Segun" como comando nos permite ejecutar un número
// de acciones a partir del valor que tenga una variable;
// es decir, "segun" evalua una variable, y dependiendo del
// valor que ésta adquiera, podríamos ejecutar una acción
// en particular de un número de acciones posibles 
// (las que deseemos considerar); esas posibles acciones que se 
// puedan dar tienen su origen en la validez de las "opciones".

// Si una "opción" se corresponde con el valor de la variable
// analizada; entonces, 
// se ejecutará lo que sea que haya sido definido dentro del
// dominio de la opción correspondida en cuestión.

// pd. Esto parece un condicional de if/else pero anidado.

// Ahora, en caso que ningún valor de la variable dada
// corresponda con alguna de las tantas "opciones" disponibles,
// dentro de "Segun"; entonces, 
// se correrá lo que ejecute el mecanismo "De otro modo". 