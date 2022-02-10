/* 1. Muestre solo los primeros cinco registros de la tabla "alumnos", schema: platzi, sin usar la sentencia Where */

SELECT *
FROM alumnos
LIMIT 5;

/* Otras maneras ademas de "LIMIT 5;": */

/* 1. Haciendo uso del comando Fetch: 

   SELECT *
   FROM alumnos
   FETCH FIRST 5 ROWS ONLY; */

/* 2. Haciendo uso de las Window Functions 

   SELECT *
   FROM (
	   SELECT ROW_NUMBER () OVER() AS row_id, *
	   FROM platzi.alumnos
 )  AS alumnos_with_row_nums
 WHERE row_id = 5 OR // Opcion 1
 WHERE row_id < 6 OR // Opcion 2
 WHERE row_id BETWEEN 1 AND 5; // Opcion 3

   Que es una Window Function? R/ Es la relacion que existe entre el row que queremos medir y 
   la totalidad de rows en un grupo; en general, si no especificas nada es toda la tabla. */