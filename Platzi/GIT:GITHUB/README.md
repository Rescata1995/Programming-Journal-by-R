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


**2. Flujo de trabajo básico en GIT, introducción a repositorios remotos (GITHUB):**

Sobre el uso de nuevos comandos como: **git push**, que se encarga de exportar nuestro "Head" a nuestro repositorio remoto vinculado a repo local; pequeña introduccióna a **git clone** & sobre dejar claro las diferencias entre **git fetch**, **git merge** y, el más poderoso, **git pull** a la hora de importar copias de seguridad del repositorio remoto a nuestro repositorio local (luego de ya haber clonado, ojo, al repositorio en sí. Importante esto).


**3. Trabajando con repositorios remotos en Github, GITHUB a fondo & vinculación a GIT:**

Sobre cómo crear una cuenta en GITHUB y cómo hacer una conexión segura de su GIT con su GITHUB por medio de llaves SSH; Tags y Versiones en Git y Github, para saber con todos los detalles la historia de tus "commits"; Manejo de ramas (branches) en Github: sobre cómo exportar las sub-ramas (o ramas de desarrollo) que creemos, a partir de una rama principal, en Git a GitHub; cómo configurar multiples colaboradores en un repositorio de Github por medio del comando **Git clone**.


**4. Flujos de trabajos profesionales en Github, recursos Pull request, fork & más:**

Introducción al concepto de servidores en Git (de producción & prueba) y cómo se relacionan con Pull request: proceso que consiste en la revisión que se hace justo antes de fusionar en su totalidad (e individualmente) todas las ramas correspondientes a cada desarrollador (servidores de prueba) con la rama stagind develop (servidor de producción), a todo aquel que se le solicite revisión debe estar de acuerdo para hacer la fusión **(Git merge)**; Definición de la función de un DevOps como persona que coordina todas las revisiones y avala finalmente los cambios y las fusiones entre ramas; Fork e introducción a un proyecto Open-Source, sobre cómo en un proyecto Open-Source cualquier tercero o persona independiente al proyecto en sí, puede clonarlo (en caso que esté cargado en un servidor remoto como GitHub), sin embargo, tenga en cuenta que no se pueden hacer operaciones como: merge, push, crear ramas o tags, etc. Sólo copiar; introducción a **gitignore** y a **README.md**.


**5. Rebase en Git, Git clean & Git cherry pick:**

Un **rebase** consiste en incorporar el contenido de una rama de desarrollo en la rama master, o viceversa, de manera “silenciosa”; es decir, hacer como que no pasó nada nunca ni que tuvimos que crear una rama de desarrollo nueva para, posteriormente, incorporarle sus cambios en rama master (si éste fuera el caso). Para ser más precisos, la rama realmente no se borraría (la que exportaría sus cambios guardados); sin embargo, el historial de commits de esa rama, por ejemplo la rama de desarrollo, no se exportarían a master al hacer un rebase en master de la rama de desarrollo en cuestión, es decir, al incorporar en master los cambios guardados o commits de la rama de desarrollo; **Git clean** es un comando que nos permite eliminar todo aquello que por error ha sido creado, o bien, porque eso que fue creado, no nos interesa a lo sumo que haga parte de nuestro proyecto... aunque incluso haya sido consecuencia de algún proceso ligado al mismo, más puntualmente nos referimos a archivos, porque este comando no puede eliminar directorios (sólo archivos) y, adicionalmente, archivos que aún no han sido trackeados (porque realmente no te interesa hacerles un seguimiento, antes, desearías eliminarlos). Considere las excepciones de Git clean; **Git cherry pick**, sobre cómo importar, en su rama de trabajo actual (convengamos que es rama master), un commit de otra rama de desarrollo, pero atención, un commit en particular y no precisamente la última copia de seguridad registrada en dicha rama de desarrollo (es decir, el último commit), no. **Formato: git cherry-pick + el identificador del commit, de la otra rama, de mi interés** (el que deseo importar).


**6. Git con Amend, Git reset & Git con Grep & Log:**

Sobre **Git con Amend**, con este comando podemos corregir los cambios ya guardados en la última copia de seguridad de nuestro entorno local, es decir, corregir o hacer cambios puntuales sobre nuestro último commit (sobreescribir información, con intención de modificar parcial o completamente todo el contenido, sobre él). Este comando sirve en los casos especiales donde, por error, hemos guardado un commit que en principio debía agregarsele más información o, en su defecto, agregarle otro tipo de información; sobre **Git Reset**, el comando que nos permite viajar entre commits **(git reset + identificador)**; sobre **Git con Grep & Log**, nos permite buscar una palabra en especifica que tenga algún archivo de texto plano o para código en todo nuestro repositorio local ya inicializado con Git, para ser más precisos, lo que hace grep es buscar en todos los archivos, según una rama y un directorio de trabajo donde esté situado, una palabra que usted le haya pasado, tal que así, por ejemplo: git grep “palabra”. Entonces, git grep nos señala la dirección o destino de todos los archivos que contengan esa palabra en cuestión, en forma de lista. 











