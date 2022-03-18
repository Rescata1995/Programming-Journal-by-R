#include <stdio.h>
#include <cs50.h>

int main(void)
{
    // sin abstracción o sin "buen diseño".
    printf("miau.\n");
    printf("miau.\n");
    printf("miau.\n");

    printf("\n");

    int i;

    // con abstracción o con "buen diseño".
    for (i = 0; i < 3; i++)
    {
        printf("miau.\n");
    }
}
