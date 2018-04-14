#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
string text = "Abby is Great";
int i;
int key = 5;
for(i = 0; i <strlen(text); i++)

//if (isalpha(i))
{

    printf("%c %i %c\n", text[i], (int) text[i] + key, text[i] + key);
}


}