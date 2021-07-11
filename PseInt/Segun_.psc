Algoritmo Comando_Segun
	Escribir "Inserte el n�mero correspondiente al d�a de la semana. Gracias.";
	
	Leer  num;
	Segun num Hacer
		1:
			Escribir "El d�a de la semana es Lunes.";
		2:
			Escribir "El d�a de la semana es Martes.";
		3:
			Escribir "El d�a de la semana es Miercoles.";
		4:
			Escribir "El d�a de la semana es Jueves.";
		5:
			Escribir "El d�a de la semana es Viernes";
		De Otro Modo:
			Escribir "Estamos ante un fin de semana muy probablemente.";
	Fin Segun
FinAlgoritmo

// "Segun" como comando nos permite ejecutar un n�mero
// de acciones a partir del valor que tenga una variable;
// es decir, "segun" evalua una variable, y dependiendo del
// valor que �sta adquiera, podr�amos ejecutar una acci�n
// en particular de un n�mero de acciones posibles 
// (las que deseemos considerar); esas posibles acciones que se 
// puedan dar tienen su origen en la validez de las "opciones".

// Si una "opci�n" se corresponde con el valor de la variable
// analizada; entonces, 
// se ejecutar� lo que sea que haya sido definido dentro del
// dominio de la opci�n correspondida en cuesti�n.

// pd. Esto parece un condicional de if/else pero anidado.

// Ahora, en caso que ning�n valor de la variable dada
// corresponda con alguna de las tantas "opciones" disponibles,
// dentro de "Segun"; entonces, 
// se correr� lo que ejecute el mecanismo "De otro modo". 