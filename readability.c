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
    int length = strlen(input);

   //Test output and location of string
   //printf("%i %i %i %i %i %i %i %i %i %i %i %i ", input[0], input[1], input[2], input[3],  input[4],  input[5],
                                                //  input[6], input[7], input[8], input[9], input[10],input [11]);
    int letters = 0;
    for (int i = 0; i < length; i++)
    {
      if (input [i] != 32)
      {
          letters++;
      }


    }
    return letters;
}

    //Before Grade 1
    //16++