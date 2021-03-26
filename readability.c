#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(string input);

int main (void)
{
    string get_letters =  get_string("Text:");
    int alphabetic  = letter_count(get_letters);

    printf("%i", alphabetic);
}

int letter_count (string input)
{
    int letters = 0;
    for (int i = 0; input[i] != '\0'; i++)
    {
       printf("%c", input[i]);
       letters = i;
    }
    return letters;
}

    //Before Grade 1
    //16++