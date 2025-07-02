#include <cs50.h>
#include <stdio.h>
int get_change(void);

int main(void)
{
    // takes change owed
    int change = get_change();
    int n = 0; // n is the number of notes to be printed at the end

    int x = change / 25; // x is number od 25c notes
    n = n + x;           // n updates after every division
    change = change - (25 * x);

    int y = change / 10;
    n = n + y;
    change = change - (10 * y); // due change after 25c and 10c

    int z = change / 5; // number of 5c notes
    n = n + z;
    change = change - (5 * z);

    int w = change / 1;
    n = n + w;
    change = change - (1 * w);

    printf("%i\n", n); // prints final number od notes
}

// only accepts >0 cash owed
int get_change(void)
{
    int change;
    do
    {
        change = get_int("cash owed: ");
    }
    while (change < 1);
    return change;
}
