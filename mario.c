#include <cs50.h>
#include <stdio.h>

int get_positive(void);
void print_row(int n); // fuctions declared at start

int main(void)
{
    int n = get_positive();
    print_row(n);
}

void print_row(int n)
{
    for (int row = 0; row < n; row++)
    {
        for (int space = 0; space < n - row - 1; space++)
        {
            printf(" "); // prints the spaces before #
        }
        for (int hash = 0; hash < row + 1; hash++)
        {
            printf("#"); // prints hashes= height-number of spaces
        }

        printf("\n"); // next line
    }
}

// function to get only positive values for height
int get_positive(void)
{
    int n;
    do
    {
        n = get_int("Height: ");
    }
    while (n < 1);
    return (n);
}
