var gm = 3.7; // gravedad marte
var gt = 9.8; // gravedad tierra
var gj = 24.8; // gravedad jupiter
var su_peso = prompt ("su peso en la Tierra es igual a:");

var que_planeta = prompt ("En que planeta desea pesarse, Jupiter o Marte?");
var peso_jupiter = (gj * su_peso)/gt;
var peso_marte = (gm * su_peso)/gt;

if (que_planeta === "Jupiter" || que_planeta == "jupiter") {
document.write ("Su peso en Jupiter es <strong> " + parseInt(peso_jupiter) + "  kgs. </strong>")
}

else if (que_planeta === "Marte" || que_planeta == "marte") {
document.write ("Su peso en Marte es <strong> " + parseInt(peso_marte) + " kgs. </strong>")
}

else {
   document.write ("Sólo te di dos opciones. Una de dos: Escribiste mal alguno de los dos planetas o escribiste otra mierda!")
}
