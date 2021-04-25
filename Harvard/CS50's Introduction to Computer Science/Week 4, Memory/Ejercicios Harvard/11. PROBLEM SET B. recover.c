#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <stdint.h>

typedef uint8_t BYTE;

#define BLOCK_SIZE 512
#define FILE_NAME_SIZE 8

bool new_jpg(BYTE buffer[]);

int main(int argc, char *argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./recover image\n");
        return 1;
    }

    FILE *inputFile = fopen(argv[1], "r");
    if (inputFile == NULL)
    {
        printf("There is not file!\n");
        return 1;
    }

    BYTE buffer[BLOCK_SIZE];

    int file_index = 0;
    bool jpg_1 = false;
    FILE *outputFile;

    while (fread(buffer, BLOCK_SIZE, 1, inputFile))
    {
        if (new_jpg(buffer))
        {
            if (!jpg_1)
            {
                jpg_1 = true;
            }

            else
            {
                fclose(outputFile);
            }

            char filename[FILE_NAME_SIZE];
            sprintf(filename, "%03i.jpg", file_index++);

            outputFile = fopen(filename, "w");
            if (outputFile == NULL)
            {
                return 1;
            }

            fwrite(buffer, BLOCK_SIZE, 1, outputFile);
        }

        else if (jpg_1)
        {
            fwrite(buffer, BLOCK_SIZE, 1, outputFile);
        }
    }
    fclose(outputFile);
    fclose(inputFile);
}

bool new_jpg(BYTE buffer[])
{
    return buffer[0] == 0xff && buffer[1] == 0xd8 && buffer[2] == 0xff && (buffer);
}

// This exercise was done with the help of the youtube channel: Algorithmic Coding.
