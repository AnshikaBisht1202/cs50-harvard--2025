#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_s(string t);
int count_w(string t);
int count_l(string t);

int main(void)
{
    string text = get_string("text: "); // input prompt

    int sentences = count_s(text);
    int letters = count_l(text);
    int words = count_w(text);

    float L = (letters * 100.00) / words;   // average number of letters per 100 words
    float S = (sentences * 100.00) / words; // average number of sentences per 100 words

    float index = 0.0588 * L - 0.296 * S - 15.8; // Coleman-Liau index
    int grade = (int) round(index);
    if (grade > 1 && grade < 16)
    {
        printf("Grade %i\n", grade);
    }
    else if (grade < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (grade > 16)
    {
        printf("Grade 16+\n");
    }
}

int count_s(string t) // total number of sentences
{
    int n = 0;
    for (int i = 0, length = strlen(t); i < length; i++)
    {
        if (t[i] == '!' || t[i] == '.' || t[i] == '?')
        {
            n++;
        }
    }
    return n;
}

int count_w(string t) // total number of words
{
    int n = 0;
    for (int i = 0, length = strlen(t); i < length; i++)
    {
        if (t[i] == ' ')
        {
            n++;
        }
    }
    return (n + 1);
}

int count_l(string t) // total number of letters
{
    int n = 0;
    for (int i = 0, length = strlen(t); i < length; i++)
        if (isalpha(t[i]))
        {
            n++;
        }
    return n;
}
