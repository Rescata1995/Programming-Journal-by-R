Algoritmo Si_Entonces
	Escribir "Inserte número para la variable A";
	Leer A;
	Escribir "Ahora, inserte número para la variable B";
	Leer B;
	
	Si A > B Entonces
		Escribir "Esta expresión lógica es verdadera.";
	SiNo
		Escribir "Esta expresión lógica es falsa.";
	Fin Si
FinAlgoritmo

// Recuerdese bien que una expresión lógica siempre está
// acompañada de algún operador relacional
// Por medio del operador relacional se puede saber 
// si una expresión lógica escrita es verdadera o falsa
// al evaluarse la validez lógica de la expresión escrita
// a partir de un criterio del operador relacional; 

// Pues bien, según el resultado lógico que se arroje,
// "verdadero" o "falso", podríamos hacer que un programa 
// haga algo al respecto, ya sea para el caso en que 
// la expresión lógica sea "verdadera" o sea "falsa";
// he aquí donde se ve la importancia de la herramienta
// "Si-Entonces"; pues, con ella, es podríamos decirle
// a nuestro computador, por ejemplo, que corra o ejecute 
// una acción según un resultado lógico dado. Veamos esto.