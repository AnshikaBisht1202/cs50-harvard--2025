// cs50 library included for get_string
#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // takes name input by the user and storres it under the variable name
    // get_string is a function included in cs50 libary
    string name = get_string("what is your name? ");
    // prints hello and the name of the user along with it
    // %s is placeholder
    printf("hello, %s\n", name);
}
