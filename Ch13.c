#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <stdlib.h>

#define STR_LEN 80
#define SENT_LEN 50
// read a string line and relay the number of characters
int read_line(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
        if (i < n)
            str[i++] = ch;
    str[i] = '\0';
    return i;
}

// count spaces in a string

int count_spaces(const char s[])
{
    int count = 0, i;

    for (i = 0; s[i] != '\0'; i++)
    {
        if (s[i] == ' ')
            count++;
    }
    return count;
}

int count_spaces_pointer(const char *s)
{
    int count = 0;

    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}

int count_spacez(const char *s)
{
    int count = 0;
    for (; *s != '\0'; s++)
        if (*s == ' ')
            count++;
    return count;
}
int main()
{

    char str[] = "Hello World";
    char *str2;
    strncpy(str2, str, sizeof(str) - 1);
    str2[sizeof(str)] = '\0';

    printf("%s\n", str2);
    printf("%d\n", count_spacez(str));
    return 0;
}