#include <stdio.h>
#define N 10
void max_min(int a[], int n, int *max, int *min);
int main()
{
    int a = 5, b = 5;
    int c[N] = {12, 22, 13, 44, 5, 45, 65, 3, 4, 17};
    max_min(c, N, &a, &b);
    printf("Max: %d, Min: %d\n", a, b);
    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{

    *max = *min = a[0]; // max and min point to first element

    for (int i = 1; i < n; i++)
    {
        if (a[i] > *max)
        {
            *max = a[i];
        }
        else if (a[i] < *min)
        {
            *min = a[i];
        }
    }
}