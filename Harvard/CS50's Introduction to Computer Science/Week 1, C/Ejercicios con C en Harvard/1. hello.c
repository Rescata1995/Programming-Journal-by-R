#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string nombre = get_string("Cuál es tu nombre: ");
    printf("Hello, %s. \n", nombre);

//  return (0); si nuestra función "main" no tiene argumentos, se escribe "void" (vacia) dentro de ella y evitamos escribir "return (0);".

//  Es así porque, basicamente, estamos frente una función que tiene un tipo de retorno "vacio"; es decir, significa que no devuelve un valor;
//  la función en cuestión, puede tener un tipo de retorno nulo, el equivalente a: "return (0)". Dicho lo anterior,
//  usted puede decidir si declarar un "return (0)" o simplemente aclarar, por medio del tipo "void", que su función no tiene argumentos y no retorna nada;
//  es decir, que es una función literalmente "vacia"
}
