#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
// run program, get number for cipher key, initially stored as string
{

    string key; //store key used to cypher
    string plaintext; //store user text to encipher

    if (argc == 2) //check is 2 arguments are entered on command line
    {

        key = argv[1]; //assign argv[1] string to stringKey
        int keylen = strlen(key); //define length of key

        for (int i = 0; i < keylen; i++) // interate through each char in key
        {
            if (!isalpha(key[i])) //check to see if each char in key is alpha
            {
                printf("invalid key\n");
                exit(1);
                //if all chars are not alpha, print error and exit program
            }
        }

        plaintext = get_string("plaintext: ");
        //get text to encipher from user, prompt without new line

        printf("ciphertext: "); //line to print encrypted plaintext

        for (int i = 0, plength = strlen(plaintext), index = 0; i < plength; i++)
        {
            if (isalpha(plaintext[i])) //check if plaintext[i] is alpha
            {

                if (isupper(plaintext[i])) //check if char is uppercase
                {
                    printf("%c", ((plaintext[i] - 'A') + (toupper(key[index]) - 'A')) % 26 + 'A');
                    // convert upperChars with key shift to ascii to alpha to ascii
                }

                else if (islower(plaintext[i]))
                {
                    printf("%c", ((plaintext[i] - 'a') + (tolower(key[index]) - 'a')) % 26 + 'a');
                    //converts lowerChars with key shift to ascii to alpha to ascii
                }

                index = (index + 1) % keylen;
                //makes key loop through chars then back to key[0]

            }
            else
            {
                printf("%c", plaintext[i]); //if char is not alpha, print as is
            }
        }
        printf("\n"); //print new line
    }
    else
    {
        printf("Usage: ./vigenere k\n");
        exit(1); //instead of return 1
    }
    return 0;
}