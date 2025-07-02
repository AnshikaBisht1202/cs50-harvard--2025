#include <cs50.h>
#include <stdio.h>

int get_height(void);
void print_row(int h); // fuctions declared at start

int main(void)
{
    int h = get_height();
    print_row(h);
}

// prints h number of rows
void print_row(int h)
{
    for (int i = 0; i < h; i++)
    {
        for (int space = 0; space < h - i - 1; space++)
        {
            printf(" ");
        }
        for (int hash = 0; hash < i + 1; hash++) // first hashes after space
        {
            printf("#");
        }
        // two constant spaces
        printf("  ");
        for (int hash = 0; hash < i + 1; hash++)
        {
            printf("#");
        }
        // no use of spaces at end silly
        printf("\n");
    }
}

int get_height(void) // oly accepts height bw 1 and 8
{
    int h;
    do
    {
        h = get_int("height: ");
    }
    while (h < 1 || h > 8);
    return (h);
}
