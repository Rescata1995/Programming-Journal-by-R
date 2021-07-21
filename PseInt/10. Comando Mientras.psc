Algoritmo Mientra_s
	Mientras num < 5 Hacer
		Escribir "Hola Mundo"
		
		num <- num + 1;
	Fin Mientras
FinAlgoritmo

// Este es nuestro primer comando de tipo "repetitivo", son tres: 
// "Mientras", "Repetir", "Para"; es decir, estos comandos lo que 
// nos van a permitir hacer es: repetir un c�digo finito 
// (y ahorrarnos c�digo de paso); bajo, seg�n, unas condiciones 
// estipuladas que logren evaluar la validez de una expresi�n l�gica.

// El incrementador desde 0 es necesario para hacer que el bucle 
// realmente itere (asegurarnos de eso) y ejecute una acci�n repetidamente; 
// pero, tambi�n, servir� de condicionante para limitar al mismo bucle 
// en cuesti�n; pues, el incrementador al ir aumentando llegar� 
// eventualmente a una cifra tal en la que se desvalida completamente 
// la expresi�n l�gica expuesta; es decir, deja de ser verdadera, 
// y si no es verdadera, el bucle se detiene y finaliza el algoritmo. 
	
// Dicho lo anterior, para que el incrementador tenga la facultad 
// de negar la validez de una expresi�n l�gica, el incrementador 
// debe ser parte tambi�n, justamente, de esa expresi�n l�gica expuesta.

// Ahora, si no se intenta limitar de alguna manera la validez 
// de la expresi�n l�gica expuesta, la acci�n se ejecutar� indefinidamente 
// creando as� un un bucle infinito; es decir, la ejecuci�n del 
// algoritmo nunca acabar�a. Es necesario, entonces, hacer uso de 
// incrementadores y que sean �stos los que eventualmente detengan 
// la ejecuci�n del bucle; esto, al conducir a una expresi�n l�gica 
// evaluada a que deje de ser, en alg�n momento de cara al futuro, 
// una expresi�n l�gica verdadera.

// En resumen, mientras la expresi�n l�gica sea verdadera, 
// que se ejecute interativamente una misma acci�n; 
// apenas deje de ser verdadera, que deje de ejecutarse la acci�n 
// en cuesti�n y, por extensi�n, el algoritmo que la ejecuta.

// En pseint no es necesario inicializar en 0 directamente al incrementador, 
// se puede hacer de forma indirecta dentro del propio dominio de los 
// comandos de tipo "repetitivos"; de hecho, a esto se le conoce como: 
// Estructuras ciclicas indeterminadas. Los ciclos "mientras" y "repita" son 
// de tipo indeterminadas; pues, son aquellas estructuras donde el n�mero
// de ejecuciones (iteraciones) no se conoce con exactitud y depende de la 
// cantidad de las ejecuciones de una condici�n o variable dentro del ciclo.

// Por otro lado, est�n las estructuras ciclicas determinadas (para): 
// son aquellas estructuras donde el n�mero de ejecuciones (iteraciones)
// se conoce antes de ejecutar el ciclo.