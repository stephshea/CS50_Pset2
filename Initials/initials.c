#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string s = get_string("name: ");
    printf("%s\n", s);

    int n = strlen(s);
    printf("%c", (toupper(s[0])));
    for (int i = 0; i < n; i++)
    {

        if (s[i] == ' ')
        {

            printf("%c", (toupper(s[i + 1])));
        }
    }
}
