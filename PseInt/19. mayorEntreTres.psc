Algoritmo mayorEntreTres
	Escribir "Pase tres (3) números, nuestra tarea será saber el mayor de ellos."
	
	Escribir "Num 1: ";
	Leer num1;
	
	Escribir "Num 2: ";
	Leer num2;
	
	Escribir "Num 3: ";
	Leer num3;
	
	Si num1 < num2 Entonces
		Si num3 > num2  Entonces
			Escribir "El numero mayor es: ", num3;
		SiNo
			Escribir "El numero mayor es: ", num2;
		Fin Si
	SiNo
		Si num3 > num1 Entonces
			Escribir "El numero mayor es: ", num3;
		SiNo
			Escribir "El numero mayor es: ", num1;
		Fin Si
	Fin Si
FinAlgoritmo
