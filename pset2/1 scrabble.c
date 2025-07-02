#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <string.h>

int score(string s);

int main(void)
{
    // takes both player's input word for scrabble
    string one = get_string("player 1: ");
    string two = get_string("player 2: ");
    // calculates scores of both players
    int score1 = score(one);
    int score2 = score(two);
    // prints winner statement
    if (score1 > score2)
    {
        printf("player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("player 2 wins!\n");
    }
    else
    {
        printf("tie!\n");
    }
}

// array of points assigned to each letter uppercase/lowercase in order a to z
int points[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10};

// fuction to calculate score
int score(string s)
{
    int score = 0;
    for (int i = 0, length = strlen(s); i < length; i++)
    {
        if (isupper(s[i]))
        {
            score +=
                points[s[i] - 'A']; // calculates index number for the letter in array using ascii
        }
        else if (islower(s[i]))
        {
            score +=
                points[s[i] - 'a']; // calculates index number for the letter in array using ascii
        }
    }
    return score;
}
