#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(void);

int main (void)
{
    // string get_letters =  get_string("Text:");
    int alphabetic  = letter_count();

    printf("%i", alphabetic);
}

int letter_count (void)
{
    string input =  get_string("Text:");

    int letters = 0;
    int spaces = 0;
    int length = strlen(input);

    printf("Original # of letters: %i", length);

    for (int i = 0; i < length; i++)
    {
        if (input[i] != '\0' && input[i] != ' ')
        {
            i++;
        }
        else if (input[i] == '\0')
        {
            spaces++;
        }

        printf("%c", input[i]);
        letters = i-1;
    }
    return letters;
}

    //Before Grade 1
    //16++