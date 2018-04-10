#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(int argc, string argv[])
{
//get cipher key from user
string k;
//argc must be 2; keep asking for one string?


//use do while to make ure int?
k = get_string("enter cipher integer: ");
string text = get_string("enter text to cipher: ");
//get cipher code
// if( argc > 3)
// {
//     printf("too many args");
//     return 0;
// }
// else
// {
argc = 2;
 k = argv[1];
//     int key = atoi(k);
//     printf("%d\n", key);
// }

// for (int i = 0, n = strlen(text); i < n; i++)
//     {
//         printf("%c", text[i]);
//     }


//string s = get_string("Name: ");
    for (int i = 0; i < strlen(text); i++)
    {
        //printing ascii for string + 4 for each char
        printf("%c %i\n", text[i], (int) text[i]+4);
    }
}

// char letter = 'Z';
//  if (isupper(letter))
//  {
//     printf(letter);
//  }