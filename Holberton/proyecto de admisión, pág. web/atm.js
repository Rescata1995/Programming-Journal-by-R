document.body.style.backgroundColor = "white"; // color de fondo del archivo HTML desde Js vinculado a él



document.addEventListener("DOMContentLoaded", function(event) {

  var nombre = prompt("Un saludo por parte de todo el equipo financiero de Mini-Banco Rescata S.A. Es nuestro placer atenderlo (y queremos hacerlo bien), le rogamos que escriba su nombre completo en el siguiente espacio en blanco:");

  var saludos = document.getElementById("name_user");
  saludos.innerHTML= "Bienvenido sea Sr(a). " + nombre + ". Reciba un personal y caluroso saludo.";

/* agrandar y empequeñecer imagen con evento "click" sobre ella:
*/


var thumbnailElement = document.getElementById("smart_thumbnail");
    thumbnailElement.addEventListener("click", function() {
        var thumbnailElement = document.getElementById("smart_thumbnail");
        
        if (thumbnailElement.className == "small") {
            thumbnailElement.className = "";
        }
        else{
            thumbnailElement.className = "small";
        }
      });


});
