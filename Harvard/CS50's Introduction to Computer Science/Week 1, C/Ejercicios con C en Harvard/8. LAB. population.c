#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int sSize, eSize;

    // counter
    int i;

    // TODO: Prompt for start size
    do
    {
        sSize = get_int("specify initial population size: ");
    }
    while (sSize < 9);

    // TODO: Prompt for end size
    do
    {
        eSize = get_int("specify final population size: ");
    }
    while (eSize < sSize);

    // TODO: Calculate number of years until we reach threshold
    for (i = 0; sSize < eSize; i++)
    {
        sSize = (sSize + (sSize / 3) - (sSize / 4));
    }

    // TODO: Print number of years
    printf("Years: %i\n", i);
}
