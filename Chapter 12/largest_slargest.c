#include <stdio.h>
#include <stdbool.h>
#define N 10
void find_two_largest(const int *a, int n, int *largest, int *second_largest);
int main()
{
    int myArray[N] = {41, 25, 335, 44, 145, 36, 77, 438, 99, 10};
    int large = 0, semiLarge = 0;
    find_two_largest(myArray, N, &large, &semiLarge);
    printf("Largest: %d, Second Largest: %d", large, semiLarge);
    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    // declare temp, *p, and assign second_largest to element 1 & largest to element 2
    int temp = 0;
    const int *p;
    *second_largest = *a;
    *largest = *(a + 1);

    if (*second_largest > *largest)
    {
        temp = *largest;
        *largest = *second_largest;
        *second_largest = temp;
    }

    for (p = a + 2; p < a + N; p++)
    {
        if (*p > *largest)
        {
            *second_largest = *largest;
            *largest = *p;
        }
        else if (*p > *second_largest)
            *second_largest = *p;
    }
}