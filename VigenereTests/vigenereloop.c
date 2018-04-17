#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[]) // run program, get number for cipher key, initially stored as string
{

    string cipherText; //store user text to encipher

    int i, j; // increment through plaintext
    char ciphe; //store each letter as being cyphered

    // int length = strlen(keyword);
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

    // int keyindex = strlen(cipherText) % strlen(keyword);
    // int key; //stores stringKey as int

    printf("ciphertext: "); //line to print encrypted plaintext

    for (i = 0; i < strlen(cipherText); i++) // interate through each char in plaintext string
    {

        if (!isalpha(cipherText[i]))
        {
            ciphe = cipherText[i]; //if char is not alpha, print as is   // I think I just printf the character out here.
        }

        if (isalpha(cipherText[i])) //check to see if each char is alpha
        {
            // I created variables keyindex and k(k is to increment)and varable to store alphabetic indexing amount
            //  if plaintext character isalpha
            //  keyindex = count of characters in plaintext % key length

            //  check if key in position keyindex is uppercase
            //  convert for upper and set a variable to store number of characters to convert.
            // check if key in position keyindex is lowercase
            // convert for lower and set a variable to store number of characters to convert.

            // increment k

            for (j = 0; j < strlen(keyword); j++) // interate through each char in plaintext string

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

            else
            {
                ciphe = cipherText[i];
                j--;
            }
                }
        }

        printf("%c", ciphe); //print enciphered chars
    }
    printf("\n"); //print new line

    return 0;
}