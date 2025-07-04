#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void cipher_text(string s, int key);

bool is_int(string s);

int main(int argc, string argv[])
{
    if ((argc != 2) ||
        !is_int(argv[1])) // argumrnt count should be 2 and is_int function should return true
    {
        printf("Usage: ./caesar key\n");
        return 1;
    }

    int key = atoi(
        argv[1]); // converts the argument input to an integer after it has been checked (isdigit)

    string plaintext =
        get_string("plaintext:  "); // takes in plain text to be converted to ciphertext

    printf("ciphertext: ");
    cipher_text(plaintext, key);

    return 0;
}

bool is_int(string s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        if (!isdigit(s[i])) // not true like
        {
            return false;
        }
    }
    return true;
}

void cipher_text(string s, int key)
{
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (isalpha(s[i])) // we've to only covert the alphabets
        {
            if isupper (s[i])
            {
                printf("%c", (((s[i] - 'A') + key) % 26) + 'A');
            }
            else if islower (s[i])
            {
                printf("%c", (((s[i] - 'a') + key) % 26) + 'a');
            }
        }
        else
        {
            printf("%c", s[i]); // any char except alphabet
        }
    }
    printf("\n");
}
