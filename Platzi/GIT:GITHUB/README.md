**1. Introducción y comandos básicos en GIT, comandos abordados en este apartado:**
 
 
A. **git init**, comando para inicializar GIT; 

B. **git add (+ fichero)**, todo cambio registrado que quiera hacerle un seguimiento en el area temporal (staging area) debe hacerlo con este comando; 

C. **git rm --cached (+ fichero)**, si quiere deshacerse del seguimiento sobre un cambio registrado en el area temporal (staging area) debe hacerl con este comando; 

D. **git commit -m ""**, comando que se encarga de crear las copias de seguridad (commits) sobre lo que ya está en seguimiento. Al último "commit" guardado se le llama "Head"; 

E. **git branch**, comando encargado de crear las ramas de desarrollo que hay dentro del mismo repositorio. A la rama principal, por defecto, se le llama: "Master";

F. **git merge**, comando que se encarga de unir los avances de cada rama de desarrollo a la rama principal "Master" (idealmente así); 

G. **git log (+ fichero)**, comando que nos permite ver cuántos “commits” o copias de seguridadad le he creado a una carpeta o a un fichero en especifico; 

H. **git show**, comando que compara las dos últimas copias de seguridad, los cambios que hubo de un commit a otro, de un fichero en especifico; 

I. **git reset + identificador**, comando que le permite viajar entre commits. Hay de tipo "hard" & de tipo "soft"; 

J. **git status -s**, comando que le permite saber el estado de todos sus cambios, rastreados o no; 

K. **git checkout**, comando similar a "git reset".


**2. Flujo de trabajo básico en GIT, introducción a repositorios remotos (GITHUB)**

Sobre el uso de nuevos comandos como: **git push**, que se encarga de exportar nuestro "Head" a nuestro repositorio remoto vinculado a repo local; pequeña introduccióna a **git clone** & sobre dejar claro las diferencias entre **git fetch**, **git merge** y, el más poderoso, **git pull** a la hora de importar copias de seguridad del repositorio remoto a nuestro repositorio local (luego de ya haber clonado, ojo, al repositorio en sí. Importante esto).


**3. Trabajando con repositorios remotos en Github, GITHUB a fondo & vinculación a GIT:**

Sobre cómo crear una cuenta en GITHUB y cómo hacer una conexión segura de su GIT con su GITHUB por medio de llaves SSH; Tags y Versiones en Git y Github, para saber con todos los detalles la historia de tus "commits"; Manejo de ramas (branches) en Github: sobre cómo exportar las sub-ramas (o ramas de desarrollo) que creemos, a partir de una rama principal, en Git a GitHub; cómo configurar multiples colaboradores en un repositorio de Github por medio del comando Git clone.




