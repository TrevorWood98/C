#include <stdio.h>
#include <string.h>
#include <ctype.h>

// count spaces in a string

int main()
{

    char ch;
    int len = 0;

    printf("Enter a message: ");

    while ((ch = getchar()) != '\n')
    {
        len++;
    }

    printf("Your message was %d characters long.\n", len);

    return 0;
}