#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main (int argc, string argv[])
{
  /*  if (argc != 2)
    {
        //  printf("Must contain 26 characters");
    }*/

    string alphabet[] = {get_string("plaintext: ")};
    // iterate through argv[]input
    for(int i = 0, n = strlen(argv[1]); i < n; i++)
    {
       if(argv[1][i] && alphabet [0][i])
       {
       // prints each char of argv[][]
        printf("%c", argv[1][i]);
       }
    }

    //for ()

        // print the corresponding position
}