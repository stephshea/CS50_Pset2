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
if( argc > 2)
{
    printf("too many args");
    return 0;
}
else
{
    k = argv[1];
    int key = atoi(k);
    printf("%d\n", key);
}

for (int i = 0, n = strlen(text); i < n; i++)
    {
        printf("%c", text[i]);
    }
}

// char letter = 'Z';
//  if (isupper(letter))
//  {
//     printf(letter);
//  }