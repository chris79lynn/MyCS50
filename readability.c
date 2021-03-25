#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int letter_count(string input);

int main (void)
{
    string get_letters =  get_string("Text:\n ");
    int alphabetic  = letter_count(get_letters);

    printf("%i", alphabetic);
}

int letter_count (string input)
{

    int n = strlen(input);
    int i = 0;


    while (input [i] !='\0')
    {
       i++;
    }
    return i;
}

    //Before Grade 1
    //16++