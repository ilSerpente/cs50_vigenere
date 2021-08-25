#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int shift(char c);
int main(int argc, string argv[])
{
    if (argc != 2)
    {
        printf("Usage: ./vigenere keyword");
        return 1;
    }
    for (int i = 0; i < strlen(argv[1]); i++)
    {
        if (!isalpha(argv[1][i]))
        {        
            printf("Usage: ./vigenere keyword\n");
            return 1;
        }
    }
    string plaintext = get_string("plaintext: ");
    printf("ciphertext: ");
    int i = 0;
    int j = 0;
    int length = strlen(plaintext);
    int keyLen = strlen(argv[1]);
    int key = shift((argv[1][i % keyLen]));
    for (i = 0; j < length; j++)
    {
        key = shift((argv[1][i % keyLen]));
        if (isupper (plaintext[j]))
        {
            printf("%c",(plaintext[j] - 'A' + key) % 26 + 'A');
            i++;
        }
        else if (islower(plaintext[j]))
        {
            printf("%c", (plaintext[j] - 'a' + key) % 26 + 'a');
            i++;
        }
        else
        {
            printf("%c", plaintext[j]);
        }
    }
   
    printf("\n");
}
int shift(char c)
{
    int k;
    if (isupper(c))
    {
        k = c - 65;
        return k;
    }
    else if (islower(c))
    {
        k = c - 97;
        return k;
    }
    else
    {
    return 1;
    }
}
