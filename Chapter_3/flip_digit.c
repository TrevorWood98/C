#include <stdio.h>

int main(void)
{
    int a, b, c;
    printf("Enter a two digit number: \n");
    scanf("%d", &a);
    b = a / 10;
    c = a % 10;

    printf("%d%d\n", c, b);
}