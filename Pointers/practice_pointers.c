#include <stdio.h>

void array_func(int *p);
int main(void)
{

    int arr[5] = {565, 2, 3, 4, 5}, *p;

    p = arr;

    array_func(p);
}

void array_func(int *p)
{
    for (int i = *p; i < *p + 5; i++)
        printf("value = %d\n", *p);
}