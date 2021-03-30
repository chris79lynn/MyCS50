#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <math.h>

int letter_count(int length, string letter_string);
int word_count(int length, string word_string);
int sentence_count (int length, string sentence_string);
float grade_calc (int letters, int sentences, int words);

int main (void)
{
    // string get_letters =  get_string("Text:");

    string alphabetic = get_string("Text:");
    int counter = strlen(alphabetic);

    int num_letters = letter_count(counter, alphabetic);
    printf("%i\n", num_letters);

    int num_words = word_count(counter, alphabetic);
    printf("%i\n", num_words);

    int num_sentences = sentence_count(counter, alphabetic);
    printf("%i\n", num_sentences);

    float grade = grade_calc(num_letters, num_sentences, num_words);

    if (grade >= 1 && grade < 16)
    {
        printf("Grade %d", (int)grade);
    }
    if (grade < 1)
    {
        printf("Before Grade 1");
    }
    if (grade >= 16)
    {
        printf("Grade 16+");
    }

}

int letter_count (int length, string letter_string)
{
    length = strlen(letter_string);

    int letters = 0;
    for (int i = 0; i < length; i++)
    {
      if (letter_string[i] != 32 && isalpha(letter_string[i]))
      {
          letters++;
      }
    } return letters;
}

int word_count(int length, string word_string)
{
    length = strlen(word_string);

    int words = 0;
    for (int i = 0; i < length; i++)
    {
      if (word_string[i] == 32)
      {
          words++;
      }
    } return words+1;
}

int sentence_count (int length, string sentence_string)
{
    length = strlen(sentence_string);
    int sentences = 0;
    for (int i = 0; i < length; i++)
    {
        if (sentence_string[i] == '!' || sentence_string[i] ==  '.' || sentence_string[i] == '?')
        {
            sentences++;
        }
    } return sentences;
}

float grade_calc (int letters, int sentences, int words)
{
    float l_per_w = ((float)letters / (float)words) * 100.00;
    float s_per_w = ((float)sentences / (float)words) * 100.00;

    float index = 0.0588 * l_per_w - 0.296 * s_per_w - 15.8;

    return round(index);
}

    //ADD:
    //Before Grade 1
    //16++
