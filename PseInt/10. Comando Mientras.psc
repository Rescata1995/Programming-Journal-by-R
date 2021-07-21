Algoritmo Mientra_s
	Mientras num < 5 Hacer
		Escribir "Hola Mundo"
		
		num <- num + 1;
	Fin Mientras
FinAlgoritmo

// Este es nuestro primer comando de tipo "repetitivo", son tres: 
// "Mientras", "Repetir", "Para"; es decir, estos comandos lo que 
// nos van a permitir hacer es: repetir un código finito 
// (y ahorrarnos código de paso); bajo, según, unas condiciones 
// estipuladas que logren evaluar la validez de una expresión lógica.

// El incrementador desde 0 es necesario para hacer que el bucle 
// realmente itere (asegurarnos de eso) y ejecute una acción repetidamente; 
// pero, también, servirá de condicionante para limitar al mismo bucle 
// en cuestión; pues, el incrementador al ir aumentando llegará 
// eventualmente a una cifra tal en la que se desvalida completamente 
// la expresión lógica expuesta; es decir, deja de ser verdadera, 
// y si no es verdadera, el bucle se detiene y finaliza el algoritmo. 
	
// Dicho lo anterior, para que el incrementador tenga la facultad 
// de negar la validez de una expresión lógica, el incrementador 
// debe ser parte también, justamente, de esa expresión lógica expuesta.

// Ahora, si no se intenta limitar de alguna manera la validez 
// de la expresión lógica expuesta, la acción se ejecutará indefinidamente 
// creando así un un bucle infinito; es decir, la ejecución del 
// algoritmo nunca acabaría. Es necesario, entonces, hacer uso de 
// incrementadores y que sean éstos los que eventualmente detengan 
// la ejecución del bucle; esto, al conducir a una expresión lógica 
// evaluada a que deje de ser, en algún momento de cara al futuro, 
// una expresión lógica verdadera.

// En resumen, mientras la expresión lógica sea verdadera, 
// que se ejecute interativamente una misma acción; 
// apenas deje de ser verdadera, que deje de ejecutarse la acción 
// en cuestión y, por extensión, el algoritmo que la ejecuta.

// En pseint no es necesario inicializar en 0 directamente al incrementador, 
// se puede hacer de forma indirecta dentro del propio dominio de los 
// comandos de tipo "repetitivos"; de hecho, a esto se le conoce como: 
// Estructuras ciclicas indeterminadas. Los ciclos "mientras" y "repita" son 
// de tipo indeterminadas; pues, son aquellas estructuras donde el número
// de ejecuciones (iteraciones) no se conoce con exactitud y depende de la 
// cantidad de las ejecuciones de una condición o variable dentro del ciclo.

// Por otro lado, están las estructuras ciclicas determinadas (para): 
// son aquellas estructuras donde el número de ejecuciones (iteraciones)
// se conoce antes de ejecutar el ciclo.