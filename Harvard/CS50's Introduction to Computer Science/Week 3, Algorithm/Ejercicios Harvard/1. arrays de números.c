#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int numbers [] = {4, 1, 2, 6, 7, 0, 3};

    for (int i = 0; i < 7; i++)
    {
        if (numbers[i] == 0)
        {
            printf("Found.\n");
            return 0;
        }
    }
    printf("Not found.\n");
    return 1;
}
