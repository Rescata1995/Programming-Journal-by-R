Algoritmo Si_Entonces
	Escribir "Inserte n�mero para la variable A";
	Leer A;
	Escribir "Ahora, inserte n�mero para la variable B";
	Leer B;
	
	Si A > B Entonces
		Escribir "Esta expresi�n l�gica es verdadera.";
	SiNo
		Escribir "Esta expresi�n l�gica es falsa.";
	Fin Si
FinAlgoritmo

// Recuerdese bien que una expresi�n l�gica siempre est�
// acompa�ada de alg�n operador relacional
// Por medio del operador relacional se puede saber 
// si una expresi�n l�gica escrita es verdadera o falsa
// al evaluarse la validez l�gica de la expresi�n escrita
// a partir de un criterio del operador relacional; 

// Pues bien, seg�n el resultado l�gico que se arroje,
// "verdadero" o "falso", podr�amos hacer que un programa 
// haga algo al respecto, ya sea para el caso en que 
// la expresi�n l�gica sea "verdadera" o sea "falsa";
// he aqu� donde se ve la importancia de la herramienta
// "Si-Entonces"; pues, con ella, es podr�amos decirle
// a nuestro computador, por ejemplo, que corra o ejecute 
// una acci�n seg�n un resultado l�gico dado. Veamos esto.