'use strict';

    var r = 10;
    var f = 20;

document.write("<br><br>"); 
document.write("Ahora tenemos los valores de r y f que equivalen a: " + r + " y " + f + " respectivamente.");   

function sumas()
{    
    var suma = r + f;
    console_document(suma + ": es nuestra suma."); // recuerde, también podemos pasar cadenas de texto al llamado de una función
}
sumas(); // el "prototipo" que hay que llamar para que corran las funciones personalizables que queremos correr al actualizar página


function mult()
{    
    var mul = r * f;
    console_document(mul + ": es nuestra multiplicación.");
}
mult(); // acá "prototipo" de la función "mult" para que pueda correrse al refrescar la página. 


function resta()
{    
    var rest = r - f;
    console_document(rest + ": es nuestra resta.");
}
resta();


function div()
{    
    var di = r / f;
    console_document(di + ": es nuestra división.");
}
div(); 

// Vamos a crear una función que tenga como tarea preguntarle al usuario cómo imprimir su información, si por consola o por documento
// Luego, la llamaremos en las otras funciones personalizables que nos interese aplicarles esta función: "console_document".
function console_document(aux)
{   

    document.write("<br><br>");    

    var select = prompt("Presione 'c' si desea la impresión por consola de sus operaciones matematicas (o 'd' si desea la imprensión de ellas por documento).");

    if (select == "c" || select == "C")
    {
        console.log(aux);
    }
    else if (select == "d" || select == "D")
    {
        document.write(aux);
    }
    else 
    {
        document.write("Está insertando códigos errados, intente de nuevo");
    }
}


// Dato curioso: En C se escribe como "prototipo real" a la función que se importa, no a la función que se corre (como sí es el caso de JS).
