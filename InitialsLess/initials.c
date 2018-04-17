#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    string name; //user input
    int len; //length of name

    name = get_string("enter name: "); //promts user for name
    printf("%s\n", name); //prints name

    len = strlen(name); //setting len to lenth of input

    printf("%c", (toupper(name[0]))); //prints string's first initial in uppercase

    //iterates thru chars of string
    for (int i = 0; i < len; i++)
    {

    //checks current index to see if there's a space
        if (name[i] == ' ')
        {

    //if space is found, prints next char in uppercase, then repeats to check for other spaces
            printf("%c", (toupper(name[i + 1])));
        }
    }
    //prints blank line
    printf("\n");
}
