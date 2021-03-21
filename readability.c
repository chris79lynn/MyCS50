#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
    string user_text = get_string("Text:\n ");

    if (int i=0, n=strlen(user_text); i<n; i++)
    {
        if (isalpha(user_text[i]))
        {
            printf("%i \n", i);
        }
    }

    //Before Grade 1
    //16+
}