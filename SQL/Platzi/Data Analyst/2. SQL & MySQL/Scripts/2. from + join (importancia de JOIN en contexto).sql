SHOW ERRORS;

/* Recuerda esto: 

From + Join es el primer puntapié para darle fundamento práctico a la teoría que esconde el 
concepto Bases de datos relacionales; lo que trata sobre, justamente, las relaciones. 
Relacionar entidades entre sí para extraer información, no datos, para darle un sentido práctico y contextualizado 
al mundo real a tanta codificación, convertir el código y los datos en información útil y diciente. 
Por ejemplo, para que se entienda mejor, no es muy práctico decir que el libro llamado “el laberinto de la soledad” 
pertenece al autor con ID número 4 y lo rentó un cliente con ID número 6, no, es mejor así: 

Fulanito (cliente) en tal día rentó el libro XYZ… Es así como se convierten datos en información.  
La información se crea cruzando las tablas. 
Si tenemos, por ejemplo, que queremos cruzar la tabla de “autores” con la de “libros” 
y tenemos en cuenta que la cardinalidad es 1:M respectivamente 
(porque se sabe que un autor puede escribir cuantos libros quiera, mas un libro puede ser escrito una sola vez 
por un mismo autor o grupo de autores), y que la relación es “escribir” justamente; entonces, 
estaríamos extrayendo información (insights) tipo “El libro ABC fue escrito por el autor XYZ en la fecha 00/11/2222”. 

*/

/* Pues bien, lo pondremos en practica justo ahora... Primero que todo, debe intuir que hay mas libros que autores
   debido a que hay autores que han escrito varios libros (por la cardinalidad existente entre ambas entidades)...
   Probemos esto.
   */

SELECT COUNT(*) AS q_books FROM books;
/* 197 books */

SELECT COUNT(*) AS q_authors FROM authors;
/* 132 books */



/* Intentemos ahora conocer los primeros 5 autores... de momento, nos interesa solo trabajar con ellos */ 

SELECT * FROM authors WHERE author_id > 0 AND author_id <= 5;
/* Esto es lo mismo que decir: SELECT * FROM authors WHERE author_id BETWEEN 1 AND 5 */

/* Ahora, queremos saber exactamente que libros que escribieron estos primeros 5 autores 
   (no importa si un autor escribio mas de un libro, recuerde que esto se puede... 
   Y asi lo establecimos en nuestra cardinalidad) 
   */

SELECT * FROM books WHERE author_id_foreign BETWEEN 1 AND 5;

/* Si se fija, para relacionar los libros escritos con sus autores (al menos con sus ID) nos pudimos valer 
   de las llaves foraneas de los autores que estan dentro de los libros (ojo, no hubo necesidad de extraer nada 
   de la tabla de autores),... pero, que tal si necesitarabamos saber mas informacion de los autores, 
   mas alla de sus ID, sin dejar de relacionarse con los libros?

   En ese caso debieramos hacer uso, de alguna manera, de ambas tablas; pues, son entidades diferentes al fin al cabo... 
   nos toca entonces remitirnos al recurso que nos permite conectar y establecer relaciones entre dos tablas: 
   sus llaves, foraneas y primarias. Las llaves son los unicos datos iguales entre dos tablas que se relacionan 
   y, debido a ello, es nuestra unica manera de conectarlas.
   */
   
/* Lo dicho, si nos interesa saber mas informacion de la entidad "authors", 
   mas alla de la que esta dentro de la propia tabla "books" (mas alla de la llave/id de "authors"); si no, 
   saber si se quiere toda la informacion relacionada a autores, propimente, sin dejar de relacionarse con los libros... 
   tendriamos entonces que unir (join) ambas tablas... 
   
   Si quisieramos saber mas alla del ID del autor, que es algo que podemos ver sin salirse de la tabla de 
   libros, tenemos que unir ambas tablas (hacer un "join") para poder tener acceso total a los datos tanto de 
   "books" como de "authors" y, poder asi, extraer mas informacion posible al tener la posibilidad de relacionar
   la totalidad de los datos de cada tabla (teniendo acceso a mas datos)... Esta es la importancia de JOIN.
   
   Ya no diriamos... "el libro llamado 'Estudio en escarlata' pertenece al autor con ID numero 3", si no, 
   podriamos decir mejor: "el libro llamado 'Estudio en escarlata' fue escrito por el autor 'Arthur Conan Doyle' 
   para el año 1887". Puedes ver, en contexto, en practica, en un enfoque de la vida real... que esto esta mejor?
   Es mas practico, mas explitico, mas parecido a la manera en como nos hacemos entender diariamante. 
   */
	
   /* EMPECEMOS CON LOS JOINS. 
      1. COMANDO JOIN or INNER JOIN */
    
   /* Continuare con el mismo ejercicio antes de introducir JOIN... pero ahora se necesitara de un Join. 
	  Sigo queriendo saber exactamente que libros que escribieron estos primeros 5 autores, 
	  pero quiero saber los nombres de los autores como los titulos de los libros! */
       
       SELECT book_id, title, name_author, author_id
       FROM books
	    INNER JOIN authors ON author_id_foreign = author_id
		WHERE author_id BETWEEN 1 AND 5;
        
   /* Listo !! Ahora si que la informacion puede ser mas amplia y completa (al unir ambas tablas, 2 son mas que 1). */
   
   /* Echemosle un vistazo ahora a la entidad "Operations". */
   
SELECT * FROM operations;  

/* Si bien la tabla esta perfectamente ordenada, la tabla por si sola no se presenta con ningun tipo de conclusion 
   o informacion. La tabla solo tiene un sin numero de datos que, bajo ningun caso, yo podria presentar como informe 
   a las partes interesadas en el proyecto; pues, no tendria ningun sentido para ellos estos datos. */
   
   /* No podriamos decir, por ejemplo, que el libro con ID 12 fue vendido al cliente con ID 34, NO! De hecho, 
      es incluso hasta probable que sus stakeholders no sepan interpretar lo que le dice una tabla de SQL. 
      Entonces, hay que convertir estos datos en informacion y eso, idealmente, se hace uniendo tablas porque
      tendriamos mas acceso a nuestros datos disponibles. Hagamos eso. Unamos la tabla de operaciones con las 
      tablas de libros & clientes para generar insights. 
      
      Entonces, hagamos un Join uniendo las tres tablas: "books", "operations" & "clients" por medio de varios 
      (dos para este caso puntual) INNER JOIN. 
      
      Query general: Nombre del cliente (clients.name_client) con ID 34 al que le fue vendido (operations.type) 
                     el libro, su nombre (books.title), con ID 12. */
      
SELECT book_id, title AS book, type AS operation, operations.updated_at AS date, client_id, name_client AS client
FROM books 
 INNER JOIN operations ON book_id = book_id_foreign
 INNER JOIN clients ON client_id = client_id_foreign
 WHERE book_id = 12 AND client_id = 34;

   /* Si se da cuenta, hemos unido las tres tablas para extraer mas informacion al respecto, para responder a 
       nuestra consulta con nuestro propio lenguaje y hacernos entender, incluso, con gente que no sabe nada de DB.
   
       Viendo nuestro Query se entiende que el libro 'El llano en llamas' con ID 12 fue vendido el dia 18 de Febrero 
       del 2022 a la cliente Maria Teresa Castillo con id 34. */ 
   
   
   /* 2DO EJERCICIO */

   /* Query: Quiero saber quienes son las clientes mujeres a las que se les vendio (operations.type) libros, 
			 traeme sus nombres (clients.name_client) y cuales libros son (books.title). */
             
SELECT name_client AS client_name, title AS book_name, type AS operations
FROM operations 
 INNER JOIN clients ON client_id = client_id_foreign
 INNER JOIN books ON book_id = book_id_foreign
 WHERE gender = 'F' AND type = 'sell';
             
   /* 3ER EJERCICIO, probando INNER JOIN para la union de 4 tablas... */
   
   /* Query:  Traeme todos los libros, sus nombres, que hayan sido vendidos o prestados a clientes varones. 
	          Quiero saber, ademas, quien es el cliente y quien es el autor del libro (vendido o prestado). */
   
SELECT name_client, title AS book, name_author, type AS operation
FROM operations
 INNER JOIN books ON book_id_foreign = book_id
 INNER JOIN clients ON client_id_foreign = client_id
 INNER JOIN authors ON author_id_foreign = author_id
 WHERE gender = 'M' AND type IN ('sell', 'lend');
 
 
   /* Query, Examen. Interprete la siguiente vista y comprenda su posterior salida. */
 
SELECT author_id, name_author, nationality, COUNT(title)
FROM authors 
 LEFT JOIN books ON author_id = author_id_foreign
 WHERE author_id BETWEEN 1 AND 5
 GROUP BY author_id
 ORDER BY author_id;
 
 
 
 /* Ejercicios de practica.
 */
 
 
 /* 1. Que nacionalidades hay? */ 

SELECT nationality
FROM authors
 WHERE nationality IS NOT NULL
 GROUP BY(nationality);
 
   /* Introduccion a FUNCTION DISTINCT: 
      
      La funcion DISTINCT tiene algo de parecido la sentencia GROUP BY. 
      DISTINCT es una palabra clave de la sentencia SELECT y nos permite seleccionar todos los valores, 
      de las columnas seleccionadas (con SELECT), sin repetirlos. Trae todos los valores, 
      de la columna en SELECT (columna de una tabla determinada) sin repetirlos. 
      
      Dicho lo anterior, este 1er punto tambien pudo resolverse de la siguiente forma: */
      
SELECT DISTINCT nationality
FROM authors
 WHERE nationality IS NOT NULL;
 
 /* 2. Cuantos escritores hay de cada nacionalidad? */ 
 
SELECT nationality, COUNT(author_id) AS Q_writers
FROM authors
 WHERE nationality IS NOT NULL
 GROUP BY nationality
 
	/* Ahora ordene los resultados de mayor a menor para la columna de "author_id"
       (Tenga en cuenta que ORDER BY solo funciona con las columnas incluidas en el SELECT). */
    
 ORDER BY Q_writers DESC;
 
 /* 3. Cuantos libros hay en cada nacionalidad? */
 
SELECT title AS thebooks, COUNT(nationality) AS Q_books
FROM books
 JOIN authors ON author_id_foreign = author_id
 WHERE nationality IS NOT NULL
 
    /* Ahora no queremos ver los libros que titulen inicialmente con la palabra "Wallander: " */
 AND title NOT LIKE "Wallander%" 
       
 GROUP BY thebooks;

 /* Se da cuenta que la sentencia WHERE va antes que GROUP BY y que, ademas, WHERE no reconoce alias. */

 
