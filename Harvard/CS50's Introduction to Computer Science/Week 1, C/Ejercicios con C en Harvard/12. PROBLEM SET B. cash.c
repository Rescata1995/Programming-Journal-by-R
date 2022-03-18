#include <stdio.h>
#include <cs50.h>
#include <math.h>

int main(void)
{
    // change in dollars
    float dollars;

    // counters
    int i, j, h, g;

    // cents variety
    int c25, c10, c5, c1;
    c25 = 25;
    c10 = 10;
    c5 = 5;
    c1 = 1;

    // total sum of pennies, regardless of their denomination, delivered to the customer:
    int coins;

    do
    {
        // your change in dollars
        dollars = get_float("Insert change to be returned to you by the ATM: ");
    }
    while (dollars < 0);

    int cents = round(dollars * 100);
    printf("Your change from dollars to cents is: %i.\n\n", cents);


    for (i = 0; cents >= c25; i++)
    {
        cents = cents - c25;
    }
    printf("The amount of pennies, of nomination 25, given to you as a customer is: %i.\n", i);

    for (j = 0; cents < c25 && cents >= c10; j++)
    {
        cents = cents - c10;
    }
    printf("The amount of pennies, of nomination 10, given to you as a customer is: %i.\n", j);

    for (h = 0; cents < c10 && cents >= c5; h++)
    {
        cents = cents - c5;
    }
    printf("The amount of pennies, of nomination 5, given to you as a customer is: %i.\n", h);

    for (g = 0; cents < c5 && cents >= c1; g++)
    {
        cents = cents - c1;
    }
    printf("The amount of pennies, of nomination 1, given to you as a customer is: %i.\n\n", g);

    coins = i + j + h + g;
    printf("%i\n\n", coins);
}
