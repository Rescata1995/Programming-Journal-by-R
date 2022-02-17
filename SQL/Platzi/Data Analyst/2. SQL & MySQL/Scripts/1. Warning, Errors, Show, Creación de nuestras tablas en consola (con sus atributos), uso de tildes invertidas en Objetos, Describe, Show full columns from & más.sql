CREATE database platzi_operation; 

/* "platzi_operation" sera la base de datos inicial con la cual trabajaremos; 
    sin embargo, como buena practica, siempre es bueno verificar antes si la base de datos que pretendemos crear
    ya existe o no, tal que asi: */
    
CREATE DATABASE IF NOT EXISTS platzi_operation;

/*  Como se dara cuenta, la salida nos arroja un "WARNING". El Query esta bien escrito, sin embargo, 
	la salida de la linea ejecutada no es la esperada. Esto es probablemente porque el codigo que queriamos 
	correr, lo deseado de el, no se ejecuto por alguna razon; es decir, no se creo la tabla "platzi_operation". 
    Sin embargo, para estar seguros de cual es esa razon, podemos ejecutar un comando, 
    "SHOW WARNINGS", que nos explique directamente el motivo de nuestro WARNING, tal que asi: 
    */
    
	SHOW WARNINGS; 
    /* WARNING dice: "Can't create database 'platzi_operation'; database exists"... 
    Tenemos que la base de datos previamente ya habia sido creada y no puede crearse otra bajo ese mismo nombre */
    
/*  Ahora, si usted intenta crear directamente la base de datos "platzi_operation" sin verificar primero que ya exista,
	Si dependo de este codigo de flujo directamente...
	Sin preguntarle primero al manejador de base de datos SI puede hacer eso,... Ve la importancia del condicional "SI"?
	Como ya existe y no estas verificando eso, "no estas pidiendo permisos", el Query si estaria mal elaborado; 
	y, en vez de arrojar como salida un WARNING (Una advertencia) veras directamente un error. Veamos! */
		
CREATE DATABASE platzi_operation;
    
    SHOW ERRORS;
    /* ERROR dice: "Can't create database 'platzi_operation'; database exists"... Ya sabe la razon del error. */
    
    /* Veamos ahora la totalidad de nuestras bases de datos disponibles ejecutando lo siguiente: */
    
    SHOW DATABASES;
    
    /* Ahora ya podremos ver "platzi_operation"!... entonces, usemosla, tal que asi: */
    
    USE platzi_operation; /* Esto no es ningun query, es decir, no afecta nada. Solo seleccionamos una base de datos. */
    
    /* Ahora que estamos en "platzi_operation", veamos que tablas tenemos, tal que asi: */
    
    SHOW tables; 
    
    /* Hasta ahora no tenemos ninguna tabla en esta base de datos... Pero vamos a crearlas ya. Si se recuerda 
    anteriormente creabamos nuestras tablas (y sus atributos) asistiendonos directamente de los recursos propios 
    del manejador de datos; facilitandonos el trabajo de escribir, el por nosotros, todo el codigo SQL
    para ejecutar esa tarea. Pues bien, esta vez, nos encargaremos de ejecutar manualmente estos codigos...
    Sin apoyarnos del asistente grafico propio de MySQL: MySQL Workbench. Tal que asi: */
    
    /* Si es necesario que recuerde todas las consideraciones que debe tener en cuenta para la creacion de cada 
	   tabla de su base de datos, por favor, revise los apuntes de "Conceptos iniciales sobre las BDs relacionales" &
       "SQL DDL" . En esos dos hay informacion sobre, por ejemplo, porque declarar el nombre de las entidades (tablas) 
       en plural o porque debe asignar a todas las tablas una primary key, entre otras cosas de interes. */
    
CREATE TABLE IF NOT EXISTS books (
	book_id INTEGER UNSIGNED PRIMARY KEY AUTO_INCREMENT, /* Aqui el primer atributo de nuestra tabla "Books": "Book_id" */
    autor_id_foreign INTEGER UNSIGNED,
    title  VARCHAR(100) NOT NULL,
    age INTEGER UNSIGNED NOT NULL DEFAULT 1900,
    language VARCHAR(2) NOT NULL DEFAULT 'es' COMMENT 'ISO 639-1 language', 
    /* Normas ISO nos permite definir al español como "ES" & al ingles como "EN". */
    
    cover_url VARCHAR(500), 
    price DOUBLE(6,2) NOT NULL DEFAULT 10.0,
    sellable TINYINT(1) DEFAULT 1, /* TINYINT, en este caso, es un valor numerico que solo puede admitir 0s o 1s; 
								     es decir, se puede tratar como un Booleano donde se verifique si los libros 
                                     son vendibles (con el numerico "1") o NO (con el numerico 0). 
                                     Todo es "TRUE" o "FALSE", a estas salidas se les llama tambien "Banderas". 
                                     
                                     Si se percata, el tipo de dato "TINYINT" es un numero entero al que se le pasa, 
                                     por medio de un parametro, el numero maximo al que puede llegar; en este caso,
                                     ese numero maximo es el numero 1. */
	
    copies INTEGER NOT NULL DEFAULT 1,
    description TEXT
    );
    
    /* CON "COMMENT" se le asigna un comentario a la columna o atributo, nadie la va a ver mas que 
       quien este viendo la estructura de la base de datos. No afecta en absoluto sobre el flujo de la DB. */
       
	/* Un consejo de buena practica: Escriba los nombres de sus objetos en minusculas (todas sus letras) & 
	   escriba las palabras reservadas, propias al lenguaje, en mayusculas (todas sus letras). Mantenga en practica. 
       
       Ahora, hay un caso extraño que uno idealmente no pretende buscar, sino que simplementa ocurre. Y es que, 
       a veces, los nombres de los objetos (llamese tabla, columna, vista, etc) corresponden al nombre de 
       una palabra reservada propia de SQL; por ejemplo, puede darse el caso que una columna se llame 
       "year" pero la palabra "year" ya es una palabra reservada de SQL... En ese caso, si realmente necesita 
       llamar a su columna asi, es una buena practica (casi un deber ser) utilizar tildes invertidas para 
       declarar ese tipo de objetos, tal que asi: `year` (con esto se diferencia la columna de la palabra reservada). */ 
       
CREATE TABLE IF NOT EXISTS authors (
	author_id INTEGER UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    name_author VARCHAR(100) NOT NULL,
    nationality VARCHAR(3)
    );
    
DESCRIBE authors; /* Este comando, DESCRIBE, nos explica con detalles las caracteristicas de los atributos x tabla */
DESC clients; /* "DESCRIBE" tambien se puede expresar con el acronico "DESC" */

/* Para ver mas detalles de las columnas, como por ejemplo mostrar incluso los comentarios insertados en ellas...
   podemos usar el comando "SHOW FULL COLUMNS FROM -aqui inserte nombre columna-", por ejemplo: */ 
      
SHOW FULL COLUMNS FROM operations; 

/* Ahora podra ver, por ejemplo, el comentario que insertamos inicialmente en el atributo "language" de la tabla 
   "books". Este comando nos dice tambien los permisos que tenemos en "Privileges", 
   como el usuario en el que estamos e, incluso, cual es el tipo de esquema que esta en cada una de las columnas 
   (Collation). */
   
CREATE TABLE IF NOT EXISTS clients (
	client_id INTEGER UNSIGNED PRIMARY KEY AUTO_INCREMENT,
    name_client VARCHAR(50) NOT NULL,
    email VARCHAR(100) NOT NULL UNIQUE,
    birthdate DATETIME, 
    gender ENUM('M', 'F', 'ND') NOT NULL,
    active TINYINT(1) NOT NULL DEFAULT 1, 
    
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
    updated_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP

    /* Estos dos atributos me guardan el registro del cliente en tiempo real, por eso se usa un TIMESTAMP */
	);
    
    
CREATE TABLE IF NOT EXISTS operations (
	operation_id INTEGER UNSIGNED PRIMARY KEY AUTO_INCREMENT,
	book_id_foreign INTEGER UNSIGNED, 			
    client_id_foreign INTEGER UNSIGNED,
    type ENUM('B', 'S', 'R') NOT NULL COMMENT 'Where B=Borrowed, S=Sold & R=Returned',
    created_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
	updated_at TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP ON UPDATE CURRENT_TIMESTAMP,
    finished TINYINT(1) NOT NULL
    );
    
INSERT INTO authors (name_author, nationality)
VALUES ('Juan Rulfo', 'MEX'),
 ('Gabriel Garcia Marquez', 'COL'),
 ('Juan Gabriel Vasquez', 'COL'),
 ('Julio Cortazar', 'ARG'),
 ('Isabel Allende', 'CHI'),
 ('Octavio Paz', 'MEX'),
 ('Juan Carlos Onetti', 'URU')
 ;
 
SELECT * FROM authors;

 /*CASO ESPECIAL: se probara caso de "duplicate key", con posible resolucion, al pasar un id manualmente. Atencion: */
 
INSERT INTO authors (author_id, name_author)
VALUES (16, 'Pablo Neruda')
; 

/* UNA PAUSA, tomaremos otro ejemplo. 
   Primero, insertemos 4 registros para la tabla "clients" y probaremos sobre esta misma tabla, clients, 
   que pasaria si intentamos duplicar una entrada, por ejemplo el correo electronico (que es Unique, recuerde)
   sobre otro registro 
   
   R/ Ya usted sabe que, por defecto, la consola no lo dejara proceder)... 
   
   Desde luego entonces lo que nos interesa poner en practica ahora es lo siguiente: 
   Cuales son todas nuestras posibles opciones en caso que tengamos que, si o si,
   proceder de alguna manera pero sin duplicar nada. Veamos. */
 
INSERT INTO clients (client_id, name_client, email, birthdate, gender, active)
VALUES (1,'Maria Dolores Gomez','Maria Dolores.95983222J@random.names','1971-06-06','F',1),
 (2,'Adrian Fernandez','Adrian.55818851J@random.names','1970-04-09','M',1),
 (3,'Maria Luisa Marin','Maria Luisa.83726282A@random.names','1957-07-30','F',1),
 (4,'Pedro Sanchez','Pedro.78522059J@random.names','1992-01-31','M',1)
 ;

SELECT * FROM clients;

/* Tenemos nuestros 4 primeros registros sobre "clients". Intentaremos, porque nos toca (suponiendo que es el deber ser), 
   crear un nuevo registro usando un correo electronico previamente registrado, tal que asi: */

INSERT INTO clients (name_client, email, birthdate, gender, active)
VALUES ('Pedro Sanchez','Pedro.78522059J@random.names','1992-01-31','M',0);

/* Note que intentaremos repetir un email en un nuevo registro cuando, evidentemente, esto no se puede (por defecto). 
   La manera en la que podriamos proseguir seria por medio del recurso: "ON DUPLICATE KEY "... 
   Sin embargo, hay varias opciones de uso para este recurso. 
   
   La ideal: ON DUPLICATE KEY UPDATE active = VALUES(active); 
   */
   
INSERT INTO clients (name_client, email, birthdate, gender, active)
VALUES ('Pedro Sanchez','Pedro.78522059J@random.names','1992-01-31','M',0)
ON DUPLICATE KEY UPDATE active = VALUES(active);

   	

   


