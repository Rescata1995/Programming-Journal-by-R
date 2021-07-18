Algoritmo Comando_para
	Para num <- 1 Hasta 10 Con Paso 1 Hacer
		Escribir "Hola Tototo";
	Fin Para
FinAlgoritmo

// Nuestro último comando de tipo "repetitivo", y también el más usado, es el "For".

// La "variable_numerica" nos ayudará a contar las iteracciones; como su nombre
// lo dice, ahí se declara una variable numérica que, en nuestro caso, decidimos 
// que fuera llamada "num" y le pasamos un valor de "1" en "valor_inicial"; es decir, 
// ese "valor_inicial" es el valor, justamente, que se le pasa a "variable_numerica"...
// conformando así, entonces, lo que se conoce como "incrementador". 
// El "incrementador" sería la declaración de la variable numérica + su inicialización;
// y es, justamente, lo que se incrementa con cada iteracción o paso del bucle.

// Ahora, la palabra reservada "valor_final" sería, entonces, quién limita el conteo
// de las iteracciones del bucle y, en consecuencia, al bucle en sí mismo; es quien
// establece el límite de tipo numérico, o parada final, 
// de las iteracciones del bucle (hasta donde éste se va a ejecutar).
// Nuestro condicionante final.

// En la palabra reservada "paso" se establece los pasos que se darán con cada 
// iteracción pasada; por ejemplo, para que se entienda bien, si usted tiene que 
// "num" es 1 y pone un "paso" de 2; quiere decir que, con cada iteracción, 
// el valor de la variable "num" se incrementará de dos en dos (ese es su "paso").
// Define cuánto se va a incrementar mi "variable_numérica" con cada iteracción dada.

// Entonces, pongamos esto en contexto, si ponemos un "paso" de 1; quiere decir que, 
// con cada iteracción del bucle, "num" se va a incrementar en una unidad (1) 
// hasta llegar a 10 (de uno en uno, así lo definimos en "paso"); 
// es decir, el bucle se va a ejecutar, y en consecuencia su "secuencia_de_acciones",
// contando 1, 2, 3, 4, 5, 6, 7, 8, 9 y 10. Si el conteo empezó desde 1 (num = 1), 
// quiere decir que se ejecuta el bucle 9 veces en total cuando "num" llegue a 10.


