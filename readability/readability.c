#include <cs50.h>
#include <ctype.h>
#include <math.h>
#include <stdio.h>
#include <string.h>

int count_letters(string text);
int count_words(string text);
int count_sentences(string text);

int main(void)
{
    string text = get_string("Text: ");
    float letras = count_letters(text);
    float palavras = count_words(text);
    float frases = count_sentences(text);

    int conta1 = (letras / palavras) * 100;
    int conta2 = (frases / palavras) * 100;

    float index = ((0.0588 * ((letras / palavras) * 100)) - (0.296 * ((frases / palavras) * 100))) - 15.8;
    int indexc = round(index);

    if (indexc < 1)
    {
        printf("Before Grade 1\n");
    }
    else if (indexc > 15)
    {
        printf("Grade 16+\n");
    }
    else
    {
        printf("Grade %i\n", indexc);
    }
}

int count_letters(string text)
{
    int cont = 0;

    for (int i = 0, len = strlen(text); i < len; i++)
    {
        if (text[i] != ' ' && text[i] != '.' && text[i] != ',' && text[i] != '!' && text[i] != '?' && text[i] != ':' && text[i] != '\"' && text[i] != ';' && text[i] != '-' && text[i] != '\'')
        {
            cont++;
        }
    }
    return cont;
}

int count_words(string text)
{
    int cont = 1;

    for (int j = 0, len = strlen(text); j < len; j++)
    {
        if (text[j] == ' ')
        {
            cont++;
        }
    }

    return cont;
}

int count_sentences(string text)
{
    int cont = 0;

    for (int k = 0, len = strlen(text); k < len; k++)
    {
        if (text[k] == '.' || text[k] == '!' || text[k] == '?')
        {
            cont++;
        }
    }
    return cont;
}