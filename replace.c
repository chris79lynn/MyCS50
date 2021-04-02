#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
     string plain_text = get_string("Plain text: ");
     for (int i =0, n = strlen(argv[1]); i < n; i++)
     {
        if (argv[1][i] != plain_text[i])
        {
            printf("True");
        }

     }

}