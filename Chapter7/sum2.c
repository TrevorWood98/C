#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define BUFFER 100
void isPalidrome(char *s);
int main()
{

    int c = 0;
    char *p = malloc(100 * sizeof(char));
    char *s = p;

    if (p == NULL)
    {
        printf("INvalid");
        return 1;
    }

    printf("Enter a string of letters: \n");

    while ((c = getchar()) != '\n' && c != EOF)
    {
        *p = c;
        p++;
    }
    *p = '\0';

    printf("User input: %s\n", s);

    isPalidrome(s);
    free(s);
    return 0;
}

void isPalidrome(char *s)
{
    char *right = s + strlen(s);
    char *left = s; // start

    char leftChar = toupper(*left);
    char rightChar = toupper(*right);

    while (left < right)
    {

        while (left < right)
            left++;

        while (right > left)
            right--;
    }

    printf("Is a Plaidrome");
}
