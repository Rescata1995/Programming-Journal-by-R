/* 1. Muestra solo el primer registro de la tabla "alumnos", schema: platzi, sin usar la sentencia Where */

SELECT *
FROM alumnos
LIMIT 1;

/* Otras maneras ademas de "LIMIT 1;": */

/* 1. Haciendo uso del comando Fetch: 

   SELECT *
   FROM alumnos
   FETCH FIRST 1 ROWS ONLY; */

/* 2. Haciendo uso de las Window Functions 

   SELECT *
   FROM (
	   SELECT ROW_NUMBER () OVER() AS row_id, *
	   FROM platzi.alumnos
 )  AS alumnos_with_row_nums
 WHERE row_id = 1;

   Que es una Window Function? R/ Es la relacion que existe entre el row que queremos medir y 
   la totalidad de rows en un grupo; en general, si no especificas nada es toda la tabla. */