#include <ctype.h>
#include <cs50.h>
#include <stdio.h>
#include <string.h>

// Points assigned to each letter of the alphabet
int POINTS[] = {1, 3, 3, 2, 1, 4, 2, 4, 1, 8, 5, 1, 3, 1, 1, 3, 10, 1, 1, 1, 1, 4, 4, 8, 4, 10, 0};

//Prototype of custom function
int compute_score(string word);

int main(void)
{
    // Get input words from both players
    string word1 = get_string("Player 1: ");
    string word2 = get_string("Player 2: ");

    // Score both words
    int score1 = compute_score(word1);
    int score2 = compute_score(word2);

      printf("Score1: %i\n", score1);
      printf("Score2: %i\n", score2);

    if (score1 > score2)
    {
        printf("Player 1 wins!\n");
    }
    else if (score2 > score1)
    {
        printf("Player 2 wins!\n");
    }
    else
     printf("Tie!\n");
}

int compute_score(string word)
{
 // TODO: Compute and return score for string

    string WORDC[27] = {word};

    //Stores string length
    int n = strlen(word);
    int sum = 0;
    int check_letter = 0;
    //Iterates through string legnth
    char char_store;
     //iterate through string; store [0][j] in a variable
    //add the variable to a sum variable += until done iterating through


        for (int j = 0; j < n; j++)
        {
            if (isalpha(WORDC[0][j])) // or... isalpha(char_store)
            {
                char_store = WORDC[0][j];
                //or a function to set points to char_store
            }
            if (char_store == 'a')
            {
                sum = sum + POINTS[0];
                //do
                //{
                //    sum = sum + POINTS[0];
                //}
                //while (islower(char_store) || isupper(char_store));
            }
        }return sum;
}

/*  for (int j = 0; j < n; j++)
    {

       // GOOD ---> printf("%i", WORDC[0][j]);
        //if numbers are between 65 and 90 or 97 and 122, then run this function

        //iterate through string; store [0][j] in a variable
        //add the variable to a sum variable += until done iterating through


          if (WORDC[0][j] == 'a' || WORDC[0][j] == 'A')
        {
            WORDC[0][j] = POINTS[0];
            check_letter++;
        }
        if (WORDC[0][j] == 'b' || WORDC[0][j] == 'B')
        {
            WORDC[0][j] = POINTS[1];
            check_letter++;
        }
        if (WORDC[0][j] == 'c' || WORDC[0][j] == 'C')
        {
            WORDC[0][j] = POINTS[2];
            check_letter++;
        }

        if (WORDC[0][j] == 'd' || WORDC[0][j] == 'd')
        {
            WORDC[0][j] = POINTS[3];
            check_letter++;
        }
        if (WORDC[0][j] == 'e' || WORDC[0][j] == 'E')
        {
            WORDC[0][j] = POINTS[4];
            check_letter++;
        }
        if (WORDC[0][j] == 'f' || WORDC[0][j] == 'F')
        {
            WORDC[0][j] = POINTS[5];
            check_letter++;
        }
        if (WORDC[0][j] == 'g' || WORDC[0][j] == 'G')
        {
            WORDC[0][j] = POINTS[6];
            check_letter++;
        }
        if (WORDC[0][j] == 'h' || WORDC[0][j] == 'H')
        {
            WORDC[0][j] = POINTS[7];
            check_letter++;
        }
        if (WORDC[0][j] == 'i' || WORDC[0][j] == 'I')
        {
            WORDC[0][j] = POINTS[8];
            check_letter++;
        }
        if (WORDC[0][j] == 'j' || WORDC[0][j] == 'J')
        {
            WORDC[0][j] = POINTS[9];
            check_letter++;
        }
        if (WORDC[0][j] == 'k' || WORDC[0][j] == 'K')
        {
            WORDC[0][j] = POINTS[10];
            check_letter++;
        }
        if (WORDC[0][j] == 'l' || WORDC[0][j] == 'L')
        {
            WORDC[0][j] = POINTS[11];
            check_letter++;
        }
        if (WORDC[0][j] == 'm' || WORDC[0][j] == 'M')
        {
            WORDC[0][j] = POINTS[12];
            check_letter++;
        }
        if (WORDC[0][j] == 'n' || WORDC[0][j] == 'N')
        {
            WORDC[0][j] = POINTS[13];
            check_letter++;
        }
        if (WORDC[0][j] == 'o' || WORDC[0][j] == 'O')
        {
            WORDC[0][j] = POINTS[14];
            check_letter++;
        }
        if (WORDC[0][j] == 'p' || WORDC[0][j] == 'P')
        {
            WORDC[0][j] = POINTS[15];
            check_letter++;
        }
        if (WORDC[0][j] == 'q' || WORDC[0][j] == 'Q')
        {
            WORDC[0][j] = POINTS[16];
            check_letter++;
        }
        if (WORDC[0][j] == 'r' || WORDC[0][j] == 'R')
        {
            WORDC[0][j] = POINTS[17];
            check_letter++;
        }
        if (WORDC[0][j] == 's' || WORDC[0][j] == 'S')
        {
            WORDC[0][j] = POINTS[18];
            check_letter++;
        }
        if (WORDC[0][j] == 't' || WORDC[0][j] == 'T')
        {
            WORDC[0][j] = POINTS[19];
            check_letter++;
        }
        if (WORDC[0][j] == 'u' || WORDC[0][j] == 'U')
        {
            WORDC[0][j] = POINTS[20];
            check_letter++;
        }
        if (WORDC[0][j] == 'v' || WORDC[0][j] == 'V')
        {
            WORDC[0][j] = POINTS[21];
            check_letter++;
        }
        if (WORDC[0][j] == 'w' || WORDC[0][j] == 'W')
        {
            WORDC[0][j] = POINTS[22];
            check_letter++;
        }
        if (WORDC[0][j] == 'x' || WORDC[0][j] == 'X')
        {
            WORDC[0][j] = POINTS[23];
            check_letter++;
        }
        if (WORDC[0][j] == 'y' || WORDC[0][j] == 'Y')
        {
            WORDC[0][j] = POINTS[24];
            check_letter++;
        }
        if (WORDC[0][j] == 'z' || WORDC[0][j] == 'Z')
        {
            WORDC[0][j] = POINTS[25];
            check_letter++;
        }
        //if (check_letter != 1) //WORDC[0][j] = 0;
       if ((int) WORDC[0][j] < 65 || (int) WORDC[0][j] > 122)
        {
             WORDC[0][j] = POINTS[26];
             //WORDC[0][j] = 0;
        }

    sum = sum + WORDC[0][j];
    }
    return sum;
*/


