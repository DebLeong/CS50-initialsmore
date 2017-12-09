#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int    checkspace(char c);

int main()
{
    string name = get_string();
    // prints first char of string if not space
    if (!checkspace(name[0]))
        printf("%c", toupper(name[0]));
    // iterates through string
    for (int i = 0, n = strlen(name); i < n; i++)
    {
        // finds the first space
        if (checkspace(name[i]))
            // if char after space is not nul then print char
            if (!checkspace(name[i + 1]))
                if (name[i + 1] != '\0')
                    printf("%c", toupper(name[i + 1]));
    }
    printf("\n");
}

// function returns true if char is space and false if not
int    checkspace(char c)
{
    if (c == ' ')
        return 1;
    else
        return 0;
}