// Modifies the volume of an audio file

#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>

// Number of bytes in .wav header
const int HEADER_SIZE = 44;

int main(int argc, char *argv[])
{
    // Check command-line arguments
    if (argc != 4)
    {
        printf("Usage: ./volume input.wav output.wav factor\n");
        return 1;
    }

    // Open files and determine scaling factor
    FILE *input = fopen(argv[1], "r");
    if (input == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    FILE *output = fopen(argv[2], "w");
    if (output == NULL)
    {
        printf("Could not open file.\n");
        return 1;
    }

    float factor = atof(argv[3]);

    // TODO: Copy header from input file to output file

    uint8_t header[HEADER_SIZE]; /* el tipo de datos "uint8_t" es usado para declarar variables de enteros sin signos que contienen 8 bits (1 byte).
                                    Entonces, estamos declarando una matriz "header" que contiene 44 enteros de 1 byte cada uno, recuerde que HEADER_SIZE = 44.
                                    */

 // Quiere decir entonces que "header" sólo recopila información relacionada a enteros de 1 byte; es decir, es sólo eso lo que podría tomar de la info. de "input".

    fread(header, HEADER_SIZE, 1, input); // Aquí estamos leyendo (y tomando) la información de "input" para pasarsela a la variable de tipo "uint8_t": header.
 // Es decir, le estamos pasando los 44 bytes (44 enteros de 1 byte para ser más precisos) al "header" (sólo toma eso, porque es sólo eso lo que puede almacenar).

    fwrite(header, HEADER_SIZE, 1, output); // Aquí vamos a escribir tal información, la que ya fue pasada a "header", en "output". Se invierten los papeles:

 /* Si se da cuenta es ahora el 1er parametro el que tiene la información a pasar (en fwrite) y no el último parametro (como sí sucede con fread).

    En resumidas cuentas, lo que hicimos fue pasarle la misma cantidad de bytes que tiene el encabezado del archivo "input.wav" a "output.wav",
    por medio de un "header"; pero, ojo, son los bytes que se relacionan solamente con los enteros que ocupan 1 byte de memoria; y, en total así, pasamos 44 de ellos.
    */


    // TODO: Read samples from input file and write updated data to output file

    /* La información que queremos recopilar concerniente a "el volumen del audio" en un archivo tipo ".wav", por lo general, está contenida en enteros
       con 16 bits de memoria cada uno; es decir, si quisieramos manipular el volumen de un audio, debemos poner toda nuestra atención a este tipo de enteros;
       este tipo de enteros están representados por un tipo de dato conocido como: "int16_t" (tipo de dato para declarar variables de un entero con 2 bytes).

       Trabajemos entonces a partir de una variable declarada con este nuevo tipo de datos, dicha variable se llamará: "buffer".
       "buffer" será el lugar donde almacenaremos inicialmente toda la información relacionada al volumen del audio del archivo apuntado por "input";
       que es, al fin y al cabo, lo que nos interesa manipular y modificar, por medio de la variable "factor", para el archivo saliente apuntado por "output".
       */

    int16_t buffer; // Recuerde, el tipo de datos "int16_t" es usado para declarar variables de enteros, con signos, que contienen 16 bits (2 bytes).
                    // Entonces, estamos declarando una variable "buffer" que sólo recopila información de enteros que ocupan 2 bytes de memoria cada uno.

    while (fread(&buffer, sizeof(int16_t), 1, input))
 // Estamos leyendo (y tomando) la información de "input", mientras esa info. (while) sean enteros del tipo de dato "int16_t",
 // para pasarsela a la variable de tipo "int16_t" (también) llamada: "buffer".

    {
     // Update volume
        buffer = buffer * factor; // buffer tiene la info. relacionada a los enteros de 2 bytes del archivo apuntado por "input"; es decir, la info. del volumen;
     // entonces, lo que estamos haciendo aquí, es modificar "buffer": que es el volumen (se sube o se baja), por medio de un entero que se guarda en "factor"
     // y que multiplica al "buffer". Si "factor" equivale a 2.0, por ejemplo, se duplica el volumen; pero, si equivale a 0.5, se baja a la mitad.

        fwrite(&buffer, sizeof(int16_t), 1, output); // Entonces, luego que ya tenemos el volumen modificado (con el nuevo "buffer"), se lo pasaremos a "output".
        // Ya conoce la lógica de "fwrite", es el 1er parametro el que le pasa la info especificada en los parametros del medio al último parametro.
    }

 // Close files
    fclose(input);
    fclose(output);
}
