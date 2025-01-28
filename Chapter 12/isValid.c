#include <stdio.h>
#include <stdbool.h>
#define N 10

int main(void)
{

    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = &a;

    int isVaid = (p == a[0]);
    printf("%d\n", isVaid);
    int isValidTwo = (p == &a[0]);
    printf("%d\n", isValidTwo);
    int isValidThree = (*p == &a[0]);
    printf("%d\n", isValidThree);
    int isValidFour = (p[0] == &a[0]);
    printf("%d\n", isValidFour);
    return 0;
}