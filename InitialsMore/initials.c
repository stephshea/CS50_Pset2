#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string s = get_string("");
    // printf("%s\n", s);
    //n = length of s
    int n = strlen(s);
    //prints string's first initial in uppercase
    printf("%c", (toupper(s[0])));
    //iterates thru string
    for (int i = 0; i < n; i++)
    {
    //checks for a space between words
        if (s[i] == ' ')
        {
    //if space is found, prints next char in uppercase, then repeats to check for other spaces
            printf("%c", (toupper(s[i + 1])));
        }
    }
    //prints blank line
    printf("\n");
}
