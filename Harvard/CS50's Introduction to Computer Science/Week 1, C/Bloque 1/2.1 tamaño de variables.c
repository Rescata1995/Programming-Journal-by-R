// saber calcular el tamaño de las variables ejecutando un archivo .c


#include <stdio.h>

/* Existe una forma de calcular el tamaño en bytes de los tipos de datos que usamos y que se emplean para crear variables;
   llamese: "int", "double", "char" o "float", etc. Ese proposito se logra...
   Por medio del uso del operador "sizeof()", que es quien calcula el tamaño de una variable;
   y, para imprimir el resultado devuelto por "sizeof", se usa el especificador de formato "%lu" o "%zu", cualquiera de los dos.
   */

// forma número 1

int main(void)
{

// tipos de datos
int i; // 32 bits; declara números enteros y, por su tamaño en bits, sólo permite 2^32 combinaciones o números independientes posibles en total (sin excluir los negativos)
long l; // 64 bits; declara también enteros, sólo que permite números mucho mas grandes por su tamaño en bits: 64 bits, exactamente: 2^64 combinaciones o números en total
char c; // 8 bits
float f; // 32 bits
double d; // 64 bits; declara también flotantes, sólo sólo que permite números mucho mas grandes por su tamaño en bits: 64 bits, exactamente: 2^64 números posibles en total.
bool x; // 8 bits (true or false)

printf("El tamaño de un entero es: %zu. \n", (unsigned long)sizeof(i));   // se llama a la variable "i" dentro de "sizeof()" para poder calcular su tamaño en bytes.
printf("El tamaño de un long es: %lu. \n", (unsigned long)sizeof(l));    // se llama a la variable "l" dentro de "sizeof()" para poder calcular su tamaño en bytes.
printf("El tamaño de un caracter es: %lu. \n", (unsigned long)sizeof(c)); // se llama a la variable "c" dentro de "sizeof()" para poder calcular su tamaño en bytes.
printf("El tamaño de un float es: %zu. \n", (unsigned long)sizeof(f));    // se llama a la variable "f" dentro de "sizeof()" para poder calcular su tamaño en bytes.
printf("El tamaño de un double es: %zu. \n", (unsigned long)sizeof(d));   // se llama a la variable "d" dentro de "sizeof()" para poder calcular su tamaño en bytes.


// nota: no es necesario colocar "(unsigned long)", pero es una buena práctica.

return(0);
}

// el especificador de formato del tipo de dato "long" es: %li.
