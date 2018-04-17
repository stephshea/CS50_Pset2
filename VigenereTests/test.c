#include <cs50.h>
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, string argv[]) // run program, get number for cipher key, initially stored as string
{

    string cipherText; //store user text to encipher
    // int key; //stores stringKey as int
    int i; // increment through plaintext
    char ciphe; //store each letter as being cyphered

    char key;
    if (argc == 2) //argc must be 2
    {
        cipherText = get_string("plaintext: "); //get text to encipher from user, prompt without new line
    }
    else
    {
        printf("you must enter 2 args\n"); //display error if use does not enter two args
        return 1; //end program
    }

    //assign argv[1] string to stringKey
    string keyword = argv[1];
    // int length = strlen(keyword);

    printf("ciphertext: "); //line to print encrypted plaintext

    for (i = 0; i < strlen(cipherText); i++) // interate through each char in plaintext string
    {
        if (!isalpha(cipherText[i]))
        {
            ciphe = cipherText[i]; //if char is not alpha, print as is   // I think I just printf the character out here.

        }

        else if (cipherText[i] == ' ')
        {
            ciphe = ' '; //if char is not alpha, print as is   // I think I just printf the character out here.


        }
        else if (isalpha(cipherText[i])) //check to see if each char is alpha
        {
            key = keyword[i%strlen(keyword)] - 'a';

            if (isupper(cipherText[i])) //check if char is uppercase
            {
                ciphe = ((cipherText[i] - 'A' + key) % 26) + 'A'; // convert upperChars with key shift to ascii to alpha to ascii

            }
            else if (islower(cipherText[i]))
            {
                ciphe = ((cipherText[i] - 'a' + key) % 26) + 'a'; //converts lowerChars with key shift to ascii to alpha to ascii

            }

        }

        printf("%c", ciphe); //print enciphered chars
    }
    printf("\n"); //print new line

    return 0;
}