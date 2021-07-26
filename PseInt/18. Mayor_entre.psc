Algoritmo Mayor_entredos
	Escribir "Hola, nuestro Algoritmo pretende saber el mayor entre dos numeros pasados por ti";
	Escribir "Inserta un primer numero.";
	Leer a;
	
	Escribir "Ahora, inserta un segundo numero";
	Leer b;
	
	Si a > b Entonces
		Escribir "El numero mayor es: ", a;
	SiNo
		Si a < b Entonces
			Escribir "El numero mayor es: ", b;
		SiNo
			Escribir "Ambos numeros son iguales.";
		Fin Si
	Fin Si
FinAlgoritmo
