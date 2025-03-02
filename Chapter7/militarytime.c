#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    int hour = 0, minute = 0;
    char ap[3];
    printf("Enter a 12-hours time: ");
    scanf("%d:%d %2s", &hour, &minute, ap);

    ap[0] = toupper(ap[0]);
    ap[1] = toupper(ap[1]);

    if (strcmp(ap, "AM") == 0)
    {
        printf("%d:%d", hour, minute);
    }
    if (strcmp(ap, "PM") == 0)
    {
        printf("%d:%d", hour + 12, minute);
    }
    return 0;
}