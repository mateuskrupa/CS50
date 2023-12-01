/*#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{

    string key = argv[1];
    int keyC = atoi(key);


    string before = get_string("plaintext: ");

char after;

    printf("ciphertext: ");
    for (int i = 0, len = strlen(before); i < len; i++)
    {
        after = before[i] + keyC;
        isalpha(after);

        int mai = after - 26;
        isalpha(mai);

        //printf("%c", after);

        if (after <= 122)
        {
            printf("%c", after);

        }
        else
        {
            if (isalpha(mai))
            {
                printf("%c", mai);
            }
            else
            {
                printf("erro\n");
            }

        }

    }
    printf("\n");


}*/


#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s key\n", argv[0]);
        return 1;
    }

    string key = argv[1];

    for (int i = 0, len = strlen(key); i < len; i++)
    {
        if (!isdigit(key[i]))
        {
            printf("Key must be a non-negative integer.\n");
            return 1;
        }
    }

    int keyC = atoi(key);

    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");

    for (int i = 0, len = strlen(plaintext); i < len; i++)
    {
        char currentChar = plaintext[i];

        if (isalpha(currentChar))
        {
            char base = isupper(currentChar) ? 'A' : 'a'; // Determine a base ('A' ou 'a') com base no caso da letra.
            char encryptedChar = (currentChar - base + keyC) % 26 + base; // Aplica a cifra de César.
            printf("%c", encryptedChar);
        }
        else
        {
            printf("%c", currentChar); // Mantém caracteres não alfabéticos inalterados.
        }
    }

    printf("\n");
    return 0;
}



