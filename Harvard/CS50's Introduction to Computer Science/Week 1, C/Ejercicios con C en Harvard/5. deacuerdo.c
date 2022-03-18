#include <stdio.h>
#include <cs50.h>

int main(void)
{
    char a = get_char("Estamos de acuerdo?: ");

    if (a == 'Y' || a == 'y')
    {
        printf("Let's go!");
    }
    else if (a == 'N' || a == 'n')
    {
        printf("Sorry! See you.");
    }
    else
    {
        printf("Try again!");
    }
}
