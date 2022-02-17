/* Ejemplo de un Query anidado comparandolo con su homologo que no lo es */


/* Un Query */

INSERT INTO books(title, autor_id_foreign, age)
VALUES ('Vuelta al laberinto de la Soledad', 6, 1960);

/* El mismo Query solo que anidado */

INSERT INTO books(title, autor_id_foreign, age)
VALUES ('Vuelta al laberinto de la Soledad', 
		(SELECT author_id 
		 FROM authors
         WHERE name_author = 'Octavio Paz'
         LIMIT 1),
         1960
         );
       
       