#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#define BUFFER 100
void isPalidrome(char *s);
void testPalidrome(int test);
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

    isPalidrome(s);
    free(s);
    return 0;
}

void isPalidrome(char *s)
{
    int palidrome = 1;
    char *right = s + strlen(s) - 1;
    char *left = s; // start

    char leftChar = toupper(*left);
    char rightChar = toupper(*right);

    while (left < right)
    {
        while (left < right && !isalpha(*left))
            left++;
        while (left < right && !isalpha(*right))
            right--;
        leftChar = toupper(*left);
        rightChar = toupper(*right);

        if (leftChar != rightChar)
        {
            palidrome = 0;
            break;
        }

        left++;
        right--;
    }

    testPalidrome(palidrome);
}

void testPalidrome(int test)
{
    switch (test)
    {
    case 1:
        printf("Palidrome\n");
        break;
    default:
        printf("Not a Palidrome\n");
        break;
    }
}
